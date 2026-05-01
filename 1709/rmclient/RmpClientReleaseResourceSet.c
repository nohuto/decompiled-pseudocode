/*
 * XREFs of RmpClientReleaseResourceSet @ 0x180005660
 * Callers:
 *     RmReleaseResourceSetEx @ 0x180005490 (RmReleaseResourceSetEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientReleaseResourceSet(__int64 a1, __int64 a2, int a3)
{
  CLIENT_CALL_RETURN result; // rax
  int v6; // edi
  unsigned __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int64 v9; // rax
  int v10; // ecx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-68h]
  unsigned __int64 v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+68h] [rbp-40h]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010B70, 6u, 0LL, *(_QWORD *)(a1 + 16), a2, a3).Pointer;
  if ( SLODWORD(result.Simple) < 0 )
    return result;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v16 = 0LL;
  v17 = a2;
  RtlAcquireSRWLockExclusive(a1 + 32);
  *(_DWORD *)(a1 + 40) = GetCurrentThreadId();
  v6 = *(_BYTE *)(a1 + 56) & 1;
  v7 = *(_QWORD *)(a1 + 48);
  if ( !v7 )
    goto LABEL_21;
  do
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 40) + 72LL);
    if ( v8 == RmpClientCallbackCompareToPayload )
    {
      v9 = v18;
      if ( !(_DWORD)v16 )
        v9 = v17;
      if ( v9 < *(_QWORD *)(v7 + 48) )
        v10 = -1;
      else
        v10 = v9 > *(_QWORD *)(v7 + 48);
    }
    else
    {
      v10 = v8((__int64)&v16, v7);
    }
    if ( v10 < 0 )
    {
      v11 = *(_QWORD *)v7;
      if ( !v6 || !v11 )
        goto LABEL_11;
    }
    else
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v7 + 8);
      if ( !v6 || !v11 )
      {
LABEL_11:
        v7 = v11;
        continue;
      }
    }
    v7 ^= v11;
  }
  while ( v7 );
  if ( v7 )
  {
    RtlRbRemoveNode(a1 + 48, v7);
    v12 = (_QWORD *)(v7 + 24);
    v13 = *(_QWORD **)(a1 + 72);
    if ( *v13 != a1 + 64 )
      __fastfail(3u);
    *v12 = a1 + 64;
    v12[1] = v13;
    *v13 = v12;
    *(_QWORD *)(a1 + 72) = v12;
    v14 = *(_QWORD *)(a1 + 24);
    RtlAcquireSRWLockExclusive(v14 + 32);
    v15 = *(_DWORD *)(v14 + 64) | 2;
    *(_DWORD *)(v14 + 64) = v15;
    if ( (v15 & 1) == 0 )
    {
      *(_DWORD *)(v14 + 64) = v15 | 1;
      TpPostWork(*(_QWORD *)(v14 + 56));
    }
    RtlReleaseSRWLockExclusive(v14 + 32);
  }
LABEL_21:
  *(_DWORD *)(a1 + 40) = 0;
  RtlReleaseSRWLockExclusive(a1 + 32);
  return 0LL;
}

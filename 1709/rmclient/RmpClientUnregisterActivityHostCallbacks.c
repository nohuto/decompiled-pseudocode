/*
 * XREFs of RmpClientUnregisterActivityHostCallbacks @ 0x1800054A0
 * Callers:
 *     RmUnregisterActivityHostCallbacks @ 0x180005480 (RmUnregisterActivityHostCallbacks.c)
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientUnregisterActivityHostCallbacks(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  int v5; // edi
  unsigned __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int64 v8; // rax
  int v9; // ecx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  int v15; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-68h]
  unsigned __int64 v17; // [rsp+48h] [rbp-60h]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010B70, 3u, 0LL, *(_QWORD *)(a1 + 16), a2).Pointer;
  if ( SLODWORD(result.Simple) < 0 )
    return result;
  memset_0(&v15, 0, 0x38uLL);
  v15 = 0;
  v16 = a2;
  RtlAcquireSRWLockExclusive(a1 + 32);
  *(_DWORD *)(a1 + 40) = GetCurrentThreadId();
  v5 = *(_BYTE *)(a1 + 56) & 1;
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
    goto LABEL_18;
  do
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 + 40) + 72LL);
    if ( v7 == RmpClientCallbackCompareToPayload )
    {
      v8 = v17;
      if ( !v15 )
        v8 = v16;
      if ( v8 < *(_QWORD *)(v6 + 48) )
        v9 = -1;
      else
        v9 = v8 > *(_QWORD *)(v6 + 48);
    }
    else
    {
      v9 = v7((__int64)&v15, v6);
    }
    if ( v9 < 0 )
    {
      v10 = *(_QWORD *)v6;
      if ( !v5 || !v10 )
        goto LABEL_11;
    }
    else
    {
      if ( v9 <= 0 )
        break;
      v10 = *(_QWORD *)(v6 + 8);
      if ( !v5 || !v10 )
      {
LABEL_11:
        v6 = v10;
        continue;
      }
    }
    v6 ^= v10;
  }
  while ( v6 );
  if ( v6 )
  {
    RtlRbRemoveNode(a1 + 48, v6);
    v11 = (_QWORD *)(v6 + 24);
    v12 = *(_QWORD **)(a1 + 72);
    if ( *v12 != a1 + 64 )
      __fastfail(3u);
    *v11 = a1 + 64;
    v11[1] = v12;
    *v12 = v11;
    *(_QWORD *)(a1 + 72) = v11;
    v13 = *(_QWORD *)(a1 + 24);
    RtlAcquireSRWLockExclusive(v13 + 32);
    v14 = *(_DWORD *)(v13 + 64) | 2;
    *(_DWORD *)(v13 + 64) = v14;
    if ( (v14 & 1) == 0 )
    {
      *(_DWORD *)(v13 + 64) = v14 | 1;
      TpPostWork(*(_QWORD *)(v13 + 56));
    }
    RtlReleaseSRWLockExclusive(v13 + 32);
  }
LABEL_18:
  *(_DWORD *)(a1 + 40) = 0;
  RtlReleaseSRWLockExclusive(a1 + 32);
  return 0LL;
}

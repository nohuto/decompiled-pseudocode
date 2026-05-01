/*
 * XREFs of HamCloseActivity @ 0x1800051A0
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180005570 (HampIpcChannelObjectComparePayloadForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCloseActivity(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  CLIENT_CALL_RETURN v5; // rdx
  CLIENT_CALL_RETURN v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  _QWORD v17[13]; // [rsp+40h] [rbp-68h] BYREF

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010878, 0xAu, 0LL, *(_QWORD *)a1, a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    memset(&v17[3], 0, 40);
    v17[0] = a2;
    v17[1] = 0LL;
    v17[2] = 3LL;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlAcquireSRWLockExclusive)(
      a1 + 24,
      (CLIENT_CALL_RETURN)v5.Simple,
      (CLIENT_CALL_RETURN)v6.Simple);
    *(_DWORD *)(a1 + 32) = GetCurrentThreadId();
    v7 = *(_QWORD *)(a1 + 48);
    v8 = *(_QWORD *)(a1 + 40);
    if ( (v7 & 1) != 0 && v8 )
      v8 ^= a1 + 40;
    v9 = v7 & 1;
    if ( v8 )
    {
      do
      {
        v10 = HampIpcChannelObjectComparePayloadForTree(v17, v8);
        if ( v10 >= 0 )
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_QWORD *)v8;
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
      while ( v8 );
      if ( v8 )
      {
        RtlRbRemoveNode(a1 + 40, v8);
        v13 = (_QWORD *)(v8 + 24);
        v14 = *(_QWORD **)(a1 + 64);
        if ( *v14 != a1 + 56 )
          __fastfail(3u);
        *v13 = a1 + 56;
        v13[1] = v14;
        *v14 = v13;
        *(_QWORD *)(a1 + 64) = v13;
        v15 = *(_QWORD *)(a1 + 16);
        RtlAcquireSRWLockExclusive(v15 + 32, v14, v12);
        v16 = *(_DWORD *)(v15 + 64) | 2;
        *(_DWORD *)(v15 + 64) = v16;
        if ( (v16 & 1) == 0 )
        {
          *(_DWORD *)(v15 + 64) = v16 | 1;
          TpPostWork(*(_QWORD *)(v15 + 56));
        }
        RtlReleaseSRWLockExclusive(v15 + 32);
      }
    }
    *(_DWORD *)(a1 + 32) = 0;
    RtlReleaseSRWLockExclusive(a1 + 24);
    return 0LL;
  }
  return result;
}

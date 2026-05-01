/*
 * XREFs of RmpClientUnregisterActivityHostCallbacks @ 0x180004868
 * Callers:
 *     RmUnregisterActivityHostCallbacks @ 0x1800047C0 (RmUnregisterActivityHostCallbacks.c)
 * Callees:
 *     HamIpcChannelObjectMakeZombie @ 0x180004AA0 (HamIpcChannelObjectMakeZombie.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientUnregisterActivityHostCallbacks(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  int v5; // [rsp+38h] [rbp-40h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108D8, 3u, 0LL, *(_QWORD *)(a1 + 16), a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    memset_0(&v5, 0, 0x38uLL);
    v5 = 0;
    v6 = a2;
    HamIpcChannelObjectMakeZombie(a1 + 24, &v5);
    return 0LL;
  }
  return result;
}

/*
 * XREFs of RmpClientReleaseResourceSet @ 0x1800047C8
 * Callers:
 *     RmReleaseResourceSetEx @ 0x1800047B0 (RmReleaseResourceSetEx.c)
 * Callees:
 *     HamIpcChannelObjectMakeZombie @ 0x180004AA0 (HamIpcChannelObjectMakeZombie.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientReleaseResourceSet(__int64 a1, __int64 a2, int a3)
{
  CLIENT_CALL_RETURN result; // rax
  int v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108D8, 6u, 0LL, *(_QWORD *)(a1 + 16), a2, a3).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    memset_0(&v7, 0, 0x38uLL);
    v7 = 0;
    v8 = a2;
    HamIpcChannelObjectMakeZombie(a1 + 24, &v7);
    return 0LL;
  }
  return result;
}

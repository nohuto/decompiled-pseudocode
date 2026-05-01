/*
 * XREFs of HamCloseActivity @ 0x18000D0D0
 * Callers:
 *     <none>
 * Callees:
 *     HamIpcChannelObjectMakeZombie @ 0x18000D90C (HamIpcChannelObjectMakeZombie.c)
 */

CLIENT_CALL_RETURN __fastcall HamCloseActivity(_QWORD *a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  _QWORD v5[4]; // [rsp+38h] [rbp-20h] BYREF

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800109C0, 4u, 0LL, *a1, a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v5[1] = 0LL;
    v5[0] = a2;
    v5[2] = 3LL;
    HamIpcChannelObjectMakeZombie(a1 + 2, v5);
    return 0LL;
  }
  return result;
}

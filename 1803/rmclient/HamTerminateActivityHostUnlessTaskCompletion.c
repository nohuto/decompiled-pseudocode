/*
 * XREFs of HamTerminateActivityHostUnlessTaskCompletion @ 0x180004360
 * Callers:
 *     HamTerminateActivityHost @ 0x180004FE0 (HamTerminateActivityHost.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateActivityHostUnlessTaskCompletion(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  CLIENT_CALL_RETURN result; // rax

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010878, 7u, 0LL, *a1, a2, a3, a4, a5).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}

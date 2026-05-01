/*
 * XREFs of HamTerminateActivityHost @ 0x18000D670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateActivityHost(_QWORD *a1, __int64 a2, int a3, int a4)
{
  CLIENT_CALL_RETURN result; // rax

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800109C0, 8u, 0LL, *a1, a2, a3, a4).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}

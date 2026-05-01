/*
 * XREFs of HamQueryTaskCompletionsForTerminateGraph @ 0x18000CE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamQueryTaskCompletionsForTerminateGraph(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  CLIENT_CALL_RETURN result; // rax
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+60h] [rbp+18h]
  CLIENT_CALL_RETURN v7; // [rsp+68h] [rbp+20h]

  v6 = a3;
  v5 = 0LL;
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108A8, 3u, 0LL, *a1, a2, &v5).Pointer;
  v7.Pointer = result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    *a3 = v5;
    return 0LL;
  }
  return result;
}

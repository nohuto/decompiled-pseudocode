/*
 * XREFs of CrmRpcSrvSubscribe @ 0x18006E280
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x18002B3B0 (CempRpcQueryClientInformation.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     CrmSrvSubscribe @ 0x180069FB0 (CrmSrvSubscribe.c)
 */

__int64 __fastcall CrmRpcSrvSubscribe(void *a1, struct _WNF_STATE_NAME **a2, signed int a3, _QWORD *a4)
{
  __int64 result; // rax
  _BYTE v8[80]; // [rsp+30h] [rbp-88h] BYREF

  if ( a3 >= 16 )
    return 3221225485LL;
  result = CempRpcQueryClientInformation(a1, (__int64)v8, 0LL, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = CrmSrvSubscribe(a2, a3, a4, v8);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}

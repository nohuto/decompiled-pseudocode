/*
 * XREFs of AlpcpLogClosePort @ 0x1406B2758
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x1404745FC (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406B26C4 (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogClosePort(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v2 = *(_DWORD *)(a1 + 264);
  v5 = 9;
  v4 = v1;
  v6 = v2;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x1Cu);
}

/*
 * XREFs of AlpcpLogConnectSuccess @ 0x1406B2880
 * Callers:
 *     NtSecureConnectPort @ 0x140470F8C (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1404730E0 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406B26C4 (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogConnectSuccess(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v5 = a1;
  v4 = 7;
  v3 = v1;
  return AlpcpInvokeLogCallbacks((__int64)&v3, 0x1Cu);
}

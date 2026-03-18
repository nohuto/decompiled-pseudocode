/*
 * XREFs of AlpcpLogConnectSuccess @ 0x1407494B8
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1407492FC (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogConnectSuccess(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v5 = a1;
  v4 = 7;
  v3 = v1;
  return AlpcpInvokeLogCallbacks((__int64)&v3, 0x1Cu);
}

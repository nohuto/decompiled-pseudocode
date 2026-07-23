/*
 * XREFs of PopNetPublishWnfStateUpdate @ 0x14064FD64
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14064FB20 (PopNetEvaluationWorkerCallback.c)
 *     PopNetInitialize @ 0x1408A7F78 (PopNetInitialize.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopNetPublishWnfStateUpdate(char a1)
{
  int v1; // eax
  NTSTATUS result; // eax
  unsigned __int64 Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 0xFFFFFFFF00000000uLL;
  if ( a1 )
    v1 = 3;
  else
    v1 = 1;
  LODWORD(Buffer) = v1;
  result = ZwUpdateWnfStateData(&WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY, &Buffer, 8u, 0LL, 0LL, 0, 0);
  PopNetStandbyStatePublished = 1;
  return result;
}

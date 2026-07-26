/*
 * XREFs of ndisTracePeriodicReceivesStart @ 0x1C00511DC
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0068148 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00691D0 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     Template_q @ 0x1C00439B8 (Template_q.c)
 */

NTSTATUS __fastcall ndisTracePeriodicReceivesStart(__int64 a1)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  __int64 v4; // rcx
  _QWORD WnodeEventItem[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(WnodeEventItem, 0, 0x38uLL);
  v2 = *(_QWORD *)(a1 + 4048) >> 24;
  LOWORD(WnodeEventItem[0]) = 56;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  LODWORD(WnodeEventItem[6]) = v2 & 0xFFFFFF;
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 20;
  HIDWORD(WnodeEventItem[6]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C0093FD0;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
    return Template_q(v4, &QueuedReceiveStart, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF);
  return result;
}

/*
 * XREFs of ndisTracePeriodicReceivesStart @ 0x1C00506F4
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0069B48 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006B250 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     McTemplateK0q @ 0x1C0041240 (McTemplateK0q.c)
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
  WnodeEventItem[1] = qword_1C009AF10;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (dword_1C009AF04 & 0x200) != 0 )
    return McTemplateK0q(v4, &QueuedReceiveStart, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF);
  return result;
}

/*
 * XREFs of ndisTraceDpcStart @ 0x1C004FB40
 * Callers:
 *     ndisMWakeUpDpcX @ 0x1C00096F0 (ndisMWakeUpDpcX.c)
 *     ndisMTimerDpcX @ 0x1C0009FC0 (ndisMTimerDpcX.c)
 *     ndisInterruptDpc @ 0x1C000A480 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0018B70 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMTimerObjectDpc @ 0x1C0023190 (ndisMTimerObjectDpc.c)
 *     ndisMOidRequestToRequest @ 0x1C0044C04 (ndisMOidRequestToRequest.c)
 *     ndisMDpc @ 0x1C00624FC (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C0062714 (ndisMDpcX.c)
 *     ndisMTimerDpc @ 0x1C0062950 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C0062B70 (ndisMWakeUpDpc.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     McTemplateK0qq @ 0x1C004E838 (McTemplateK0qq.c)
 */

NTSTATUS __fastcall ndisTraceDpcStart(__int64 a1, unsigned int a2)
{
  unsigned int v4; // eax
  NTSTATUS result; // eax
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  _QWORD WnodeEventItem[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  v4 = (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v4);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 21;
  LODWORD(WnodeEventItem[7]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C0099FD0;
  LOWORD(WnodeEventItem[0]) = 64;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (dword_1C0099FC4 & 0x200) != 0 )
    return McTemplateK0qq(v6, &DpcStart, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF, a2);
  return result;
}

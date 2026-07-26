/*
 * XREFs of ndisTraceDpcStart @ 0x1C0050488
 * Callers:
 *     ndisInterruptDpc @ 0x1C0003D80 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0007AB0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMWakeUpDpcX @ 0x1C0008990 (ndisMWakeUpDpcX.c)
 *     ndisMTimerDpcX @ 0x1C000F2F0 (ndisMTimerDpcX.c)
 *     ndisMTimerObjectDpc @ 0x1C0011410 (ndisMTimerObjectDpc.c)
 *     ndisMOidRequestToRequest @ 0x1C0045DD4 (ndisMOidRequestToRequest.c)
 *     ndisMDpc @ 0x1C0063004 (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C0063224 (ndisMDpcX.c)
 *     ndisMTimerDpc @ 0x1C0063460 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C0063690 (ndisMWakeUpDpc.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     McTemplateK0qq @ 0x1C004F1A0 (McTemplateK0qq.c)
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
  WnodeEventItem[1] = qword_1C009AF10;
  LOWORD(WnodeEventItem[0]) = 64;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (dword_1C009AF04 & 0x200) != 0 )
    return McTemplateK0qq(v6, &DpcStart, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF, a2);
  return result;
}

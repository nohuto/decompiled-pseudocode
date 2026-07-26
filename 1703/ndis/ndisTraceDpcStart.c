/*
 * XREFs of ndisTraceDpcStart @ 0x1C0050F70
 * Callers:
 *     ndisInterruptDpc @ 0x1C00041C0 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000E960 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMTimerDpcX @ 0x1C000F9B0 (ndisMTimerDpcX.c)
 *     ndisMWakeUpDpcX @ 0x1C00102D0 (ndisMWakeUpDpcX.c)
 *     ndisMTimerObjectDpc @ 0x1C00247F0 (ndisMTimerObjectDpc.c)
 *     ndisMOidRequestToRequest @ 0x1C00477EC (ndisMOidRequestToRequest.c)
 *     ndisMDpc @ 0x1C006200C (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C0062224 (ndisMDpcX.c)
 *     ndisMTimerDpc @ 0x1C0062460 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C0062680 (ndisMWakeUpDpc.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     Template_qq @ 0x1C004FC94 (Template_qq.c)
 */

NTSTATUS __fastcall ndisTraceDpcStart(__int64 a1, unsigned int a2)
{
  unsigned int v4; // eax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-58h]
  _QWORD WnodeEventItem[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  v4 = (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v4);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 21;
  LODWORD(WnodeEventItem[7]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C0093FD0;
  LOWORD(WnodeEventItem[0]) = 64;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
  {
    LODWORD(v7) = a2;
    return Template_qq(v6, &DpcStart, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF, v7);
  }
  return result;
}

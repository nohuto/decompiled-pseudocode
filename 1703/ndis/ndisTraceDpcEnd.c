/*
 * XREFs of ndisTraceDpcEnd @ 0x1C0050E8C
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
 *     Template_qqx @ 0x1C004FD0C (Template_qqx.c)
 */

NTSTATUS __fastcall ndisTraceDpcEnd(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // eax
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD WnodeEventItem[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(WnodeEventItem, 0, 0x48uLL);
  v6 = (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v6);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 17;
  WnodeEventItem[7] = a3;
  LODWORD(WnodeEventItem[8]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C0093FD0;
  LOWORD(WnodeEventItem[0]) = 72;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
    return Template_qqx(v9, v8, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF, a2, a3);
  return result;
}

/*
 * XREFs of ndisTraceDpcEnd @ 0x1C00503A4
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
 *     McTemplateK0qqx @ 0x1C004F214 (McTemplateK0qqx.c)
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
  WnodeEventItem[1] = qword_1C009AF10;
  LOWORD(WnodeEventItem[0]) = 72;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (dword_1C009AF04 & 0x200) != 0 )
    return McTemplateK0qqx(v9, v8, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF, a2, a3);
  return result;
}

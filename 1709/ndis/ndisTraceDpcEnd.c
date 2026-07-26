/*
 * XREFs of ndisTraceDpcEnd @ 0x1C004FA5C
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
 *     McTemplateK0qqx @ 0x1C004E8AC (McTemplateK0qqx.c)
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
  WnodeEventItem[1] = qword_1C0099FD0;
  LOWORD(WnodeEventItem[0]) = 72;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (dword_1C0099FC4 & 0x200) != 0 )
    return McTemplateK0qqx(v9, v8, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF, a2, a3);
  return result;
}

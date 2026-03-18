/*
 * XREFs of ?VmBusSubmitPresentHistoryToken@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033580
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C002AE80 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall VmBusSubmitPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  int v3; // eax
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v3 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
         *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL),
         *(_DWORD *)(v1 + 16),
         *(struct _SLIST_ENTRY **)(v1 + 48),
         *(struct _SLIST_ENTRY **)(v1 + 24),
         *(_QWORD *)(v1 + 32),
         *(_QWORD *)(v1 + 40));
  v4 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v6 = v3;
  VmBusCompletePacket(v4, &v6, 4u);
  return 1;
}

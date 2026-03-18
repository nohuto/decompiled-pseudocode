/*
 * XREFs of ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A130
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C01900A8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitPresentHistoryToken(
        struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  int v3; // eax
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v3 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
         *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL),
         *(_DWORD *)(v1 + 24),
         *(struct _SLIST_ENTRY **)(v1 + 56),
         *(struct _SLIST_ENTRY **)(v1 + 32),
         *(_QWORD *)(v1 + 40),
         *(_QWORD *)(v1 + 48),
         *(_DWORD *)(v1 + 64));
  v4 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v6 = v3;
  VmBusCompletePacket(v4, &v6, 4u);
  return 1;
}

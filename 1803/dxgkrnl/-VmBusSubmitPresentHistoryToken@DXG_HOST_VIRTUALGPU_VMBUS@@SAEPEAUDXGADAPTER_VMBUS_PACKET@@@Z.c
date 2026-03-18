/*
 * XREFs of ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186F10
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D484 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C017B554 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitPresentHistoryToken(
        struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  int v3; // eax
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  int v6; // [rsp+58h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
  if ( v2 )
  {
    v3 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
           *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL),
           *(unsigned int *)(v2 + 24),
           *(_QWORD *)(v2 + 56),
           *(_QWORD *)(v2 + 32),
           *(_QWORD *)(v2 + 40),
           *(_QWORD *)(v2 + 48),
           *(_DWORD *)(v2 + 64));
    v4 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    v6 = v3;
    VmBusCompletePacket(v4, &v6, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}

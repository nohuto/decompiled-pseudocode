/*
 * XREFs of ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x18013F944
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x18013D22C (-PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x180144C30 (-PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall CComposition::PresentFollowUp(CRenderTargetManager **this, const struct FRAME_TIME_INFO *a2)
{
  unsigned int v3; // ebx
  int v4; // eax

  if ( *((_DWORD *)this + 96) == 2 )
  {
    return 142213121;
  }
  else
  {
    v4 = CRenderTargetManager::PresentFollowup(
           this[4],
           *(_DWORD *)(*(_QWORD *)a2 + 96LL),
           (unsigned int *)(*(_QWORD *)a2 + 164LL));
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x44Cu);
    }
    else if ( v4 == 142213130 )
    {
      (*(void (__fastcall **)(CRenderTargetManager *))(*(_QWORD *)this[70] + 104LL))(this[70]);
    }
  }
  return v3;
}

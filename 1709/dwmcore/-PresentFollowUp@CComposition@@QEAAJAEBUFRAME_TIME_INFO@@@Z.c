/*
 * XREFs of ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x180128D9C
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x180014704 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800AABCC (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x180130C50 (-PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall CComposition::PresentFollowUp(
        CRenderTargetManager **this,
        const struct FRAME_TIME_INFO *a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  signed int v5; // eax

  if ( *((_DWORD *)this + 86) == 2 )
  {
    v4 = 142213121;
  }
  else
  {
    v5 = CRenderTargetManager::PresentFollowup(
           this[9],
           *(_DWORD *)(*(_QWORD *)a2 + 96LL),
           (unsigned int *)(*(_QWORD *)a2 + 164LL));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x414u);
  }
  CComposition::ProcessRenderingStatus((CComposition *)this, v4, a3);
  return v4;
}

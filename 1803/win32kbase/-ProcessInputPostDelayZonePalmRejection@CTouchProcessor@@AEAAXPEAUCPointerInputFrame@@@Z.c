/*
 * XREFs of ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0119E20
 * Callers:
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0110DF0 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0119C5C (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0110F30 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C0118B5C (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z.c)
 */

void __fastcall CTouchProcessor::ProcessInputPostDelayZonePalmRejection(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *v4; // rax
  const struct RIMCOMPLETEFRAME *v5; // rdx
  PDEVICE_OBJECT v6; // rcx
  unsigned __int16 v7; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x28u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  HMValidateHandleNoSecure(*((_QWORD *)a2 + 8), 19);
  v4 = CTouchProcessor::PopulateReferencedInputFrame((struct _KTHREAD **)this, a2);
  if ( v4 )
  {
    CTouchProcessor::DoContactVisualizationAndGenerateMessages(
      this,
      v5,
      v4,
      *((void **)v4 + 8),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v4 + 14) + 276LL), 6),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v4 + 14) + 276LL), 7),
      0);
    v6 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return;
    v7 = 43;
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0x29u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v6 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return;
    v7 = 42;
  }
  WPP_RECORDER_SF_(
    (__int64)v6->DeviceExtension,
    5u,
    0xBu,
    v7,
    (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
}

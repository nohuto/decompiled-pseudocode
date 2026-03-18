/*
 * XREFs of ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C011D6A4
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C0118B5C (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0117034 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::SetupQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        const struct CInputDest *a4,
        int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  PDEVICE_OBJECT v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edi
  __int64 i; // rbx
  CInputDest *v15; // rax
  _BYTE v17[192]; // [rsp+40h] [rbp-D8h] BYREF

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x4Au,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v12 = *((_DWORD *)a2 + 12);
  v13 = 0;
  for ( i = *((_QWORD *)a2 + 13); v13 < v12; ++v13 )
  {
    if ( *(_DWORD *)i == -1 )
      break;
    if ( *(_QWORD *)(i + 8) == a3 )
      break;
    i += 224LL;
  }
  if ( v13 >= v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v9);
  if ( *(_DWORD *)i == -1 )
  {
    v15 = CInputDest::CInputDest((CInputDest *)v17, a4);
    CTouchProcessor::InitializeQFrame(this, i, v13, a3, v15, a5);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x4Bu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  return (struct CPointerQFrame *)i;
}

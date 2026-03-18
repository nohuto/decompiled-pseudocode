/*
 * XREFs of ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C011D520
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0117034 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0117094 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetupNewQFrame(
        CTouchProcessor *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        CInputDest *a5,
        int a6)
{
  CTouchProcessor *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  PDEVICE_OBJECT v17; // rcx
  unsigned __int16 v18; // r9
  CInputDest *v20; // rax
  _BYTE v21[192]; // [rsp+40h] [rbp-D8h] BYREF

  v9 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x58u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, (const struct CPointerInputFrame *)a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  if ( !*(_DWORD *)a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  v12 = *(_DWORD *)(a2 + 48);
  v13 = 0;
  v14 = *(_QWORD *)(a2 + 104);
  if ( v12 )
  {
    while ( *(_DWORD *)v14 != -1 )
    {
      v14 += 224LL;
      if ( ++v13 >= v12 )
        goto LABEL_10;
    }
    v20 = CInputDest::CInputDest((CInputDest *)v21, a5);
    CTouchProcessor::InitializeQFrame(a1, v14, v13, 0LL, v20, a6);
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = 89;
      goto LABEL_14;
    }
  }
  else
  {
LABEL_10:
    v14 = *a3;
    *a3 = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    CInputDest::operator=(v14 + 16, (__int64)a5);
    if ( *(_DWORD *)(v14 + 208) != 22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
    CTouchProcessor::InitializeQFrameCoalesceState(a1, (struct CPointerQFrame *)v14, a6);
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = 90;
LABEL_14:
      WPP_RECORDER_SF_(
        (__int64)v17->DeviceExtension,
        5u,
        0xBu,
        v18,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
  CInputDest::SetEmpty(a5);
  return v14;
}

/*
 * XREFs of ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01126B0
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0119238 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C010CCDC (-AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C011F69C (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureLostMessage(__int64 a1, __int64 a2, CInputDest *a3, int a4)
{
  PDEVICE_OBJECT v8; // rcx
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  const struct CPointerInputFrame *v13; // rbp
  __int64 v14; // rax
  _WORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r8d
  CInputDest *v20; // rax
  _BYTE v21[184]; // [rsp+40h] [rbp-198h] BYREF
  _BYTE v22[184]; // [rsp+F8h] [rbp-E0h] BYREF

  v8 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xE0u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( *(struct _KTHREAD **)(a1 + 104) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2);
  if ( a2 )
  {
    v13 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a2 + 28));
    if ( !v13 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0xE3u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v9 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_23;
      v10 = 228;
      goto LABEL_8;
    }
    v14 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v14 >= *((_DWORD *)v13 + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
      v14 = *(unsigned int *)(a2 + 32);
    }
    v15 = (_WORD *)(*((_QWORD *)v13 + 12) + 576 * v14);
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
    if ( v15[118] != *(_WORD *)(a2 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
    memset(v21, 0, sizeof(v21));
    v21[176] = 0;
    if ( (unsigned int)CTouchProcessor::GenerateMessage(a1, v15, a2, 594LL) )
    {
      v20 = CInputDest::CInputDest((CInputDest *)v22, (const struct CInputDest *)(v15 + 196));
      CTouchProcessor::AddLostCaptureTarget((CTouchProcessor *)a1, v15[118], v20);
    }
    else
    {
      WPP_RECORDER_SF_HL(*(_QWORD *)(a1 + 8), v18, v19, 229, a4, *(_WORD *)(a2 + 16), v15[112]);
    }
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)a1, v13);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0xE6u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0xE1u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 226;
LABEL_8:
      WPP_RECORDER_SF_(
        (__int64)v9->DeviceExtension,
        5u,
        0xBu,
        v10,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
LABEL_23:
  CInputDest::SetEmpty(a3);
}

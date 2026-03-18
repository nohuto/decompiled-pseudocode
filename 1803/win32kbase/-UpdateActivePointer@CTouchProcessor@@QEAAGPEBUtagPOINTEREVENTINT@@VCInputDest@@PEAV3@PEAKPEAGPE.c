/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C011E4F0
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01184C4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C010FB2C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C011B80C (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C011E9A0 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C011F238 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C011F908 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        __int64 a1,
        __int64 a2,
        CInputDest *a3,
        __int64 a4,
        int *a5,
        _WORD *a6,
        _DWORD *a7,
        int a8)
{
  unsigned __int16 v11; // r12
  unsigned int v12; // ebp
  unsigned int v13; // r15d
  int v14; // edx
  struct CInputPointerNode *NodeById; // rdi
  int v16; // r8d
  PDEVICE_OBJECT v17; // rcx
  unsigned __int16 v18; // r9
  int v20; // eax
  unsigned __int16 v21; // bx
  CInputDest *v22; // rax
  _QWORD *Target; // rax
  __int16 v24; // cx
  __int16 v25; // dx
  int v26; // [rsp+20h] [rbp-228h]
  __int16 v27; // [rsp+50h] [rbp-1F8h]
  _BYTE v29[192]; // [rsp+70h] [rbp-1D8h] BYREF
  _BYTE v30[192]; // [rsp+130h] [rbp-118h] BYREF

  v11 = *(_WORD *)a2;
  v12 = *(_DWORD *)(a2 + 8);
  v13 = *(_DWORD *)(a2 + 20);
  v27 = 0;
  if ( *(struct _KTHREAD **)(a1 + 104) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x38u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  *a6 = 0;
  *a7 = 0;
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, v11, 1, 1);
  if ( NodeById )
  {
    if ( (*(_DWORD *)(a2 + 20) & 1) == 0 )
    {
      v20 = *((_DWORD *)NodeById + 10);
      if ( v20 != v12 )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_LL(*(_QWORD *)(a1 + 8), v14, v16, 59, v26, v20, v12);
        v21 = 0;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            0xBu,
            0x3Cu,
            (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        goto LABEL_21;
      }
      if ( !CTouchProcessor::SetNewValidState((struct _KTHREAD **)a1, v13, NodeById) )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 8),
          2u,
          0xBu,
          0x3Du,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        v17 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_10;
        v18 = 62;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v27 = 1;
    NodeById = CTouchProcessor::CreateNode((CTouchProcessor *)a1, v11, v12, v13);
    if ( !NodeById )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 2u, 0xBu, 0x39u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v17 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
LABEL_10:
        CInputDest::SetEmpty(a3);
        return 0LL;
      }
      v18 = 58;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v17->DeviceExtension,
        5u,
        0xBu,
        v18,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_10;
    }
  }
  CTouchProcessor::UpdateStateIndicator(
    (CTouchProcessor *)a1,
    NodeById,
    v13,
    *(_QWORD *)(a2 + 88),
    *(struct tagPOINT *)(a2 + 48));
  v22 = CInputDest::CInputDest((CInputDest *)v29, a3);
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(a1, v30, a2, NodeById, v13, v22, a6, a7, a8);
  CInputDest::operator=(a4, Target);
  CInputDest::SetEmpty((CInputDest *)v30);
  *a6 |= v27;
  v24 = *a6 | (2 * (*((_DWORD *)NodeById + 82) & 4));
  *a6 = v24;
  v25 = v24 | (2 * (*((_WORD *)NodeById + 164) & 1));
  *a6 = v25;
  *a6 = v25 | (2 * (*((_DWORD *)NodeById + 82) & 2));
  *a5 = *((_DWORD *)NodeById + 11) & 0x1F0;
  *((_DWORD *)NodeById + 11) = v13;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x3Fu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v21 = *((_WORD *)NodeById + 16);
LABEL_21:
  CInputDest::SetEmpty(a3);
  return v21;
}

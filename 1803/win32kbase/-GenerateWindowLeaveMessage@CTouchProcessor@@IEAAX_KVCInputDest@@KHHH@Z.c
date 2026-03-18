/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0113A3C
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0119238 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C011F69C (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        __int64 a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  PDEVICE_OBJECT v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  const struct CPointerInputFrame *v16; // rbp
  __int64 v17; // rax
  CPointerInfoNode *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r8d
  int v23; // [rsp+20h] [rbp-108h]
  _BYTE v24[192]; // [rsp+40h] [rbp-E8h] BYREF

  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD0u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( *(struct _KTHREAD **)(a1 + 104) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2);
  if ( a2 )
  {
    v16 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a2 + 28));
    if ( !v16 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 2u, 0xBu, 0xD3u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_23;
      v13 = 212;
      goto LABEL_8;
    }
    v17 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v17 >= *((_DWORD *)v16 + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
      v17 = *(unsigned int *)(a2 + 32);
    }
    v18 = (CPointerInfoNode *)(*((_QWORD *)v16 + 12) + 576 * v17);
    if ( !(unsigned int)CPointerInfoNode::IsValid(v18) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
    if ( *((_WORD *)v18 + 118) != *(_WORD *)(a2 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
    if ( !a5 )
    {
      memset(v24, 0, 0xB8uLL);
      v24[176] = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                            (__int64 *)a1,
                            (__int64)v18,
                            a2,
                            0x24Au,
                            a4,
                            a6,
                            a7,
                            (CInputDest *)v24) )
        WPP_RECORDER_SF_HL(*(_QWORD *)(a1 + 8), v21, v22, 213, v23, *(_WORD *)(a2 + 16), *((_WORD *)v18 + 112));
    }
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)a1, v16);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0xD6u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0xD1u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 210;
LABEL_8:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
LABEL_23:
  CInputDest::SetEmpty(a3);
}

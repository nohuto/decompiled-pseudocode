/*
 * XREFs of ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011F0D4
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     RIMGetHMonitor @ 0x1C0107EC8 (RIMGetHMonitor.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128478 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0129854 (WPP_RECORDER_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x1C013C43C (ApiSetEditionSendCursorSuppressionUpdate.c)
 */

void __fastcall CTouchProcessor::GenerateDepartureMessage(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  const struct CPointerInputFrame *v7; // rbp
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rbx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE v15[200]; // [rsp+40h] [rbp-E8h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      203,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v9 = WPP_GLOBAL_Control;
  }
  v10 = *((_QWORD *)v7 + 12) + 608 * v6;
  if ( (*(_DWORD *)(v10 + 260) & 2) == 0 )
  {
    if ( (*(_DWORD *)v10 & 0x1000) == 0 )
    {
      memset(v15, 0, sizeof(v15));
      v15[192] = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v10, a4, 586LL) )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v11, v12, 204, a5, *(_DWORD *)(v10 + 252), *(_WORD *)(v10 + 240));
      }
    }
    if ( *(_DWORD *)(v10 + 248) != 5 )
    {
      v13 = HMValidateHandleNoSecure(*(_QWORD *)(v10 + 264), 19);
      v14 = RIMGetHMonitor(v13);
      ApiSetEditionSendCursorSuppressionUpdate(0LL, v14);
    }
    CTouchProcessor::UnreferenceMsgData(this, a4, 1LL);
    v9 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v9->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      v9->DeviceExtension,
      (_DWORD)a2,
      11,
      205,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
}

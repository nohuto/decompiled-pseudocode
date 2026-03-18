/*
 * XREFs of ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011DF7C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     RIMGetHMonitor @ 0x1C0106078 (RIMGetHMonitor.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0127CB4 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01291A0 (WPP_RECORDER_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x1C013B6F4 (ApiSetEditionSendCursorSuppressionUpdate.c)
 */

void __fastcall CTouchProcessor::GenerateDepartureMessage(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  const struct CPointerInputFrame *v7; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[200]; // [rsp+40h] [rbp-E8h] BYREF

  v6 = (unsigned int)a3;
  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xCBu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = *((_QWORD *)v7 + 12) + 608 * v6;
  if ( (*(_DWORD *)(v9 + 260) & 2) == 0 )
  {
    if ( (*(_DWORD *)v9 & 0x1000) == 0 )
    {
      memset(v12, 0, sizeof(v12));
      v12[192] = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v9, a4, 586LL) )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), (_DWORD)a2, a3, 204, a5, *(_DWORD *)(v9 + 252), *(_WORD *)(v9 + 240));
      }
    }
    if ( *(_DWORD *)(v9 + 248) != 5 )
    {
      LOBYTE(a2) = 19;
      v10 = HMValidateHandleNoSecure(*(_QWORD *)(v9 + 264), (__int64)a2, a3, a4);
      v11 = RIMGetHMonitor(v10);
      ApiSetEditionSendCursorSuppressionUpdate(0LL, v11);
    }
    CTouchProcessor::UnreferenceMsgData(this, a4, 1LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xCDu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
}

/*
 * XREFs of ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01128F8
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RIMGetHMonitor @ 0x1C00E91BC (RIMGetHMonitor.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C011792C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C011F908 (WPP_RECORDER_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x1C013FE14 (ApiSetEditionSendCursorSuppressionUpdate.c)
 */

void __fastcall CTouchProcessor::GenerateDepartureMessage(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v14[184]; // [rsp+40h] [rbp-D8h] BYREF

  v6 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDAu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v9 = *((_QWORD *)a2 + 12) + 576 * v6;
  if ( (*(_DWORD *)(v9 + 244) & 2) == 0 )
  {
    if ( (*(_DWORD *)v9 & 0x1000) == 0 )
    {
      memset(v14, 0, sizeof(v14));
      v14[176] = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v9, a4, 586LL) )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v10, v11, 219, a5, *(_DWORD *)(v9 + 236), *(_WORD *)(v9 + 224));
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v9) )
    {
      v12 = HMValidateHandleNoSecure(*(_QWORD *)(v9 + 248), 19);
      v13 = RIMGetHMonitor(v12);
      ApiSetEditionSendCursorSuppressionUpdate(0LL, v13);
    }
    CTouchProcessor::UnreferenceMsgData(this, a4, 1LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDCu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
}

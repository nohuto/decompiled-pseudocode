/*
 * XREFs of ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011E104
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     RIMGetHMonitor @ 0x1C0106078 (RIMGetHMonitor.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01291A0 (WPP_RECORDER_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x1C013B6F4 (ApiSetEditionSendCursorSuppressionUpdate.c)
 */

void __fastcall CTouchProcessor::GenerateEnterMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  _BYTE v18[200]; // [rsp+40h] [rbp-E8h] BYREF

  v6 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xBDu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = *((_QWORD *)a2 + 12) + 608 * v6;
  if ( (*(_DWORD *)(v9 + 260) & 1) != 0 )
  {
    memset(v18, 0, sizeof(v18));
    v18[192] = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v9, a4, 585LL) )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v10, v11, 190, a5, *(_DWORD *)(v9 + 252), *(_WORD *)(v9 + 240));
    }
    if ( *(_DWORD *)(v9 + 248) != 5 )
    {
      LOBYTE(v10) = 19;
      v13 = HMValidateHandleNoSecure(*(_QWORD *)(v9 + 264), v10, v11, v12);
      v14 = RIMGetHMonitor(v13);
      ApiSetEditionSendCursorSuppressionUpdate(1LL, v14);
    }
  }
  else
  {
    v15 = *(_DWORD *)v9;
    if ( (*(_DWORD *)v9 & 4) == 0 && (v15 & 8) != 0 || (v15 & 0x40) != 0 )
    {
      memset(v18, 0, sizeof(v18));
      v18[192] = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v9, a4, 585LL) )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v16, v17, 191, a5, *(_DWORD *)(v9 + 252), *(_WORD *)(v9 + 240));
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xC0u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
}

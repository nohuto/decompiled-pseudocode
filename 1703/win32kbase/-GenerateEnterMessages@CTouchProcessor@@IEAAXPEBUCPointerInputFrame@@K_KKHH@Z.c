/*
 * XREFs of ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011F264
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     RIMGetHMonitor @ 0x1C0107EC8 (RIMGetHMonitor.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0129854 (WPP_RECORDER_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x1C013C43C (ApiSetEditionSendCursorSuppressionUpdate.c)
 */

void __fastcall CTouchProcessor::GenerateEnterMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  const struct CPointerInputFrame *v7; // rsi
  __int64 v9; // rbx
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // r8d
  _BYTE v15[200]; // [rsp+40h] [rbp-E8h] BYREF

  v6 = a3;
  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      189,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v9 = *((_QWORD *)v7 + 12) + 608 * v6;
  if ( (*(_DWORD *)(v9 + 260) & 1) != 0 )
  {
    memset(v15, 0, sizeof(v15));
    v15[192] = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v9, a4, 585LL) )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), (_DWORD)a2, v10, 190, a5, *(_DWORD *)(v9 + 252), *(_WORD *)(v9 + 240));
    }
    if ( *(_DWORD *)(v9 + 248) != 5 )
    {
      v11 = HMValidateHandleNoSecure(*(_QWORD *)(v9 + 264), 19);
      v12 = RIMGetHMonitor(v11);
      ApiSetEditionSendCursorSuppressionUpdate(1LL, v12);
    }
  }
  else
  {
    v13 = *(_DWORD *)v9;
    if ( (*(_DWORD *)v9 & 4) == 0 && (v13 & 8) != 0 || (v13 & 0x40) != 0 )
    {
      memset(v15, 0, sizeof(v15));
      v15[192] = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v9, a4, 585LL) )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), (_DWORD)a2, v14, 191, a5, *(_DWORD *)(v9 + 252), *(_WORD *)(v9 + 240));
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      192,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
}

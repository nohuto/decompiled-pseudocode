/*
 * XREFs of ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0116B40
 * Callers:
 *     NtUserGetPointerType @ 0x1C00B70B0 (NtUserGetPointerType.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C011424C (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 *     ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C0114DA4 (-GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01152F0 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0115768 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0115808 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x1C0115BA0 (-GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0115DCC (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0116354 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ApiSetEditionGetThreadPointerHookData @ 0x1C013E62C (ApiSetEditionGetThreadPointerHookData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall CTouchProcessor::GetThreadPointerData(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3,
        unsigned int *a4,
        int *a5,
        HWND *a6)
{
  __int64 v9; // rdx
  __int64 ThreadPointerHookData; // rbx
  struct tagTHREADINPUTPOINTERLIST *v11; // rax
  __int64 v12; // rcx

  ThreadPointerHookData = ApiSetEditionGetThreadPointerHookData(a2, a3);
  if ( !ThreadPointerHookData )
  {
    v11 = *(struct tagTHREADINPUTPOINTERLIST **)a2;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)a2 == a2 )
      return 0LL;
    do
    {
      v12 = *((unsigned __int16 *)v11 + 8);
      ThreadPointerHookData = (__int64)v11;
      if ( (_WORD)v12 == a3 )
        break;
      v11 = *(struct tagTHREADINPUTPOINTERLIST **)v11;
    }
    while ( v11 != a2 );
    if ( v11 == a2 )
      return 0LL;
    if ( (_WORD)v12 != a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9);
  }
  if ( (*(_DWORD *)(ThreadPointerHookData + 48) & 8) != 0 )
    return 0LL;
  if ( a4 )
    *a4 = *(_DWORD *)(ThreadPointerHookData + 20);
  if ( a5 )
    *a5 = -(*(_DWORD *)(ThreadPointerHookData + 48) & 1);
  if ( a6 )
    *a6 = *(HWND *)(ThreadPointerHookData + 40);
  return *(_QWORD *)(ThreadPointerHookData + 24);
}

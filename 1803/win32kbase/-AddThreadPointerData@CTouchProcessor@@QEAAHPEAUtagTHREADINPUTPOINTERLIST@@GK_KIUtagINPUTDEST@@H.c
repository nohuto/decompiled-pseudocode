/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C010CD70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011ABA4 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C011AF54 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C011F670 (IsPointerInputMessageWithState.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C013D628 (ApiSetEditionAllocAndLinkThreadPointerData.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C013E280 (ApiSetEditionFindThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::AddThreadPointerData(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        struct tagINPUTDEST *a7,
        int a8)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // rcx
  BOOL v16; // esi
  int v17; // ecx
  __int64 ThreadPointerData; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // r9d
  int v23; // r9d
  __int16 v24; // r10
  int v25; // r9d
  _BYTE v28[192]; // [rsp+40h] [rbp-108h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x71u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 72));
  CInputDest::CInputDest((CInputDest *)v28, a7);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  v13 = 0;
  if ( a5 )
    v13 = *(_WORD *)(a5 + 16);
  if ( a3 != v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
  if ( (*(_DWORD *)(a5 + 36) & 2) != 0 )
    CTouchProcessor::SetDelegateAction(a1, a5);
  v16 = 1;
  if ( a6 - 578 <= 0xF )
  {
    v17 = 32785;
    if ( _bittest(&v17, a6 - 578) )
      CTouchProcessor::SetDelegateAction(a1, a5);
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(a2, a3);
  v20 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v21 = *(_QWORD *)(ThreadPointerData + 24);
    if ( v21 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v21);
      v22 = *(_DWORD *)(v20 + 48);
      if ( (v22 & 1) == 0 && a8 )
        *(_DWORD *)(v20 + 48) = v22 | 1;
      *(_DWORD *)(v20 + 32) = a6;
      *(_QWORD *)(v20 + 40) = CInputDest::GetWindowHandle((CInputDest *)v28);
      *(_DWORD *)(v20 + 48) = v23 & 0xFFFFFFF5;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v24 )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x72u,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_33;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v21, 4LL);
    *(_QWORD *)(v20 + 24) = 0LL;
  }
  else
  {
    v20 = ApiSetEditionAllocAndLinkThreadPointerData(a2);
  }
  if ( v20 )
  {
    *(_DWORD *)(v20 + 48) &= ~8u;
    *(_DWORD *)(v20 + 20) = a4;
    *(_WORD *)(v20 + 16) = a3;
    *(_QWORD *)(v20 + 24) = a5;
    *(_DWORD *)(v20 + 32) = a6;
    *(_QWORD *)(v20 + 40) = CInputDest::GetWindowHandle((CInputDest *)v28);
    *(_DWORD *)(v20 + 48) = a8 & 1 | v25 & 0xFFFFFFFC;
    CTouchProcessor::ReferenceMsgData(a1, a5, 4LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x73u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v16 = v20 != 0;
LABEL_33:
  CInputDest::SetEmpty((CInputDest *)v28);
  CInpLockGuard::UnLock((PERESOURCE *)(a1 + 72));
  return v16;
}

/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01198A0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionFindThreadPointerData @ 0x1C0004570 (ApiSetEditionFindThreadPointerData.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C011716C (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125184 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0125400 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0127CB4 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C0139268 (ApiSetEditionAllocAndLinkThreadPointerData.c)
 */

_BOOL8 __fastcall CTouchProcessor::AddThreadPointerData(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        __int64 a5,
        int a6,
        struct CInputDest *a7,
        int a8)
{
  BOOL v11; // esi
  int v12; // ecx
  __int64 v13; // rax
  __int64 ThreadPointerData; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  int v17; // eax
  HWND WindowHandle; // rax
  int v19; // r9d
  struct _ERESOURCE *v20; // rcx
  _BYTE v23[208]; // [rsp+40h] [rbp-118h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x63u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 224));
  CInputDest::CInputDest((CInputDest *)v23, a7);
  if ( (*(_DWORD *)(a5 + 36) & 2) != 0 && *(_QWORD *)(a5 + 40) )
    CTouchProcessor::SetDelegateActionInt(a1);
  v11 = 1;
  if ( (unsigned int)(a6 - 578) <= 0xF )
  {
    v12 = 32785;
    if ( _bittest(&v12, a6 - 578) )
    {
      v13 = *(_QWORD *)(a5 + 40);
      if ( v13 )
        *(_DWORD *)(v13 + 464) |= 1u;
    }
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(a2, a3);
  v15 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v16 = *(_QWORD *)(ThreadPointerData + 24);
    if ( v16 == a5 )
    {
      v17 = *(_DWORD *)(ThreadPointerData + 48);
      if ( (v17 & 1) == 0 && a8 )
        *(_DWORD *)(v15 + 48) = v17 | 1;
      *(_DWORD *)(v15 + 32) = a6;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v23);
      *(_DWORD *)(v15 + 48) &= 0xFFFFFFF5;
      *(_QWORD *)(v15 + 40) = WindowHandle;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x64u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_24;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v16, 4LL);
    *(_QWORD *)(v15 + 24) = 0LL;
  }
  else
  {
    v15 = ApiSetEditionAllocAndLinkThreadPointerData(a2);
  }
  if ( v15 )
  {
    *(_DWORD *)(v15 + 48) &= ~8u;
    *(_DWORD *)(v15 + 20) = a4;
    *(_WORD *)(v15 + 16) = a3;
    *(_QWORD *)(v15 + 24) = a5;
    *(_DWORD *)(v15 + 32) = a6;
    *(_QWORD *)(v15 + 40) = CInputDest::GetWindowHandle((CInputDest *)v23);
    *(_DWORD *)(v15 + 48) = a8 & 1 | v19 & 0xFFFFFFFC;
    CTouchProcessor::ReferenceMsgData(a1, a5, 4LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x65u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v11 = v15 != 0;
LABEL_24:
  CInputDest::SetEmpty((CInputDest *)v23);
  v20 = *(struct _ERESOURCE **)(a1 + 224);
  *(_QWORD *)(a1 + 256) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v20);
  return v11;
}

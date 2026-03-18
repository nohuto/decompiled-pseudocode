/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C011AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionFindThreadPointerData @ 0x1C0004628 (ApiSetEditionFindThreadPointerData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01182C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125BB8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0125DFC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128478 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C0139F90 (ApiSetEditionAllocAndLinkThreadPointerData.c)
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
  __int64 v9; // r12
  BOOL v11; // esi
  int v12; // ecx
  __int64 v13; // rax
  __int64 ThreadPointerData; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  int v17; // eax
  HWND WindowHandle; // rax
  int v19; // edx
  int v20; // edx
  int v21; // r9d
  struct _ERESOURCE *v22; // rcx
  _BYTE v25[208]; // [rsp+40h] [rbp-118h] BYREF

  v9 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      99,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 200));
  CInputDest::CInputDest((CInputDest *)v25, a7);
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
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v9, a3);
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
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v25);
      *(_DWORD *)(v15 + 48) &= 0xFFFFFFF5;
      *(_QWORD *)(v15 + 40) = WindowHandle;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v19) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          11,
          100,
          (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      }
      goto LABEL_24;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v16, 4LL);
    *(_QWORD *)(v15 + 24) = 0LL;
  }
  else
  {
    v15 = ApiSetEditionAllocAndLinkThreadPointerData(v9);
  }
  if ( v15 )
  {
    *(_DWORD *)(v15 + 48) &= ~8u;
    *(_DWORD *)(v15 + 20) = a4;
    *(_WORD *)(v15 + 16) = a3;
    *(_QWORD *)(v15 + 24) = a5;
    *(_DWORD *)(v15 + 32) = a6;
    *(_QWORD *)(v15 + 40) = CInputDest::GetWindowHandle((CInputDest *)v25);
    *(_DWORD *)(v15 + 48) = a8 & 1 | v21 & 0xFFFFFFFC;
    CTouchProcessor::ReferenceMsgData(a1, a5, 4LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      11,
      101,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v11 = v15 != 0;
LABEL_24:
  CInputDest::SetEmpty((CInputDest *)v25);
  v22 = *(struct _ERESOURCE **)(a1 + 200);
  *(_QWORD *)(a1 + 232) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v22);
  return v11;
}

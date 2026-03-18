/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C011AD30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01182C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125BB8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C013A038 (ApiSetEditionAllocThreadPointerData.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        __int64 a5,
        int a6,
        struct CInputDest *a7)
{
  __int64 v7; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  HWND WindowHandle; // rax
  __int64 v15; // r9
  unsigned int v16; // edi
  struct _ERESOURCE *v17; // rcx
  _BYTE v19[208]; // [rsp+20h] [rbp-108h] BYREF

  v7 = a1 + 200;
  CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 200));
  CInputDest::CInputDest((CInputDest *)v19, a7);
  if ( *(_QWORD *)(a2 + 24) || (v12 = ApiSetEditionAllocThreadPointerData(), (v13 = v12) == 0) )
  {
    v16 = 0;
  }
  else
  {
    *(_QWORD *)(v12 + 24) = a5;
    *(_WORD *)(v12 + 16) = a3;
    *(_DWORD *)(v12 + 20) = a4;
    *(_DWORD *)(v12 + 32) = a6;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v19);
    *(_DWORD *)(v13 + 48) &= ~1u;
    *(_QWORD *)(v13 + 40) = WindowHandle;
    CTouchProcessor::ReferenceMsgData(a1, v15, 5LL);
    *(_QWORD *)(a2 + 24) = v13;
    v16 = 1;
  }
  CInputDest::SetEmpty((CInputDest *)v19);
  v17 = *(struct _ERESOURCE **)v7;
  *(_QWORD *)(v7 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v17);
  return v16;
}

/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C010D020
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00370E0 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011ABA4 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C013D6D0 (ApiSetEditionAllocThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        __int64 a5,
        int a6,
        struct tagINPUTDEST *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rdi
  HWND WindowHandle; // rax
  __int64 v17; // r9
  _BYTE v19[192]; // [rsp+20h] [rbp-F8h] BYREF

  CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 72));
  v13 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  CInputDest::CInputDest((CInputDest *)v19, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v14 = ApiSetEditionAllocThreadPointerData();
    v15 = v14;
    if ( v14 )
    {
      *(_QWORD *)(v14 + 24) = a5;
      *(_WORD *)(v14 + 16) = a3;
      *(_DWORD *)(v14 + 20) = a4;
      *(_DWORD *)(v14 + 32) = a6;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v19);
      *(_DWORD *)(v15 + 48) &= ~1u;
      *(_QWORD *)(v15 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(a1, v17, 5LL);
      *(_QWORD *)(a2 + 24) = v15;
      v13 = 1;
    }
  }
  CInputDest::~CInputDest((CInputDest *)v19);
  CInpLockGuard::UnLock((PERESOURCE *)(a1 + 72));
  return v13;
}

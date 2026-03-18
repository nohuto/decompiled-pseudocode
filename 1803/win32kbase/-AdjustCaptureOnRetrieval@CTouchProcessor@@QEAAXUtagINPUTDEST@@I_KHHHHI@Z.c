/*
 * XREFs of ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C010D130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C011AD94 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C011BC38 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C011C9A4 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 */

void __fastcall CTouchProcessor::AdjustCaptureOnRetrieval(
        PERESOURCE *a1,
        const struct tagINPUTDEST *a2,
        int a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _BYTE v13[192]; // [rsp+30h] [rbp-F8h] BYREF

  CInpLockGuard::LockExclusive(a1 + 9);
  if ( !a6 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      CInputDest::CInputDest((CInputDest *)v13, a2);
      CTouchProcessor::SetPointerImplicitCapture((CTouchProcessor *)a1, a4, (const struct CInputDest *)v13, a5, a7);
LABEL_6:
      CInputDest::SetEmpty((CInputDest *)v13);
      goto LABEL_12;
    }
    if ( a9 == 593 )
    {
      CInputDest::CInputDest((CInputDest *)v13, a2);
      CTouchProcessor::SetPointerExplicitCapture((CTouchProcessor *)a1, a4, (const struct CInputDest *)v13, a5, a7);
      goto LABEL_6;
    }
  }
  if ( a8 && a6 && (a9 == 583 || a9 == 594) )
    CTouchProcessor::ReleasePointerCapture((CTouchProcessor *)a1, a4, a7);
LABEL_12:
  CInpLockGuard::UnLock(a1 + 9);
}

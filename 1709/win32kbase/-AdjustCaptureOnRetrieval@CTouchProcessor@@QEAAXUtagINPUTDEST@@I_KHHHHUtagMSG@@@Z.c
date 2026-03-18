/*
 * XREFs of ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHUtagMSG@@@Z @ 0x1C0119C20
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01252E4 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0125E1C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 */

void __fastcall CTouchProcessor::AdjustCaptureOnRetrieval(
        __int64 a1,
        const struct CInputDest *a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  _BYTE v17[208]; // [rsp+30h] [rbp-108h] BYREF

  v9 = a1 + 224;
  CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 224));
  if ( !a6 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      CInputDest::CInputDest((CInputDest *)v17, a2);
      v14 = 1LL;
LABEL_6:
      CTouchProcessor::SetPointerCapture(a1, a4, v17, v14, a5, a7);
      CInputDest::SetEmpty((CInputDest *)v17);
      goto LABEL_13;
    }
    if ( *(_DWORD *)(a9 + 8) == 593 )
    {
      CInputDest::CInputDest((CInputDest *)v17, a2);
      v14 = 2LL;
      goto LABEL_6;
    }
  }
  if ( a8 )
  {
    if ( a6 )
    {
      v15 = *(_DWORD *)(a9 + 8);
      if ( v15 == 583 || v15 == 594 )
      {
        v16 = *(_QWORD *)(a4 + 40);
        if ( v16 )
          CTouchProcessor::ReleasePointerCaptureInt(
            (CTouchProcessor *)a6,
            (struct CPointerCaptureInfo *)(v16 + 32 + (a7 != 0 ? 0xD8 : 0)));
      }
    }
  }
LABEL_13:
  *(_QWORD *)(v9 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v9);
}

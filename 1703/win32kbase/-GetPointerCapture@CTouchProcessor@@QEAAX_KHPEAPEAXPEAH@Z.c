/*
 * XREFs of ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C0120720
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C01207B4 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 */

void __fastcall CTouchProcessor::GetPointerCapture(CTouchProcessor *this, __int64 a2, int a3, void **a4, int *a5)
{
  CTouchProcessor *v8; // rcx
  PERESOURCE *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v10,
    (CTouchProcessor *)((char *)this + 200));
  v8 = *(CTouchProcessor **)(a2 + 40);
  if ( v8 )
  {
    *a4 = CTouchProcessor::GetPointerCaptureInt(v8, (CTouchProcessor *)((char *)v8 + (a3 != 0 ? 0xD8 : 0) + 32), a5);
  }
  else
  {
    *a4 = 0LL;
    if ( a5 )
      *a5 = 0;
  }
  if ( !v11 )
  {
    v9 = (PERESOURCE *)v10;
    *(_QWORD *)(v10 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v9);
  }
}

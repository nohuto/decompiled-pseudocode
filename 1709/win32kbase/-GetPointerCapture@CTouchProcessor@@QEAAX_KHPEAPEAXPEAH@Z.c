/*
 * XREFs of ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C011F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C011F634 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 */

void __fastcall CTouchProcessor::GetPointerCapture(CTouchProcessor *this, __int64 a2, int a3, void **a4, int *a5)
{
  CTouchProcessor *v8; // rcx
  __int64 v9; // rax
  PERESOURCE *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v11,
    (CTouchProcessor *)((char *)this + 224));
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
  {
    *a4 = CTouchProcessor::GetPointerCaptureInt(v8, (struct CPointerCaptureInfo *)(v9 + 32 + (a3 != 0 ? 0xD8 : 0)), a5);
  }
  else
  {
    *a4 = 0LL;
    if ( a5 )
      *a5 = 0;
  }
  if ( !v12 )
  {
    v10 = (PERESOURCE *)v11;
    *(_QWORD *)(v11 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v10);
  }
}

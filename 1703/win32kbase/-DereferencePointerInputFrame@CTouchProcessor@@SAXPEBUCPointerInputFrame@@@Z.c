/*
 * XREFs of ?DereferencePointerInputFrame@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C011D680
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::DereferencePointerInputFrame(CTouchProcessor **a1)
{
  CTouchProcessor *v1; // rbx
  PERESOURCE *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v4,
    (CTouchProcessor *)((char *)*a1 + 200));
  CTouchProcessor::UnreferenceFrameInt(v1, (struct CPointerInputFrame *)a1);
  if ( !v5 )
  {
    v3 = (PERESOURCE *)v4;
    *(_QWORD *)(v4 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v3);
  }
}

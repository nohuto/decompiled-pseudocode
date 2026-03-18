/*
 * XREFs of ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C011C530
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0127B38 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::DereferencePointerInputFrameAndMessageData(CTouchProcessor **a1)
{
  CTouchProcessor *v1; // rbx
  PERESOURCE *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v4,
    (CTouchProcessor *)((char *)*a1 + 224));
  CTouchProcessor::UnreferenceFrameAndMessageData(v1, (const struct CPointerInputFrame *)a1);
  if ( !v5 )
  {
    v3 = (PERESOURCE *)v4;
    *(_QWORD *)(v4 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v3);
  }
}

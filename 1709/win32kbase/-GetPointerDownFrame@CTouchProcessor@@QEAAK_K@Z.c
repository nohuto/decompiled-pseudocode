/*
 * XREFs of ?GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z @ 0x1C0120010
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDownFrame(CTouchProcessor *this, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  PERESOURCE *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v7,
    (CTouchProcessor *)((char *)this + 224));
  v3 = *(_QWORD *)(a2 + 40);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 24);
  else
    v4 = 0;
  if ( !v8 )
  {
    v5 = (PERESOURCE *)v7;
    *(_QWORD *)(v7 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v5);
  }
  return v4;
}

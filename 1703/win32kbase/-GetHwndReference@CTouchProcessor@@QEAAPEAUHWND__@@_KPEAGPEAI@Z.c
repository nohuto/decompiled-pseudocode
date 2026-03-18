/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C01204B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        CTouchProcessor *this,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  struct CPointerInputFrame *FrameById; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  PERESOURCE *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v14,
    (CTouchProcessor *)((char *)this + 200));
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28))) != 0LL )
  {
    _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
    v9 = *(unsigned int *)(a2 + 32);
    v10 = *((_QWORD *)FrameById + 12);
    *a3 = *(_WORD *)(a2 + 16);
    *a4 = *((_DWORD *)FrameById + 12);
    v11 = *(_QWORD *)(608 * v9 + v10 + 272);
    CTouchProcessor::UnreferenceFrameInt(this, FrameById);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v15 )
  {
    v12 = (PERESOURCE *)v14;
    *(_QWORD *)(v14 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v12);
  }
  return v11;
}

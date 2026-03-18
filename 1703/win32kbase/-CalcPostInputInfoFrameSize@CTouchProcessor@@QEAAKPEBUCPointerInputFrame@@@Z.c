/*
 * XREFs of ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C011B5AC
 * Callers:
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011B488 (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     CalcPostInputInfoFrameSize @ 0x1C01296A0 (CalcPostInputInfoFrameSize.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::CalcPostInputInfoFrameSize(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  int v3; // eax
  unsigned __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  PERESOURCE *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v9,
    (CTouchProcessor *)((char *)this + 200));
  v3 = *((_DWORD *)a2 + 12);
  if ( v3 && (v4 = 144LL * (unsigned int)(v3 - 1), v4 <= 0xFFFFFFFF) && (v5 = v4 + 152, v5 >= 0x98) )
    v6 = v5;
  else
    v6 = 0;
  if ( !v10 )
  {
    v7 = (PERESOURCE *)v9;
    *(_QWORD *)(v9 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v7);
  }
  return v6;
}

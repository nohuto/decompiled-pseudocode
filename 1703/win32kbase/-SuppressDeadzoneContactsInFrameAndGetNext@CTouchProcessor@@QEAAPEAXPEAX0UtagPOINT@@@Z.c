/*
 * XREFs of ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C0127E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0103BA8 (rimAbIsPointInPenDeadzone.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E704 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

char *__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        _QWORD *a3,
        struct tagPOINT a4)
{
  unsigned int i; // ebp
  __int64 v9; // rdi
  CTouchProcessor *v10; // rcx
  __int64 v11; // rdx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  CTouchProcessor *v13; // rcx
  char *v14; // rbx
  PERESOURCE *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+28h] [rbp-30h]
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v17,
    (CTouchProcessor *)((char *)this + 200));
  for ( i = 0; i < *((_DWORD *)a3 + 12); ++i )
  {
    v9 = a3[12] + 608LL * i;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
    {
      if ( (*(_DWORD *)(v9 + 260) & 0x10000) != 0
        && (v11 = *(_QWORD *)(v9 + 304),
            v19 = *(_OWORD *)(a3[14] + 156LL),
            (unsigned int)rimAbIsPointInPenDeadzone(&v19, v11, *(_QWORD *)&a4))
        || a2
        && (ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(v10, a2, *(_WORD *)(v9 + 252), 0LL)) != 0LL
        && (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
      {
        *(_DWORD *)v9 |= 0x1000u;
      }
    }
  }
  v13 = (CTouchProcessor *)a3[2];
  v14 = 0LL;
  if ( v13 && v13 != (CTouchProcessor *)((char *)this + 256) )
    v14 = (char *)v13 - 8;
  if ( !v18 )
  {
    v15 = (PERESOURCE *)v17;
    *(_QWORD *)(v17 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v15);
  }
  return v14;
}

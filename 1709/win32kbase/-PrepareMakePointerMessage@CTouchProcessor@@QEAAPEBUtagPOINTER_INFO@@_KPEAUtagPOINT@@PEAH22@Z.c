/*
 * XREFs of ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C01236B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::PrepareMakePointerMessage(
        CTouchProcessor *this,
        __int64 a2,
        struct tagPOINT *a3,
        int *a4,
        int *a5,
        int *a6)
{
  struct CPointerInputFrame *FrameById; // rax
  _DWORD *v11; // rdx
  _DWORD *v12; // rbx
  PERESOURCE *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  int v16; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v15,
    (CTouchProcessor *)((char *)this + 224));
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28))) != 0LL )
  {
    v11 = (_DWORD *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32));
    v12 = v11 + 62;
    *a3 = *(struct tagPOINT *)(v11 + 57);
    *a4 = v11[56];
    *a5 = -__CFSHR__(*v11, 18);
    *a6 = -__CFSHR__(*v11, 19);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v16 )
  {
    v13 = (PERESOURCE *)v15;
    *(_QWORD *)(v15 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v13);
  }
  return (const struct tagPOINTER_INFO *)v12;
}

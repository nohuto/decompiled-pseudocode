/*
 * XREFs of ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011B488
 * Callers:
 *     BuildPostInputInfoFrame @ 0x1C0129660 (BuildPostInputInfoFrame.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C011B5AC (-CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z.c)
 *     GetPointerInfoSize @ 0x1C01296AC (GetPointerInfoSize.c)
 */

__int64 __fastcall CTouchProcessor::BuildPostInputInfoFrame(
        CTouchProcessor *this,
        _DWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int i; // esi
  size_t PointerInfoSize; // r15
  unsigned int v10; // edi
  __int64 v11; // rbx
  PERESOURCE *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v14,
    (CTouchProcessor *)((char *)this + 200));
  i = 0;
  if ( a3 >= CTouchProcessor::CalcPostInputInfoFrameSize(this, a4) )
  {
    PointerInfoSize = 0LL;
    if ( *((_DWORD *)a4 + 12) )
      PointerInfoSize = (unsigned int)GetPointerInfoSize(*(unsigned int *)(*((_QWORD *)a4 + 12) + 248LL));
    *a2 = 0;
    v10 = 0;
    for ( i = 1; v10 < *((_DWORD *)a4 + 12); ++v10 )
    {
      v11 = *((_QWORD *)a4 + 12) + 608LL * v10;
      memmove(&a2[36 * *a2 + 2], (const void *)(v11 + 248), PointerInfoSize);
      ++*a2;
      if ( *(_DWORD *)(v11 + 392) )
        a2[1] = 1;
    }
  }
  if ( !v15 )
  {
    v12 = (PERESOURCE *)v14;
    *(_QWORD *)(v14 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v12);
  }
  return i;
}

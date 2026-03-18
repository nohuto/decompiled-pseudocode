/*
 * XREFs of ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801A61F4
 * Callers:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801A5C20 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::InitializeClient(CHolographicManager *this)
{
  __int64 i; // rbp
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 j; // rdi

  AcquireSRWLockShared((PSRWLOCK)this + 9);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * i);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      2u,
      (struct IUnknown *)((v3 + 64) & -(__int64)(v3 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
    v4 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * i);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      1u,
      (struct IUnknown *)((v4 + 64) & -(__int64)(v4 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 34); j = (unsigned int)(j + 1) )
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      9u,
      *(struct IUnknown **)(*((_QWORD *)this + 14) + 8 * j),
      0LL,
      0LL,
      0LL,
      0LL);
  ReleaseSRWLockShared((PSRWLOCK)this + 9);
}

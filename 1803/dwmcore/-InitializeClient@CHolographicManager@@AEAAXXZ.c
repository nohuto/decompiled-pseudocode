/*
 * XREFs of ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801F8BFC
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1801F7C84 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x1801F92E0 (-SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1801FA2F4 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::InitializeClient(CHolographicManager *this)
{
  unsigned int i; // edi
  __int64 v3; // rdx
  unsigned int j; // edi
  __int64 v5; // rdx
  unsigned int k; // ebp
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int m; // ebp

  AcquireSRWLockShared((PSRWLOCK)this + 10);
  for ( i = 0; i < *((_DWORD *)this + 28); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * i);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      6u,
      (struct IUnknown *)((v3 + 64) & -(__int64)(v3 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( j = 0; j < *((_DWORD *)this + 52); ++j )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 23) + 8LL * j);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      0x18u,
      (struct IUnknown *)((v5 + 56) & -(__int64)(v5 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( k = 0; k < *((_DWORD *)this + 36); ++k )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * k);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      2u,
      (struct IUnknown *)((v7 + 64) & -(__int64)(v7 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
    v8 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * k);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      1u,
      (struct IUnknown *)((v8 + 64) & -(__int64)(v8 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( m = 0; m < *((_DWORD *)this + 44); ++m )
  {
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      0xCu,
      *(struct IUnknown **)(*((_QWORD *)this + 19) + 8LL * m),
      0LL,
      0LL,
      0LL,
      0LL);
    CHolographicExclusiveView::PublishPresentData(*(CHolographicExclusiveView **)(*((_QWORD *)this + 19) + 8LL * m));
  }
  CHolographicManager::SetActiveExclusiveView(this, *((_DWORD *)this + 18));
  CHolographicInteropTaskQueue::PostMessageW(
    *((CHolographicInteropTaskQueue **)this + 5),
    0x1Bu,
    0LL,
    (void *)*((unsigned __int8 *)this + 225),
    0LL,
    0LL,
    0LL);
  ReleaseSRWLockShared((PSRWLOCK)this + 10);
}

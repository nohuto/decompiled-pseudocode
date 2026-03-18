/*
 * XREFs of ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801C0B3C
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z @ 0x1801BFC04 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z.c)
 * Callees:
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1801BDCE4 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x1801C13B8 (-SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::InitializeClient(CHolographicManager *this)
{
  unsigned int i; // edi
  __int64 v3; // rdx
  unsigned int j; // ebp
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int k; // ebp

  AcquireSRWLockShared((PSRWLOCK)this + 10);
  for ( i = 0; i < *((_DWORD *)this + 28); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * i);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      6u,
      (struct IUnknown *)((v3 + 56) & -(__int64)(v3 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( j = 0; j < *((_DWORD *)this + 36); ++j )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * j);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      2u,
      (struct IUnknown *)((v5 + 64) & -(__int64)(v5 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * j);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      1u,
      (struct IUnknown *)((v6 + 64) & -(__int64)(v6 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( k = 0; k < *((_DWORD *)this + 44); ++k )
  {
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      0xCu,
      *(struct IUnknown **)(*((_QWORD *)this + 19) + 8LL * k),
      0LL,
      0LL,
      0LL,
      0LL);
    CHolographicExclusiveView::PublishPresentData(*(CHolographicExclusiveView **)(*((_QWORD *)this + 19) + 8LL * k));
  }
  CHolographicManager::SetActiveExclusiveView(this, *((_DWORD *)this + 18));
  ReleaseSRWLockShared((PSRWLOCK)this + 10);
}

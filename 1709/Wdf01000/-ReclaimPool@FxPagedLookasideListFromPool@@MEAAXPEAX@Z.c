/*
 * XREFs of ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007F370
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     FxFreeToNPagedLookasideList @ 0x1C006B7A4 (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxPagedLookasideListFromPool::ReclaimPool(FxPagedLookasideListFromPool *this, FX_POOL_TRACKER **Pool)
{
  FX_POOL_TRACKER **v2; // rdi
  _PAGED_LOOKASIDE_LIST *p_m_PoolLookaside; // rcx

  v2 = Pool;
  if ( this->m_BufferSize >= 0x1000 )
  {
    p_m_PoolLookaside = &this->m_PoolLookaside;
  }
  else
  {
    if ( this->m_Globals->FxPoolTrackingOn )
      FxPoolRemovePagedAllocateTracker(*(Pool - 2));
    Pool = (FX_POOL_TRACKER **)*(v2 - 2);
    p_m_PoolLookaside = &this->m_PoolLookaside;
  }
  FxFreeToNPagedLookasideList(p_m_PoolLookaside, (_SLIST_ENTRY *)Pool);
}

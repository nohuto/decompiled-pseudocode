/*
 * XREFs of ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C007EE40
 * Callers:
 *     <none>
 * Callees:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C003C838 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     FxFreeToNPagedLookasideList @ 0x1C006B7A4 (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxNPagedLookasideList::Reclaim(
        FxNPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside *Memory)
{
  _SLIST_ENTRY **v3; // rax

  v3 = (_SLIST_ENTRY **)FxObject::_CleanupPointer(this->m_Globals, Memory);
  FxFreeToNPagedLookasideList((_PAGED_LOOKASIDE_LIST *)&this->m_ObjectLookaside, *v3);
}

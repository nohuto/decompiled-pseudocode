/*
 * XREFs of ?NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z @ 0x1800B6B40
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::NotifyClientsOfDirty(CVisualTree *this, const struct CDirtyRegion *a2)
{
  int i; // ebx
  __int64 v5; // rcx

  for ( i = *((_DWORD *)this + 214); i > 0; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 104) + 8LL * (unsigned int)(i - 1));
    (*(void (__fastcall **)(__int64, CVisualTree *, const struct CDirtyRegion *))(*(_QWORD *)v5 + 24LL))(v5, this, a2);
  }
}

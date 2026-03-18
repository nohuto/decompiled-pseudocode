/*
 * XREFs of ?Release@CDirtyRegion@@UEAAKXZ @ 0x18009DE60
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180043600 (-NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x18009F230 (--_ECDirtyRegion@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirtyRegion::Release(CDirtyRegion *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(CDirtyRegion *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v3 = *(void *(__fastcall **)(CDirtyRegion *__hidden, unsigned int))(*(_QWORD *)this + 16LL);
    if ( v3 == CDirtyRegion::`vector deleting destructor' )
      CDirtyRegion::`vector deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return v1;
}

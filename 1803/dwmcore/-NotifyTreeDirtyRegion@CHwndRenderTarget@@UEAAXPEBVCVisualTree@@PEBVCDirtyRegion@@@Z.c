/*
 * XREFs of ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18005FA80
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::NotifyTreeDirtyRegion(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v5; // rcx
  CVisual *v6; // rcx
  __int64 (__fastcall *v7)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax

  v5 = *((_QWORD *)this + 16);
  if ( v5 )
    (*(void (__fastcall **)(__int64, const struct CVisualTree *))(*(_QWORD *)v5 + 8LL))(v5, a2);
  *((_QWORD *)this + 16) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
  v6 = (CHwndRenderTarget *)((char *)this - 72);
  v7 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*((_QWORD *)this - 9) + 64LL);
  if ( v7 == CResource::NotifyOnChanged )
    CResource::NotifyOnChanged(v6, 0LL, 0LL);
  else
    v7(v6, 0LL, 0LL);
}

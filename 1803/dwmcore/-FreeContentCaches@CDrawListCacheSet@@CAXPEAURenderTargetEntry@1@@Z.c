/*
 * XREFs of ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800C1DCC
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x180029E10 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180029EF0 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18004E754 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ??1CBaseRenderTarget@@MEAA@XZ @ 0x1800C29C8 (--1CBaseRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CDrawListCacheSet::FreeContentCaches(struct CDrawListCacheSet::RenderTargetEntry *a1)
{
  unsigned int i; // ebx
  CMILRefCountBase *v3; // rcx

  for ( i = 0; i < *((_DWORD *)a1 + 12); ++i )
  {
    v3 = *(CMILRefCountBase **)(*((_QWORD *)a1 + 3) + 16LL * i + 8);
    if ( v3 )
      CMILRefCountBase::Release(v3);
  }
  *((_DWORD *)a1 + 12) = 0;
}

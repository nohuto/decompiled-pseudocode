/*
 * XREFs of ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18004F708
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x18004EFBC (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x18004F3E0 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800869D8 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180088B00 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180134740 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCDrawListCache@@@@YAXPEAVCDrawListCache@@@Z @ 0x18004F7FC (--$ReleaseInterfaceNoNULL@VCDrawListCache@@@@YAXPEAVCDrawListCache@@@Z.c)
 */

void __fastcall CDrawListCacheSet::Invalidate(CDrawListCacheSet *this)
{
  __int64 v1; // r8
  __int64 v3; // rdi

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = 0LL;
    if ( *(_DWORD *)(v1 + 24) )
    {
      do
      {
        ReleaseInterfaceNoNULL<CDrawListCache>(*(_QWORD *)(*(_QWORD *)v1 + 24 * v3 + 16));
        v1 = *(_QWORD *)this;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)this + 24LL) );
    }
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 0;
  }
}

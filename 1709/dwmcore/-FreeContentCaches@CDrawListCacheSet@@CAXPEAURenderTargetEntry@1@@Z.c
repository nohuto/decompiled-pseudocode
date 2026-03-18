/*
 * XREFs of ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800B2BA4
 * Callers:
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180050644 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ??1CBaseRenderTarget@@MEAA@XZ @ 0x18008CE3C (--1CBaseRenderTarget@@MEAA@XZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x1800A0350 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800A0430 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListCacheSet::FreeContentCaches(struct CDrawListCacheSet::RenderTargetEntry *a1)
{
  unsigned int i; // ebx
  CMILRefCountBase *v3; // rcx
  void (*v4)(void); // rax

  for ( i = 0; i < *((_DWORD *)a1 + 12); ++i )
  {
    v3 = *(CMILRefCountBase **)(*((_QWORD *)a1 + 3) + 16LL * i + 8);
    if ( v3 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
      if ( (char *)v4 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v3);
      else
        v4();
    }
  }
  *((_DWORD *)a1 + 12) = 0;
}

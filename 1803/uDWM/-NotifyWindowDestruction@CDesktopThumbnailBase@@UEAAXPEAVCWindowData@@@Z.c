/*
 * XREFs of ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x1800A3FE0
 * Callers:
 *     ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x1800A4060 (-NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800A41AC (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x1800A4BB8 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyWindowDestruction(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow **a2)
{
  int Index; // eax
  __int64 v3; // rcx
  unsigned int v4; // esi
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  CBaseObject *v8; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2[49]);
  v4 = Index;
  if ( Index >= 0 )
  {
    v5 = (__int64 *)(v3 + 240);
    v6 = 2LL * (unsigned int)Index;
    VisualCollection::Remove(
      (VisualCollection *)(v3 + 32),
      *(struct CVisual **)(*(_QWORD *)(v3 + 240) + 16LL * (unsigned int)Index + 8));
    v7 = *v5;
    if ( *(_QWORD *)(*v5 + 16LL * v4) )
    {
      CBaseObject::Release(*(CBaseObject **)(*v5 + 8 * v6));
      v7 = *v5;
    }
    v8 = *(CBaseObject **)(v7 + 16LL * v4 + 8);
    if ( v8 )
      CBaseObject::Release(v8);
    DynArray<CIconicBitmapPending,0>::RemoveAt(v5);
  }
}

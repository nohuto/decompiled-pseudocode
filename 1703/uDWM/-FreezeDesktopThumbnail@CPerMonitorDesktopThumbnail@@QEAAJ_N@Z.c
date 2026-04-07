/*
 * XREFs of ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x18009D6C0
 * Callers:
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x18009D5C8 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180017098 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x180022508 (-_IsMultiMon@CDesktopManager@@AEBA_NXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18009E4BC (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::FreezeDesktopThumbnail(CPerMonitorDesktopThumbnail *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  CBaseObject *v7; // rcx

  v4 = 0;
  if ( !CDesktopManager::_IsMultiMon(CDesktopManager::s_pDesktopManagerInstance) && a2 )
  {
    if ( !CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v5 = CDesktopThumbnailCVI::_EnsureResources(this);
      v4 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x14Au);
        return v4;
      }
      v6 = CVisual::RenderRecursive(*((CVisual **)this + 9));
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x14Bu);
        return v4;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 1008LL))(
        *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
        *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
        (char *)this + 40);
    }
    *(_BYTE *)(*((_QWORD *)this + 9) + 312LL) = a2;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    return v4;
  }
  if ( CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    CBaseObject::Release(this);
  *(_BYTE *)(*((_QWORD *)this + 9) + 312LL) = 0;
  v7 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 4) = 0LL;
  }
  return v4;
}

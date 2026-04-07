/*
 * XREFs of ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180006AB4
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800068C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B34C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_EnsureBackgroundVisual(
        CAccent *this,
        const struct ACCENT_POLICY *a2,
        struct CRenderDataVisual **a3,
        struct CVisual *a4)
{
  unsigned int v4; // ebx
  int v9; // eax
  int inserted; // eax

  v4 = 0;
  if ( (*(_DWORD *)a2 & 0xFFFFFFFB) != 0 && !*a3 )
  {
    v9 = CRenderDataVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), a3);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2C0u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), *a3, a4, 1, 1);
      v4 = inserted;
      if ( inserted >= 0 )
        return v4;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x2C1u);
    }
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
  }
  return v4;
}

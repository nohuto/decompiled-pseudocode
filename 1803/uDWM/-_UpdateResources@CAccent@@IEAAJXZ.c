/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800030EC
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180003044 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180010580 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x1800032E0 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180003364 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800108AC (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x1800380D4 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CRenderDataVisual **this)
{
  int updated; // edi
  const struct ACCENT_POLICY *v3; // rcx
  const struct ACCENT_POLICY *v4; // rcx
  struct CVisual *v6; // r9
  unsigned int v7; // eax

  updated = 0;
  v3 = (const struct ACCENT_POLICY *)(this + 35);
  if ( (unsigned int)(*(_DWORD *)v3 - 2) > 2 )
  {
    if ( CAccent::s_IsPolicyActive(v3) )
    {
      updated = CAccent::_EnsureBackgroundVisual((CAccent *)this, v4, this + 40, 0LL);
      if ( updated < 0 )
      {
        v7 = 800;
        goto LABEL_11;
      }
    }
    if ( *((_BYTE *)this + 312) )
    {
      v6 = this[40];
      *((_DWORD *)this + 92) = 0;
      updated = CAccent::_EnsureBackgroundVisual(
                  (CAccent *)this,
                  (const struct ACCENT_POLICY *)(this + 37),
                  this + 41,
                  v6);
      if ( updated < 0 )
      {
        v7 = 811;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v7);
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        return (unsigned int)updated;
      }
    }
    updated = CAccent::_UpdateBackgroundGeometry((CAccent *)this);
    if ( updated < 0 )
    {
      v7 = 813;
      goto LABEL_11;
    }
  }
  return (unsigned int)updated;
}

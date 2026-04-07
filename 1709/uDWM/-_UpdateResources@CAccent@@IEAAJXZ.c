/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000839C
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800082F4 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180012710 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x18000859C (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180008620 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180012850 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x1800359D4 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x180075920 (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CRenderDataVisual **this)
{
  unsigned int v2; // edi
  const struct ACCENT_POLICY *v3; // rcx
  const struct ACCENT_POLICY *v4; // rcx
  int v5; // eax
  int updated; // eax
  struct CVisual *v8; // r9
  int v9; // eax

  v2 = 0;
  v3 = (const struct ACCENT_POLICY *)(this + 35);
  if ( (unsigned int)(*(_DWORD *)v3 - 2) > 2 )
  {
    if ( CAccent::s_IsPolicyActive(v3) )
    {
      v5 = CAccent::_EnsureBackgroundVisual((CAccent *)this, v4, this + 40, 0LL);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x330u);
        goto LABEL_11;
      }
    }
    if ( *((_BYTE *)this + 312) )
    {
      v8 = this[40];
      *((_DWORD *)this + 92) = 0;
      v9 = CAccent::_EnsureBackgroundVisual((CAccent *)this, (const struct ACCENT_POLICY *)(this + 37), this + 41, v8);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x33Bu);
LABEL_11:
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        CAccent::CleanupAccentStatics();
        return v2;
      }
    }
    updated = CAccent::_UpdateBackgroundGeometry((CAccent *)this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x33Du);
      goto LABEL_11;
    }
  }
  return v2;
}

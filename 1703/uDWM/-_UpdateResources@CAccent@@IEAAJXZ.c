/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800068C0
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000681C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18001C8A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18001D5A0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180006AB4 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180006B34 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18001E344 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x18007F888 (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CRenderDataVisual **this)
{
  const struct ACCENT_POLICY *v1; // rdx
  unsigned int v2; // edi
  int v4; // eax
  int updated; // eax
  struct CVisual *v7; // r9
  int v8; // eax

  v1 = (const struct ACCENT_POLICY *)(this + 35);
  v2 = 0;
  if ( (unsigned int)(*((_DWORD *)this + 70) - 2) > 1 )
  {
    if ( (*(_DWORD *)v1 & 0xFFFFFFFB) != 0 )
    {
      v4 = CAccent::_EnsureBackgroundVisual((CAccent *)this, v1, this + 40, 0LL);
      v2 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x32Bu);
        goto LABEL_11;
      }
    }
    if ( *((_BYTE *)this + 312) )
    {
      v7 = this[40];
      *((_DWORD *)this + 90) = 0;
      v8 = CAccent::_EnsureBackgroundVisual((CAccent *)this, (const struct ACCENT_POLICY *)(this + 37), this + 41, v7);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x336u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x338u);
      goto LABEL_11;
    }
  }
  return v2;
}

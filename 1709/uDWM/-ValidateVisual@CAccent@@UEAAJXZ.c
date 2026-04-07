/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180012710
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x180008170 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000839C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180012850 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180015830 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x180075920 (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180077A68 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180077BF0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x180077CCC (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v6; // eax
  int updated; // eax

  if ( *((_BYTE *)this + 373) || (unsigned int)(*((_DWORD *)this + 70) - 2) <= 2 )
  {
    v2 = *((_DWORD *)this + 70);
    if ( v2 != 4 )
    {
      if ( (*((_DWORD *)this + 20) & 0x10000) != 0 && v2 == 3 && *((_QWORD *)this + 42) )
        CAccent::_UpdateAccentBlurBehind(this);
      goto LABEL_5;
    }
    if ( (*((_DWORD *)this + 20) & 0x1000) == 0
      || !*((_QWORD *)this + 43)
      || (updated = CAccent::_UpdateAcrylicBlurBehind(this), v4 = updated, updated >= 0) )
    {
LABEL_5:
      *((_DWORD *)this + 20) &= 0xFFFF8FFF;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x36Fu);
LABEL_25:
    CAccent::_CleanupNonStaticsResources(this);
    CAccent::CleanupAccentStatics();
    return v4;
  }
  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
  {
    v6 = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x361u);
      goto LABEL_25;
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
  {
    CAccent::_UpdateTransitionGradient(this);
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
LABEL_6:
  *((_DWORD *)this + 20) &= ~0x10000u;
  if ( (*((_DWORD *)this + 20) & 0x8000) != 0 )
  {
    CAccent::_UpdateClipRegion(this);
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  v3 = CRenderDataVisual::ValidateVisual(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x38Bu);
    goto LABEL_25;
  }
  return v4;
}

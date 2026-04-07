/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180010580
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x180002C78 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800030EC (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800108AC (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18003BDBC (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180080F44 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800810D8 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  int v2; // edx
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int updated; // edi
  unsigned int v8; // eax
  int v9; // ecx

  if ( *((_BYTE *)this + 373) || (unsigned int)(*((_DWORD *)this + 70) - 2) <= 2 )
  {
    v2 = *((_DWORD *)this + 70);
    v3 = *((_DWORD *)this + 20);
    if ( v2 != 4 )
    {
      v9 = *((_DWORD *)this + 20);
      if ( (v3 & 0x10000) != 0 && v2 == 3 && *((_QWORD *)this + 42) )
      {
        CAccent::_UpdateAccentBlurBehind(this);
        v9 = *((_DWORD *)this + 20);
      }
      v3 = v9;
      goto LABEL_5;
    }
    if ( (v3 & 0x1000) == 0 || !*((_QWORD *)this + 43) )
    {
LABEL_5:
      v4 = v3 & 0xFFFF8FFF;
      *((_DWORD *)this + 20) = v4;
      goto LABEL_6;
    }
    updated = CAccent::_UpdateAcrylicBlurBehind(this);
    if ( updated >= 0 )
    {
      v3 = *((_DWORD *)this + 20);
      goto LABEL_5;
    }
    v8 = 862;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v8);
    CAccent::_CleanupNonStaticsResources(this);
    return (unsigned int)updated;
  }
  v4 = *((_DWORD *)this + 20);
  if ( (v4 & 0x1000) != 0 )
  {
    updated = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
    if ( updated < 0 )
    {
      v8 = 848;
      goto LABEL_26;
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
    v4 = *((_DWORD *)this + 20);
  }
  if ( (v4 & 0x2000) != 0 )
  {
    CAccent::_UpdateTransitionGradient(this);
    *((_DWORD *)this + 20) &= ~0x2000u;
    v4 = *((_DWORD *)this + 20);
  }
LABEL_6:
  v5 = v4 & 0xFFFEFFFF;
  *((_DWORD *)this + 20) = v5;
  if ( (v5 & 0x8000) != 0 )
  {
    CAccent::_UpdateClipRegion(this);
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  updated = CRenderDataVisual::ValidateVisual(this);
  if ( updated < 0 )
  {
    v8 = 890;
    goto LABEL_26;
  }
  return (unsigned int)updated;
}

/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18001D5A0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x1800067C4 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800068C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18001D01C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18001E344 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18001F350 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180024270 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x18007F888 (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x18007F8E0 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  int v2; // eax
  int v3; // edi
  __int64 (__fastcall *v5)(CRenderDataVisual *__hidden); // rax
  int v6; // eax
  int updated; // eax

  if ( *((_BYTE *)this + 365) || (unsigned int)(*((_DWORD *)this + 70) - 2) <= 1 )
  {
    if ( (*((_DWORD *)this + 20) & 0x10000) != 0 && *((_DWORD *)this + 70) == 3 && *((_QWORD *)this + 42) )
      CAccent::_UpdateAccentBlurBehind(this);
    *((_DWORD *)this + 20) &= 0xFFFF8FFF;
  }
  else
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
    {
      updated = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x35Cu);
LABEL_28:
        CAccent::_CleanupNonStaticsResources(this);
        CAccent::CleanupAccentStatics();
        return (unsigned int)v3;
      }
      *((_DWORD *)this + 20) &= ~0x1000u;
    }
    if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
    {
      CAccent::_UpdateTransitionGradient(this);
      *((_DWORD *)this + 20) &= ~0x2000u;
    }
  }
  *((_DWORD *)this + 20) &= ~0x10000u;
  if ( (*((_DWORD *)this + 20) & 0x8000) != 0 )
  {
    CAccent::_UpdateClipRegion(this);
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x94u);
  }
  else if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    v5 = *(__int64 (__fastcall **)(CRenderDataVisual *__hidden))(*(_QWORD *)this + 176LL);
    if ( v5 == CRenderDataVisual::UpdateRenderData )
      v6 = CRenderDataVisual::UpdateRenderData(this);
    else
      v6 = v5(this);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x98u);
    else
      *((_DWORD *)this + 20) &= ~4u;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x37Du);
    goto LABEL_28;
  }
  return (unsigned int)v3;
}

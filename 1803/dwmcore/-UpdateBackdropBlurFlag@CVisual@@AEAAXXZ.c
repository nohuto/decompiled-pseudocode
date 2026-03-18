/*
 * XREFs of ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004D1A8
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180029A50 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x180029B20 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18004D170 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180055DE0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800953D0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180095850 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098B50 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180098F50 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180099460 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009AE80 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::UpdateBackdropBlurFlag(CVisual *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r14
  __int64 v6; // rcx
  char v7; // bp
  char v8; // si
  __int64 (__fastcall *v9)(_QWORD, _QWORD); // rax
  char v10; // al
  CMaskBrush *v11; // rdi
  bool (__fastcall *v12)(__int64, int); // rax
  char v13; // al
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(CNineGridBrush *, char); // rax
  _BYTE *v16; // rax
  char v17; // dl
  int v18; // r9d
  __int64 v19; // rcx
  CVisual *v20; // rcx
  char v21; // dl
  CVisual *v22; // rcx

  v5 = 0;
  v6 = *((_QWORD *)this + 31);
  v7 = 0;
  v8 = 0;
  if ( v6 )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v6 + 48LL);
    if ( v9 == CColorBrush::IsOfType )
    {
      v10 = CColorBrush::IsOfType(v6, 14LL);
    }
    else if ( v9 == CMaskBrush::IsOfType )
    {
      v10 = CMaskBrush::IsOfType(v6, 14LL);
    }
    else if ( (char *)v9 == (char *)CRenderData::IsOfType )
    {
      v10 = CRenderData::IsOfType(v6, 14LL, CSurfaceBrush::IsOfType, a4);
    }
    else if ( v9 == CEffectBrush::IsOfType )
    {
      v10 = CEffectBrush::IsOfType(v6, 14LL);
    }
    else
    {
      v10 = v9 == CSurfaceBrush::IsOfType
          ? CSurfaceBrush::IsOfType(v6, 14LL)
          : ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v9)(
              v6,
              14LL,
              CSurfaceBrush::IsOfType);
    }
    if ( v10 )
    {
      v11 = (CMaskBrush *)*((_QWORD *)this + 31);
      v12 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v11 + 48LL);
      if ( (char *)v12 == (char *)CColorBrush::IsOfType )
      {
        v13 = CColorBrush::IsOfType(*((_QWORD *)this + 31), 157LL);
      }
      else if ( (char *)v12 == (char *)CMaskBrush::IsOfType )
      {
        v13 = CMaskBrush::IsOfType(*((_QWORD *)this + 31), 157LL);
      }
      else if ( (char *)v12 == (char *)CEffectBrush::IsOfType )
      {
        v13 = CEffectBrush::IsOfType(*((_QWORD *)this + 31), 157LL);
      }
      else if ( (char *)v12 == (char *)CSurfaceBrush::IsOfType )
      {
        v13 = CSurfaceBrush::IsOfType(*((_QWORD *)this + 31), 157LL);
      }
      else
      {
        v19 = *((_QWORD *)this + 31);
        if ( v12 == CNineGridBrush::IsOfType )
          v13 = CNineGridBrush::IsOfType(v19, 157);
        else
          v13 = v12(v19, 157);
      }
      if ( v13 )
      {
        v7 = 1;
      }
      else
      {
        LOBYTE(v14) = 1;
        v15 = *(__int64 (__fastcall **)(CNineGridBrush *, char))(*(_QWORD *)v11 + 304LL);
        if ( (char *)v15 == (char *)CMaskBrush::EnsureBrushGraph )
        {
          CMaskBrush::EnsureBrushGraph(v11, 1);
        }
        else if ( (char *)v15 == (char *)CEffectBrush::EnsureBrushGraph )
        {
          CEffectBrush::EnsureBrushGraph(v11, 1);
        }
        else if ( v15 == CNineGridBrush::EnsureBrushGraph )
        {
          CNineGridBrush::EnsureBrushGraph(v11, 1);
        }
        else
        {
          v15(v11, v14);
        }
        v16 = (_BYTE *)*((_QWORD *)v11 + 8);
        if ( v16 )
        {
          v8 = v16[193];
          v5 = v16[192];
          v7 = v16[194];
        }
      }
    }
  }
  if ( v8 != ((*((_BYTE *)this + 94) & 4) != 0) )
    *((_BYTE *)this + 94) ^= (*((_BYTE *)this + 94) ^ (4 * v8)) & 4;
  v17 = *((_BYTE *)this + 264);
  v18 = -1;
  if ( v5 != (v17 & 1) )
  {
    v22 = (CVisual *)*((_QWORD *)this + 10);
    if ( v5 )
    {
      if ( v22 )
      {
        CVisual::PropagateBackdropUpdates(v22, 1, 0);
        v17 = *((_BYTE *)this + 264);
      }
      v17 |= 1u;
    }
    else
    {
      if ( v22 )
      {
        CVisual::PropagateBackdropUpdates(v22, -1, 0);
        v17 = *((_BYTE *)this + 264);
      }
      v17 &= ~1u;
    }
    *((_BYTE *)this + 264) = v17;
  }
  if ( v7 != ((v17 & 2) != 0) )
  {
    v20 = (CVisual *)*((_QWORD *)this + 10);
    if ( v7 )
    {
      if ( v20 )
      {
        CVisual::PropagateBackdropUpdates(v20, 0, 1);
        v17 = *((_BYTE *)this + 264);
      }
      v21 = v17 | 2;
    }
    else
    {
      if ( v20 )
      {
        CVisual::PropagateBackdropUpdates(v20, 0, v18);
        v17 = *((_BYTE *)this + 264);
      }
      v21 = v17 & 0xFD;
    }
    *((_BYTE *)this + 264) = v21;
  }
}

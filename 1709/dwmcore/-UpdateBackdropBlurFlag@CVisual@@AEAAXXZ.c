/*
 * XREFs of ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004F228
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D840 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024790 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180024B30 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18004F1F0 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006AE30 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070CF0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800825B0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180082DD0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::UpdateBackdropBlurFlag(CVisual *this)
{
  char v2; // r14
  __int64 v3; // rcx
  char v4; // bp
  char v5; // si
  bool (__fastcall *v6)(__int64, int); // rax
  char v7; // al
  CMaskBrush *v8; // rdi
  bool (__fastcall *v9)(__int64, int); // rax
  char v10; // al
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(CMaskBrush *, char); // rax
  _BYTE *v13; // rax
  int v14; // r9d
  CVisual *v15; // rcx
  CVisual *v16; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 30);
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    v6 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v3 + 48LL);
    if ( v6 == CMaskBrush::IsOfType )
    {
      v7 = CMaskBrush::IsOfType(v3, 14);
    }
    else if ( (char *)v6 == (char *)CColorBrush::IsOfType )
    {
      v7 = CColorBrush::IsOfType(v3, 14LL);
    }
    else if ( v6 == CRenderData::IsOfType )
    {
      v7 = CRenderData::IsOfType(v3, 14);
    }
    else if ( (char *)v6 == (char *)CAtlasedRectsGroup::IsOfType )
    {
      v7 = CAtlasedRectsGroup::IsOfType(v3, 14LL);
    }
    else
    {
      v7 = (char *)v6 == (char *)CEffectBrush::IsOfType ? CEffectBrush::IsOfType(v3, 14LL) : v6(v3, 14);
    }
    if ( v7 )
    {
      v8 = (CMaskBrush *)*((_QWORD *)this + 30);
      v9 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v8 + 48LL);
      if ( v9 == CMaskBrush::IsOfType )
      {
        v10 = CMaskBrush::IsOfType((__int64)v8, 138);
      }
      else if ( (char *)v9 == (char *)CColorBrush::IsOfType )
      {
        v10 = CColorBrush::IsOfType(v8, 138LL);
      }
      else if ( (char *)v9 == (char *)CEffectBrush::IsOfType )
      {
        v10 = CEffectBrush::IsOfType(v8, 138LL);
      }
      else
      {
        v10 = v9((__int64)v8, 138);
      }
      if ( v10 )
      {
        v4 = 1;
      }
      else
      {
        LOBYTE(v11) = 1;
        v12 = *(__int64 (__fastcall **)(CMaskBrush *, char))(*(_QWORD *)v8 + 272LL);
        if ( v12 == CMaskBrush::EnsureBrushGraph )
        {
          CMaskBrush::EnsureBrushGraph(v8, 1);
        }
        else if ( (char *)v12 == (char *)CEffectBrush::EnsureBrushGraph )
        {
          CEffectBrush::EnsureBrushGraph(v8, 1);
        }
        else
        {
          v12(v8, v11);
        }
        v13 = (_BYTE *)*((_QWORD *)v8 + 8);
        if ( v13 )
        {
          v5 = v13[353];
          v2 = v13[352];
          v4 = v13[354];
        }
      }
    }
  }
  if ( v5 != ((*((_BYTE *)this + 93) & 0x40) != 0) )
    *((_BYTE *)this + 93) ^= (*((_BYTE *)this + 93) ^ (v5 << 6)) & 0x40;
  v14 = -1;
  if ( v2 != (*((_BYTE *)this + 256) & 1) )
  {
    v15 = (CVisual *)*((_QWORD *)this + 10);
    if ( v2 )
    {
      if ( v15 )
        CVisual::PropagateBackdropUpdates(v15, 1, 0);
      *((_BYTE *)this + 256) |= 1u;
    }
    else
    {
      if ( v15 )
        CVisual::PropagateBackdropUpdates(v15, -1, 0);
      *((_BYTE *)this + 256) &= ~1u;
    }
  }
  if ( v4 != ((*((_BYTE *)this + 256) & 2) != 0) )
  {
    v16 = (CVisual *)*((_QWORD *)this + 10);
    if ( v4 )
    {
      if ( v16 )
        CVisual::PropagateBackdropUpdates(v16, 0, 1);
      *((_BYTE *)this + 256) |= 2u;
    }
    else
    {
      if ( v16 )
        CVisual::PropagateBackdropUpdates(v16, 0, v14);
      *((_BYTE *)this + 256) &= ~2u;
    }
  }
}

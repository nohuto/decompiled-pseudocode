/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x18009D980
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180029AC0 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800954F0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180098E50 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800DA9A8 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1800DCFF4 (-GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  float *v2; // rcx
  unsigned __int8 (*v3)(void); // rax
  bool (__fastcall *v4)(CNineGridBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  __int64 v6; // rax
  int v8; // edx
  int *v9; // rcx
  CProjectedShadowReceiver *v10; // rbp
  int v11; // esi
  __int64 v12; // rdi
  struct CProjectedShadow *ShadowAtIndexNoRef; // rax
  struct CDropShadow *DropShadow; // rax
  bool v15; // [rsp+40h] [rbp+8h] BYREF
  CProjectedShadowReceiver *v16; // [rsp+48h] [rbp+10h]

  v2 = (float *)*((_QWORD *)this + 31);
  if ( v2 )
  {
    v3 = *(unsigned __int8 (**)(void))(*(_QWORD *)v2 + 192LL);
    if ( (char *)v3 == (char *)CSpriteVisualContent::IsEmptyDrawing )
    {
      v4 = *(bool (__fastcall **)(CNineGridBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v2 + 272LL);
      v15 = 0;
      if ( v4 == CMaskBrush::IsReadyToDraw )
      {
        IsReadyToDraw = CMaskBrush::IsReadyToDraw((CMaskBrush *)v2, 0LL, &v15);
      }
      else if ( (char *)v4 == (char *)CEffectBrush::IsReadyToDraw )
      {
        IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v2, 0LL, &v15);
      }
      else if ( (char *)v4 == (char *)CSurfaceBrush::IsReadyToDraw )
      {
        IsReadyToDraw = CSurfaceBrush::IsReadyToDraw((CSurfaceBrush *)v2, 0LL, &v15);
      }
      else if ( v4 == CNineGridBrush::IsReadyToDraw )
      {
        IsReadyToDraw = CNineGridBrush::IsReadyToDraw((CNineGridBrush *)v2, 0LL, &v15);
      }
      else
      {
        IsReadyToDraw = v4((CNineGridBrush *)v2, 0LL, &v15);
      }
      if ( IsReadyToDraw && !v15 )
        return 1;
    }
    else if ( (char *)v3 == (char *)CColorBrush::IsEmptyDrawing )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2[21]) & _xmm) >= 0.0000011920929 )
        return 1;
    }
    else if ( !v3() )
    {
      return 1;
    }
  }
  v6 = *((_QWORD *)this + 27);
  if ( (*(_BYTE *)(v6 + 4) & 1) == 0 )
    goto LABEL_10;
  v8 = *(_DWORD *)(v6 + 12);
  v9 = (int *)(v6 + 12);
  if ( (v8 & 0x7F000000) != 0x20000000 )
  {
    do
    {
      v9 = (int *)((char *)v9 + (v8 & 0xFFFFFF) + 4);
      v8 = *v9;
    }
    while ( (*v9 & 0x7F000000) != 0x20000000 );
  }
  v16 = *(CProjectedShadowReceiver **)(v9 + 1);
  v10 = v16;
  if ( v16 && (v11 = 0, v12 = (__int64)(*((_QWORD *)v16 + 9) - *((_QWORD *)v16 + 8)) >> 3, (int)v12 > 0) )
  {
    while ( 1 )
    {
      ShadowAtIndexNoRef = CProjectedShadowReceiver::GetShadowAtIndexNoRef(v10, v11);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CProjectedShadow *))(*(_QWORD *)ShadowAtIndexNoRef + 192LL))(ShadowAtIndexNoRef) )
        break;
      if ( ++v11 >= (int)v12 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x100) == 0 )
      return 0;
    DropShadow = CSpriteVisual::GetDropShadow(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CDropShadow *))(*(_QWORD *)DropShadow + 192LL))(DropShadow) )
      return 0;
  }
  return 1;
}

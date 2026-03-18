/*
 * XREFs of ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18012B4B0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18014B1C0 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsSimple3DRootOrHasEffects(CVisual *this, const struct CVisual *a2)
{
  int v2; // r14d
  char v4; // bl
  bool v5; // si
  __int64 v6; // rax
  bool v7; // bp
  struct CEffect *EffectInternal; // rax
  bool v9; // dl

  v2 = *((_DWORD *)this + 24);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 24) == 1;
  v6 = *((_QWORD *)this + 9);
  if ( (v6 & 2) != 0 )
    v6 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v6) = v6 & 1;
  v7 = (_DWORD)v6 != 0;
  v9 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           8LL) )
    {
      v9 = 1;
    }
  }
  if ( v2 == 1 )
    goto LABEL_17;
  if ( !v5 )
    return 0;
  if ( !v7 )
  {
LABEL_17:
    if ( !v5 || !v9 && (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000) == 0 )
      return 0;
  }
  return v4;
}

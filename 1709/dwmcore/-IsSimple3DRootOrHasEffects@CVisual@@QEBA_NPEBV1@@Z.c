/*
 * XREFs of ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18011A3F4
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18013C558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsSimple3DRootOrHasEffects(CVisual *this, const struct CVisual *a2)
{
  int v2; // r15d
  char v4; // di
  bool v5; // bp
  __int64 v6; // rbx
  struct CEffect *EffectInternal; // rax
  bool v8; // r14
  char v9; // al

  v2 = *((_DWORD *)this + 25);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 25) == 1;
  v6 = *((_QWORD *)this + 9);
  if ( (v6 & 2) != 0 )
    v6 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v6) = v6 & 1;
  v8 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           49LL) )
    {
      v8 = 1;
    }
  }
  v9 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 176LL))(this);
  if ( v2 == 1 )
    goto LABEL_17;
  if ( !v5 )
    return 0;
  if ( !(_DWORD)v6 )
  {
LABEL_17:
    if ( !v5 || !v8 && !v9 )
      return 0;
  }
  return v4;
}

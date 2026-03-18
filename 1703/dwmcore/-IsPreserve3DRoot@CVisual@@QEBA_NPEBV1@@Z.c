/*
 * XREFs of ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x180013760
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180012408 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800931E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsPreserve3DRoot(CVisual *this, const struct CVisual *a2)
{
  int v2; // ebp
  char v4; // bl
  bool v5; // si
  __int64 v6; // rax
  bool v7; // al
  struct CEffect *EffectInternal; // rcx
  __int64 (__fastcall *v10)(struct CEffect *, __int64); // rax
  char v11; // al
  __int64 v12; // rax
  bool v13; // zf

  v2 = *((_DWORD *)this + 24);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 24) == 1;
  v6 = *((_QWORD *)this + 26);
  v7 = 1;
  if ( (*(_DWORD *)(v6 + 4) & 0x10000) == 0 )
  {
    if ( (*(_DWORD *)(v6 + 4) & 0x8000000) == 0
      || ((EffectInternal = CVisual::GetEffectInternal(this),
           v10 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL),
           (char *)v10 != (char *)CEffectGroup::IsOfType)
        ? (v11 = v10(EffectInternal, 8LL))
        : (v11 = CEffectGroup::IsOfType(EffectInternal, 8LL)),
          !v11) )
    {
      v7 = 0;
    }
  }
  if ( v2 != 1 )
    return 0;
  if ( v5 )
  {
    v13 = !v7;
  }
  else
  {
    v12 = *((_QWORD *)this + 9);
    if ( (v12 & 2) != 0 )
      v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v12) = v12 & 1;
    v13 = (_DWORD)v12 == 0;
  }
  if ( v13 )
    return 0;
  return v4;
}

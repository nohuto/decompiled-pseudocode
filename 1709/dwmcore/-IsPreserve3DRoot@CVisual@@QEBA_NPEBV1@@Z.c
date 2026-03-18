/*
 * XREFs of ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18004E990
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180092A80 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsPreserve3DRoot(CVisual *this, const struct CVisual *a2)
{
  int v2; // ebp
  char v4; // bl
  bool v5; // si
  bool v6; // al
  struct CEffect *EffectInternal; // rcx
  __int64 (__fastcall *v9)(struct CEffect *, __int64); // rax
  char v10; // al
  __int64 v11; // rax
  bool v12; // zf

  v2 = *((_DWORD *)this + 25);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 25) == 1;
  v6 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 176LL))(this) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x8000000) == 0
      || ((EffectInternal = CVisual::GetEffectInternal(this),
           v9 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL),
           (char *)v9 != (char *)CEffectGroup::IsOfType)
        ? (v10 = v9(EffectInternal, 49LL))
        : (v10 = CEffectGroup::IsOfType(EffectInternal, 49LL)),
          !v10) )
    {
      v6 = 0;
    }
  }
  if ( v2 != 1 )
    return 0;
  if ( v5 )
  {
    v12 = !v6;
  }
  else
  {
    v11 = *((_QWORD *)this + 9);
    if ( (v11 & 2) != 0 )
      v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v11) = v11 & 1;
    v12 = (_DWORD)v11 == 0;
  }
  if ( v12 )
    return 0;
  return v4;
}

/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004F95C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180053A20 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18004EDF0 (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180096504 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  __int64 v3; // rcx
  float v5; // xmm4_4
  float v6; // xmm1_4
  bool v7; // cf
  bool v8; // zf
  float v9; // xmm1_4
  BOOL v10; // edi
  __int64 i; // rcx

  v3 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v3 + 4) & 0x100000) != 0 )
  {
    for ( i = v3 + 12; (*(_DWORD *)i & 0x7F000000) != 0xC000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v5 = *(float *)(i + 4);
  }
  else
  {
    v5 = FLOAT_1_0;
  }
  if ( v5 != a2 )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
    v7 = v6 > 0.0000011920929;
    v8 = 0.0000011920929 == v6;
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
    v10 = !v7 && !v8;
    CVisual::SetOpacityInternal(this, a2);
    CVisual::PropagateFlags(this, ((v9 < 0.0000011920929) ^ (unsigned int)v10) + 4, 0LL);
    CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x17u, a2);
    CResource::InvalidateAnimationSources(this, 0x17u);
  }
}

/*
 * XREFs of ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180050F6C
 * Callers:
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x180051810 (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18009C6A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x180129CC0 (-SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z.c)
 * Callees:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18004F6C8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18004F7FC (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

__int64 __fastcall CVisual::SetEffect(CVisual *this, struct CEffect *a2)
{
  unsigned int v3; // esi
  struct CResource *EffectInternal; // rbp
  bool v6; // r14
  int v7; // eax
  char v8; // bl
  struct CEffect *v10; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  EffectInternal = CVisual::GetEffectInternal(this);
  if ( a2 != EffectInternal )
  {
    v6 = CVisual::GetTransform3DEffectNoRef(this) != 0LL;
    v7 = CResource::RegisterNotifier(this, a2);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x918u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, EffectInternal);
      v10 = a2;
      if ( a2 == (struct CEffect *)`CVisual::SetEffectInternal'::`2'::sc_defaultValue )
        *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x8000000u;
      else
        CSparseStorage::SetData((CVisual *)((char *)this + 208), 5u, 8u, &v10);
      v8 = v6;
      if ( CVisual::GetTransform3DEffectNoRef(this) )
        v8 = 1;
      CVisual::PropagateFlags(this, 5LL, 0LL);
      if ( v8 )
        CVisual::OnInnerTransformChanged(this);
    }
  }
  return v3;
}

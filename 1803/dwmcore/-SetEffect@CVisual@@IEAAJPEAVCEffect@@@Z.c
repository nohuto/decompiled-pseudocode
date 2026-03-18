/*
 * XREFs of ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18004FCD0
 * Callers:
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x1800507BC (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800930C0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x18014B970 (-SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18004D69C (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18004D7D0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::SetEffect(CVisual *this, struct CEffect *a2)
{
  unsigned int v3; // esi
  struct CResource *EffectInternal; // rbp
  bool v6; // r14
  int v7; // eax
  char **v8; // rcx
  char v9; // bl
  struct CEffect *v11; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  EffectInternal = CVisual::GetEffectInternal(this);
  if ( a2 != EffectInternal )
  {
    v6 = CVisual::GetTransform3DEffectNoRef(this) != 0LL;
    v7 = CResource::RegisterNotifier(this, a2);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x9ABu);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, EffectInternal);
      v8 = (char **)((char *)this + 216);
      v11 = a2;
      if ( a2 == (struct CEffect *)`CVisual::SetEffectInternal'::`2'::sc_defaultValue )
        *((_DWORD *)*v8 + 1) &= ~0x8000000u;
      else
        CSparseStorage::SetData(v8, 5, 8u, &v11);
      v9 = v6;
      if ( CVisual::GetTransform3DEffectNoRef(this) )
        v9 = 1;
      CVisual::PropagateFlags(this, 5LL);
      if ( v9 )
        CVisual::OnInnerTransformChanged(this);
    }
  }
  return v3;
}

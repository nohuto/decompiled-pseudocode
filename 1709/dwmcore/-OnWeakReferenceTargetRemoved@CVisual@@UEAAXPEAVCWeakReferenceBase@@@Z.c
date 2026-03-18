/*
 * XREFs of ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180052890
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004EB84 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004F728 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800B16E0 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 */

void __fastcall CVisual::OnWeakReferenceTargetRemoved(CVisual *this, struct CWeakReferenceBase *a2)
{
  CWeakReferenceBase **TransformParentDataInternal; // rax
  CWeakReferenceBase *v4; // r10
  __int64 v5; // rcx
  CVisual *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000000) != 0 )
  {
    TransformParentDataInternal = (CWeakReferenceBase **)CVisual::GetTransformParentDataInternal(this);
    v6 = (CVisual *)TransformParentDataInternal;
    if ( *TransformParentDataInternal == v4 )
    {
      CWeakReferenceBase::Release(*TransformParentDataInternal);
      SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v6);
      CVisual::SetTransformParentDataInternal(this, 0LL);
      v5 = *((_QWORD *)this + 2) + 992LL;
      v6 = this;
      DynArray<CVisual *,0>::Remove(v5, &v6);
      CVisual::PropagateFlags((__int64)this, 5u, 0);
      CVisual::OnOuterTransformChanged(this);
    }
  }
}

/*
 * XREFs of ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180013230
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x180085544 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180086BE0 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800B51C4 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x1800C1D3C (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C5964 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CVisual::OnWeakReferenceTargetRemoved(CVisual *this, struct CWeakReferenceBase *a2)
{
  CWeakReferenceBase **TransformParentDataInternal; // rax
  CWeakReferenceBase *v4; // r10
  __int64 v5; // rcx
  CVisual *v6; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000000) != 0 )
  {
    TransformParentDataInternal = (CWeakReferenceBase **)CVisual::GetTransformParentDataInternal(this);
    v6 = (CVisual *)TransformParentDataInternal;
    if ( *TransformParentDataInternal == v4 )
    {
      CWeakReferenceBase::Release(*TransformParentDataInternal);
      SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v6);
      CVisual::SetTransformParentDataInternal(this, 0LL);
      v5 = *((_QWORD *)this + 2) + 1024LL;
      v6 = this;
      DynArray<CVisual *,0>::Remove(v5, &v6);
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
      CVisual::OnOuterTransformChanged(this);
    }
  }
}

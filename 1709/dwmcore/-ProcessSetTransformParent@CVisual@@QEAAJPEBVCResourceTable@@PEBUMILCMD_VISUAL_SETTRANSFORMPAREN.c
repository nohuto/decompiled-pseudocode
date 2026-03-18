/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180051AC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004EB84 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004F728 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?AddListener@CWeakReferenceBase@@QEAAJPEAVCResource@@@Z @ 0x18006B464 (-AddListener@CWeakReferenceBase@@QEAAJPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800B16E0 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rdx
  char v6; // bl
  struct CResource *Resource; // r15
  int v10; // r12d
  struct CWeakReferenceBase *TransformParentDataInternal; // rax
  char v12; // r10
  struct CResource *v13; // r13
  struct CWeakReferenceBase *v14; // rdi
  int v15; // r12d
  CComposition *v16; // rcx
  int WeakReferenceBase; // eax
  struct CWeakReferenceBase *v18; // rbx
  __int64 v19; // r10
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // r9d
  __int64 v31; // rcx
  unsigned int v32; // [rsp+20h] [rbp-10h]
  CVisual *v33; // [rsp+80h] [rbp+50h] BYREF
  struct CWeakReferenceBase *v34; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  v6 = 0;
  Resource = 0LL;
  if ( (_DWORD)v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 134LL);
    if ( !Resource )
    {
      v4 = -2003303421;
      v32 = 2168;
LABEL_45:
      v30 = v4;
      goto LABEL_47;
    }
  }
  v10 = *(_DWORD *)(*((_QWORD *)this + 26) + 4LL);
  LOBYTE(v33) = *((_DWORD *)a3 + 3) != 0;
  TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
  v13 = 0LL;
  v34 = TransformParentDataInternal;
  v14 = TransformParentDataInternal;
  v15 = v10 & 0x10000000;
  if ( v15 )
    v13 = *(struct CResource **)(*(_QWORD *)TransformParentDataInternal + 8LL);
  if ( Resource == v13 )
    goto LABEL_17;
  if ( Resource && !v15 )
  {
    v14 = (struct CWeakReferenceBase *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
    if ( v14 )
    {
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 1) = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    v34 = v14;
    if ( !v14 )
    {
      v4 = -2147024882;
      v32 = 2186;
      goto LABEL_45;
    }
  }
  if ( v13 )
  {
    v25 = *(_QWORD *)v14;
    v26 = 0LL;
    v27 = *(_DWORD *)(*(_QWORD *)v14 + 40LL);
    v28 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
    if ( v27 )
    {
      do
      {
        if ( this == *(CVisual **)(v28 + 8 * v26) )
          break;
        v26 = (unsigned int)(v26 + 1);
      }
      while ( (unsigned int)v26 < v27 );
    }
    if ( (unsigned int)v26 < v27 )
    {
      if ( (unsigned int)v26 < v27 - 1 )
      {
        do
        {
          v29 = (unsigned int)(v26 + 1);
          *(_QWORD *)(v28 + 8 * v26) = *(_QWORD *)(v28 + 8 * v29);
          v26 = v29;
        }
        while ( (unsigned int)v29 < *(_DWORD *)(v25 + 40) - 1 );
      }
      --*(_DWORD *)(v25 + 40);
    }
    CWeakReferenceBase::Release(*(CWeakReferenceBase **)v14);
  }
  if ( Resource )
  {
    v16 = (CComposition *)*((_QWORD *)this + 2);
    v34 = 0LL;
    WeakReferenceBase = CComposition::GetWeakReferenceBase(v16, Resource, &v34);
    v4 = WeakReferenceBase;
    if ( WeakReferenceBase >= 0 )
    {
      v18 = v34;
      CWeakReferenceBase::AddListener(v34, this);
      *(_QWORD *)v14 = v18;
      if ( !v15 )
        CVisual::SetTransformParentDataInternal(this, v14);
      goto LABEL_16;
    }
    v32 = 2198;
    v30 = WeakReferenceBase;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, v32);
    return v4;
  }
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v34);
  CVisual::SetTransformParentDataInternal(this, 0LL);
  v14 = v34;
LABEL_16:
  v12 = (char)v33;
  v6 = 1;
LABEL_17:
  if ( v14 && *((_BYTE *)v14 + 8) != v12 )
  {
    *((_BYTE *)v14 + 8) = v12;
    v6 = 1;
  }
  if ( v6 )
  {
    if ( v15 )
    {
      if ( !Resource )
      {
        v31 = *((_QWORD *)this + 2) + 992LL;
        v33 = this;
        DynArray<CVisual *,0>::Remove(v31, &v33);
      }
    }
    else if ( Resource )
    {
      v19 = *((_QWORD *)this + 2);
      v33 = this;
      v20 = (unsigned int)this;
      v21 = *(unsigned int *)(v19 + 1016);
      v22 = v21 + 1;
      if ( (int)v21 + 1 >= (unsigned int)v21 )
        v20 = v21 + 1;
      if ( v22 < (unsigned int)v21 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22 < (unsigned int)v21 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v20 > *(_DWORD *)(v19 + 1012) )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet(v19 + 992, 8LL, 1LL, &v33);
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v19 + 992) + 8 * v21) = v33;
        *(_DWORD *)(v19 + 1016) = v20;
      }
    }
    CVisual::PropagateFlags((__int64)this, 5u, 0);
    CVisual::OnOuterTransformChanged(this);
  }
  return v4;
}

/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800856C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x180085544 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180086BE0 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800B51C4 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x1800C1D3C (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?AddListener@CWeakReferenceBase@@QEAAJPEAVCResource@@@Z @ 0x1800C1E28 (-AddListener@CWeakReferenceBase@@QEAAJPEAVCResource@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C5964 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // edx
  char v6; // bl
  struct CResource *Resource; // r15
  int v10; // r12d
  CWeakReferenceBase *TransformParentDataInternal; // rax
  char v12; // r10
  struct CResource *v13; // r13
  CWeakReferenceBase *v14; // rdi
  int v15; // r12d
  struct _RTL_GENERIC_TABLE *v16; // rcx
  int WeakReferenceBase; // eax
  CWeakReferenceBase *v18; // rbx
  __int64 v19; // r10
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  int v30; // r9d
  __int64 v31; // rcx
  unsigned int v32; // [rsp+20h] [rbp-20h]
  CVisual *v33; // [rsp+90h] [rbp+50h] BYREF
  CWeakReferenceBase *v34; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0;
  Resource = 0LL;
  if ( v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x1Fu);
    if ( !Resource )
    {
      v4 = -2003303421;
      v32 = 2117;
LABEL_46:
      v30 = v4;
      goto LABEL_48;
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
    v14 = (CWeakReferenceBase *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
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
      v32 = 2135;
      goto LABEL_46;
    }
  }
  if ( v13 )
  {
    v24 = *(_QWORD *)v14;
    v25 = 0LL;
    v26 = *(_DWORD *)(*(_QWORD *)v14 + 40LL);
    v27 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
    if ( v26 )
    {
      do
      {
        if ( this == *(CVisual **)(v27 + 8 * v25) )
          break;
        v25 = (unsigned int)(v25 + 1);
      }
      while ( (unsigned int)v25 < v26 );
    }
    if ( (unsigned int)v25 < v26 )
    {
      if ( (unsigned int)v25 < v26 - 1 )
      {
        do
        {
          v28 = (unsigned int)(v25 + 1);
          *(_QWORD *)(v27 + 8 * v25) = *(_QWORD *)(v27 + 8 * v28);
          v25 = v28;
        }
        while ( (unsigned int)v28 < *(_DWORD *)(v24 + 40) - 1 );
      }
      --*(_DWORD *)(v24 + 40);
    }
    CWeakReferenceBase::Release(*(CWeakReferenceBase **)v14);
  }
  if ( Resource )
  {
    v16 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 2);
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
    v32 = 2147;
    v30 = WeakReferenceBase;
LABEL_48:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v32);
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
        v31 = *((_QWORD *)this + 2) + 1024LL;
        v33 = this;
        DynArray<CVisual *,0>::Remove(v31, &v33);
      }
    }
    else if ( Resource )
    {
      v19 = *((_QWORD *)this + 2);
      v33 = this;
      v20 = (unsigned int)this;
      v21 = *(unsigned int *)(v19 + 1048);
      v22 = v21 + 1;
      if ( (int)v21 + 1 >= (unsigned int)v21 )
        v20 = v21 + 1;
      if ( v22 < (unsigned int)v21 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22 < (unsigned int)v21 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v20 > *(_DWORD *)(v19 + 1044) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet(v19 + 1024, 8u, 1, &v33);
        if ( v29 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v19 + 1024) + 8 * v21) = v33;
        *(_DWORD *)(v19 + 1048) = v20;
      }
    }
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
    CVisual::OnOuterTransformChanged(this);
  }
  return v4;
}

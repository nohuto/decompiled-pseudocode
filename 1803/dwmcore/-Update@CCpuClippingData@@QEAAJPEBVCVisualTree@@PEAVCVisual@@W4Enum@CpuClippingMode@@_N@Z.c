/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800275D0
 * Callers:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18000B65C (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18000DFF8 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x180027F90 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180029954 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x1800A56A0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClippingData::Update(int *a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v5; // r15d
  bool v9; // r13
  char v10; // r12
  char *p_Blink; // rsi
  CVisual *v12; // rcx
  struct _LIST_ENTRY *v13; // r10
  __int64 v14; // rax
  struct CVisual *VisualNoRef; // r10
  _QWORD *v16; // rdi
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edi
  __int64 v21; // r14
  _DWORD *v22; // rax
  bool v23; // r9
  int v24; // edx
  unsigned int v25; // r8d
  unsigned __int64 v26; // rcx
  int v27; // edx
  float *v28; // r9
  CGeometry *v29; // rcx
  char v30; // r14
  __int64 v31; // rdx
  float v32; // xmm1_4
  __int64 v33; // r14
  bool v34; // al
  __int64 v35; // rcx
  float *v36; // rcx
  float *v37; // r9
  bool v38; // al
  float v39; // xmm2_4
  float v40; // xmm1_4
  int v41; // r8d
  bool v42; // cc
  _DWORD *v43; // rax
  CVisual *v44; // r11
  CTransform3D *v45; // rcx
  unsigned __int64 v46; // rdx
  struct _LIST_ENTRY *v47; // rdi
  CTransform3D *v48; // rax
  bool v49; // zf
  int v50; // edx
  int *v51; // rcx
  __int64 (*v52)(void); // rax
  unsigned __int64 v53; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int ShapeData; // eax
  bool (__fastcall *v57)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  struct CEffect *EffectInternal; // r14
  struct _LIST_ENTRY *v60; // rax
  struct _LIST_ENTRY *v61; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  char v66; // al
  float *v67; // rax
  CRectanglesShape *v68; // [rsp+30h] [rbp-68h] BYREF
  char v69; // [rsp+38h] [rbp-60h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v71; // [rsp+A0h] [rbp+8h]
  CTransform3D *v72; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v73; // [rsp+B0h] [rbp+18h]
  bool v74; // [rsp+B8h] [rbp+20h]

  v5 = a4;
  v74 = a4 == 2;
  v71 = 3;
  v9 = *a1 == 0;
  v10 = 0;
  p_Blink = 0LL;
  if ( *(_QWORD *)(a2 + 24) == a3 )
  {
    v42 = a4 <= 3;
    goto LABEL_91;
  }
  v12 = *(CVisual **)(a3 + 80);
  if ( *(_BYTE *)(a2 + 32) )
  {
    v13 = (struct _LIST_ENTRY *)((char *)v12 + 288);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v12);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != (struct _LIST_ENTRY *)a2 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_4;
        }
        v13 = Flink - 14;
      }
    }
  }
LABEL_4:
  p_Blink = (char *)&v13[8].Blink;
  if ( LODWORD(v13[8].Blink) == 5 )
  {
    v42 = v5 <= 3;
LABEL_91:
    if ( v42 )
      v5 = 3;
  }
  v14 = *(_QWORD *)(a3 + 216);
  if ( (*(_DWORD *)(v14 + 4) & 0x10000000) == 0 )
    goto LABEL_6;
  v50 = *(_DWORD *)(v14 + 12);
  v51 = (int *)(v14 + 12);
  if ( (v50 & 0x7F000000) != 0x4000000 )
  {
    do
    {
      v51 = (int *)((char *)v51 + (v50 & 0xFFFFFF) + 4);
      v50 = *v51;
    }
    while ( (*v51 & 0x7F000000) != 0x4000000 );
  }
  v72 = *(CTransform3D **)(v51 + 1);
  if ( v72 )
  {
    v52 = *(__int64 (**)(void))(**(_QWORD **)v72 + 152LL);
    if ( (char *)v52 == (char *)CVisualReferenceController::GetVisualNoRef )
      VisualNoRef = CVisualReferenceController::GetVisualNoRef(*(CVisualReferenceController **)v72);
    else
      VisualNoRef = (struct CVisual *)v52();
  }
  else
  {
LABEL_6:
    VisualNoRef = 0LL;
  }
  v16 = p_Blink;
  if ( VisualNoRef )
  {
    v44 = *(CVisual **)(a3 + 80);
    v45 = 0LL;
    v46 = 0LL;
    v72 = 0LL;
    v73 = 0LL;
    if ( v44 )
    {
      while ( 1 )
      {
        v47 = 0LL;
        if ( *(_BYTE *)(a2 + 32) )
        {
          v47 = (struct _LIST_ENTRY *)((char *)v44 + 288);
        }
        else
        {
          v60 = CVisual::GetTreeDataListHead(v44);
          if ( v60 )
          {
            v61 = v60->Flink;
            if ( v60->Flink != v60 )
            {
              while ( v61[2].Flink != (struct _LIST_ENTRY *)a2 )
              {
                v61 = v61->Flink;
                if ( v61 == v60 )
                  goto LABEL_165;
              }
              v47 = v61 - 14;
            }
          }
LABEL_165:
          v46 = v73;
          v45 = v72;
        }
        v16 = &v47[8].Blink;
        if ( v44 == VisualNoRef )
          break;
        if ( (unsigned int)(*(_DWORD *)v16 - 1) > 1 )
        {
          v16 = p_Blink;
          if ( v5 <= 3 )
            v5 = 3;
          v53 = *((_QWORD *)a1 + 8);
          goto LABEL_116;
        }
        v48 = (CTransform3D *)v16[1];
        if ( v45 > v48 )
          v48 = v45;
        v49 = *((_QWORD *)v44 + 30) == 0LL;
        v45 = v48;
        v72 = v48;
        if ( !v49 && v46 <= v16[4] )
        {
          v46 = v16[4];
          v73 = v46;
        }
        v44 = (CVisual *)*((_QWORD *)v44 + 10);
        if ( !v44 )
        {
          v16 = p_Blink;
          break;
        }
      }
    }
    v53 = *((_QWORD *)a1 + 8);
    if ( (unsigned __int64)v45 > v53 )
      v9 = 1;
LABEL_116:
    if ( v46 > v53 )
      *((_QWORD *)a1 + 5) = 0LL;
  }
  v17 = *a1;
  if ( v5 > *a1 )
    v9 = 1;
  if ( !*((_QWORD *)a1 + 5) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 5) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 384LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 7) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 384LL);
  }
  if ( !*((_QWORD *)a1 + 6) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 6) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 384LL);
  }
  if ( v9 )
  {
    if ( v5 == 5 )
    {
      v41 = 5;
      goto LABEL_88;
    }
    if ( !CCommonRegistryData::m_fEnableCpuClipping )
    {
      v41 = 5;
      goto LABEL_88;
    }
    if ( v5 == 4 )
    {
      v41 = 4;
      goto LABEL_88;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a3 + 216) + 4LL) & 0x8000000) == 0 )
      goto LABEL_56;
    EffectInternal = CVisual::GetEffectInternal((CVisual *)a3);
    v72 = EffectInternal;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
            EffectInternal,
            143LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
              EffectInternal,
              52LL) )
        goto LABEL_56;
      EffectInternal = (struct CEffect *)*((_QWORD *)EffectInternal + 11);
      v72 = EffectInternal;
    }
    if ( EffectInternal )
    {
      Matrix = CTransform3D::GetMatrix(v72, (const struct D2D_SIZE_F *)(a3 + 132));
      v66 = CMILMatrix::Is2DAffine<0>(Matrix, v63, v64, v65);
      if ( !v66
        || (v67 = (float *)CTransform3D::GetMatrix(v72, (const struct D2D_SIZE_F *)(a3 + 132)),
            !CMILMatrix::IsInvertibleDeterminant((float)(v67[5] * *v67) - (float)(v67[4] * v67[1]))) )
      {
        v41 = 4;
LABEL_88:
        v17 = *a1;
        if ( *a1 != v41 )
        {
          *a1 = v41;
          v10 = 1;
          v17 = v41;
          *((_QWORD *)a1 + 1) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 384LL);
        }
        goto LABEL_17;
      }
    }
LABEL_56:
    v28 = (float *)(a3 + 132);
    if ( v5 == 2 )
    {
      v30 = 1;
      v74 = 1;
    }
    else
    {
      v29 = *(CGeometry **)(a3 + 240);
      if ( v29 )
      {
        v68 = 0LL;
        v69 = 0;
        ShapeData = CGeometry::GetShapeData(v29, (const struct D2D_SIZE_F *)(a3 + 132), (struct CShapePtr *)&v68);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x126u);
          v30 = 1;
          v74 = 1;
        }
        else if ( v68
               && ((v57 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v68 + 40LL),
                    v57 != CRectanglesShape::IsRectangles)
                 ? (IsRectangles = v57(v68, (unsigned int *)&v72))
                 : (IsRectangles = CRectanglesShape::IsRectangles(v68, (unsigned int *)&v72)),
                   IsRectangles && (unsigned int)v72 <= 1) )
        {
          v30 = v74;
        }
        else
        {
          v30 = 1;
          v74 = 1;
        }
        CShapePtr::Release((CShapePtr *)&v68);
        v28 = (float *)(a3 + 132);
      }
      else
      {
        v30 = v74;
      }
    }
    if ( !*(_QWORD *)(a3 + 240) || v30 )
    {
      v31 = 4LL;
      v71 = 4;
    }
    else
    {
      v31 = 3LL;
    }
    if ( v5 == 3 )
    {
      v41 = v71;
    }
    else
    {
      v32 = *(float *)(a3 + 112);
      if ( *(float *)(a3 + 116) == 0.0 && *(float *)(a3 + 120) == 0.0 && v32 == 0.0 || v32 == 0.0 )
      {
        v33 = *(_QWORD *)(a3 + 232);
        if ( !v33 )
          goto LABEL_85;
        v34 = (*(_BYTE *)(v33 + 32) & 1) != 0;
        if ( v28 )
        {
          if ( (*(_BYTE *)(v33 + 32) & 1) == 0
            && *(_BYTE *)(v33 + 148)
            && (*(float *)(v33 + 140) != *v28 || *(float *)(v33 + 144) != v28[1]) )
          {
            v34 = 1;
          }
          *(_QWORD *)(v33 + 140) = *(_QWORD *)v28;
        }
        v35 = v33 + 72;
        v72 = (CTransform3D *)(v33 + 72);
        if ( v34 )
        {
          (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v33 + 168LL))(v33, v28, v33 + 72);
          *(_DWORD *)(v33 + 32) &= ~1u;
          v28 = (float *)(a3 + 132);
          v35 = v33 + 72;
        }
        if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(v35, v31, a3, v28) )
          goto LABEL_144;
        v38 = (*(_BYTE *)(v33 + 32) & 1) != 0;
        if ( v37 )
        {
          if ( (*(_BYTE *)(v33 + 32) & 1) == 0
            && *(_BYTE *)(v33 + 148)
            && (*(float *)(v33 + 140) != *v37 || *(float *)(v33 + 144) != v37[1]) )
          {
            v38 = 1;
          }
          *(_QWORD *)(v33 + 140) = *(_QWORD *)v37;
        }
        if ( v38 )
        {
          (*(void (__fastcall **)(__int64, float *, float *))(*(_QWORD *)v33 + 168LL))(v33, v37, v36);
          *(_DWORD *)(v33 + 32) &= ~1u;
          v36 = (float *)v72;
        }
        v39 = (float)(v36[5] * *v36) - (float)(v36[4] * v36[1]);
        v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v39 - 0.0)) & _xmm);
        if ( v40 >= 0.00000011920929 && _finite((float)(1.0 / v39)) )
        {
LABEL_85:
          if ( v5 == 2 )
          {
            v41 = 2;
          }
          else
          {
            v41 = 1;
            if ( v74 )
              v41 = 2;
          }
        }
        else
        {
LABEL_144:
          v41 = v71;
        }
      }
      else
      {
        v41 = v31;
      }
    }
    goto LABEL_88;
  }
LABEL_17:
  v18 = v17;
  *((_BYTE *)a1 + 76) = a5;
  if ( v16
    && *(_DWORD *)v16 != 5
    && v16[4] > *((_QWORD *)a1 + 4)
    && ((unsigned int)(v17 - 1) <= 1 || v17 == 4 && (v18 = 4, *(_QWORD *)(a3 + 240))) )
  {
    v10 = 1;
  }
  else if ( !v10 )
  {
    goto LABEL_21;
  }
  if ( v18 != 5 )
  {
    v21 = 0LL;
    if ( v16 && *(_DWORD *)v16 != 5 )
      v21 = v16[2];
    if ( !*((_QWORD *)a1 + 2) )
    {
      v43 = HeapAlloc(WPF::g_processHeap, 0, 0x44uLL);
      if ( !v43 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v43[16] = 0;
      *((_QWORD *)a1 + 2) = v43;
    }
    v22 = (_DWORD *)*((_QWORD *)a1 + 3);
    if ( *(_QWORD *)(a3 + 240) )
    {
      if ( !v22 )
      {
        v22 = operator new(0x44uLL);
        if ( v22 )
          v22[16] = 0;
        *((_QWORD *)a1 + 3) = v22;
        if ( !v22 )
        {
          v19 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x183u);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCCu);
          return v19;
        }
      }
    }
    else if ( v22 )
    {
      operator delete(*((void **)a1 + 3), 0x44uLL);
      v22 = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
    }
    CVisual::CalcEffectiveTransform(a3, (unsigned int)*a1, v21, &a5, *((_QWORD *)a1 + 2), v22);
    *((_QWORD *)a1 + 4) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 384LL);
  }
LABEL_21:
  if ( v9 || (v19 = 0, v10) )
  {
    v23 = p_Blink && *((_DWORD *)p_Blink + 18);
    v24 = *a1;
    v25 = 0;
    v26 = *((_QWORD *)a1 + 1);
    v19 = 0;
    *((_QWORD *)a1 + 8) = v26;
    a1[18] = 0;
    v27 = v24 - 1;
    if ( v27 )
    {
      if ( v27 != 2 )
        return v19;
    }
    else
    {
      if ( v26 <= *((_QWORD *)p_Blink + 8) )
        v26 = *((_QWORD *)p_Blink + 8);
      *((_QWORD *)a1 + 8) = v26;
      if ( v23 )
      {
        v25 = *((_DWORD *)p_Blink + 18);
        v42 = v26 <= *((_QWORD *)a1 + 5);
        a1[18] = v25;
        if ( v42 )
          v26 = *((_QWORD *)a1 + 5);
        *((_QWORD *)a1 + 8) = v26;
      }
    }
    if ( v26 <= *((_QWORD *)a1 + 6) )
      v26 = *((_QWORD *)a1 + 6);
    *((_QWORD *)a1 + 8) = v26;
    if ( v23 || *(_QWORD *)(a3 + 240) )
    {
      if ( v26 <= *((_QWORD *)a1 + 7) )
        v26 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 8) = v26;
      if ( *(_QWORD *)(a3 + 240) )
        a1[18] = v25 + 1;
    }
  }
  return v19;
}

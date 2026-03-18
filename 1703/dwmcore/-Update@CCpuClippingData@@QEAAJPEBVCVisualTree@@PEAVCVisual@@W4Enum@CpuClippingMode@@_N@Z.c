/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18008D630
 * Callers:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x180013700 (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18002B258 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180093F00 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180099A90 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x180186354 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 */

__int64 __fastcall CCpuClippingData::Update(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v5; // r11d
  unsigned int v6; // r13d
  int v8; // r15d
  __int64 v10; // r10
  bool v11; // r12
  struct _LIST_ENTRY **v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // r14
  struct _LIST_ENTRY **p_Blink; // rdi
  char v16; // cl
  __int64 v18; // r14
  void *v19; // rcx
  bool v20; // r8
  int v21; // edx
  unsigned __int64 v22; // rcx
  int v23; // edx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  CGeometry *v27; // rcx
  char v28; // r14
  int v29; // ecx
  float v30; // xmm2_4
  __int64 v31; // r14
  float *v32; // r9
  bool v33; // al
  float *v34; // rcx
  float *v35; // r9
  bool v36; // al
  float v37; // xmm2_4
  float v38; // xmm1_4
  _DWORD *v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rcx
  int v42; // edx
  int *v43; // rcx
  _QWORD *v44; // rcx
  unsigned __int64 v45; // rdx
  CVisual *v46; // rax
  CRectanglesShape *v47; // r8
  char v48; // cl
  struct _LIST_ENTRY *v49; // rdi
  int ShapeData; // eax
  bool (__fastcall *v51)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  __int64 v54; // r10
  struct _LIST_ENTRY *Flink; // rcx
  CTransform3D *EffectInternal; // r14
  const struct CMILMatrix *Matrix; // rax
  char v58; // al
  float *v59; // rax
  unsigned __int64 v60; // [rsp+30h] [rbp-68h]
  CRectanglesShape *v61; // [rsp+38h] [rbp-60h] BYREF
  char v62; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  bool v64; // [rsp+A0h] [rbp+8h]
  _QWORD *v65; // [rsp+A8h] [rbp+10h] BYREF
  int v66; // [rsp+B0h] [rbp+18h]
  char v67; // [rsp+B8h] [rbp+20h]

  v5 = *(_DWORD *)a1;
  v6 = 0;
  v8 = a4;
  v64 = a4 == 2;
  v66 = 3;
  v10 = a2;
  v11 = v5 == 0;
  v12 = 0LL;
  v67 = 0;
  if ( *(_QWORD *)(a2 + 24) == a3 )
  {
    v8 = 3;
    if ( a4 > 3 )
      v8 = a4;
  }
  else
  {
    v13 = *(_QWORD *)(a3 + 80);
    if ( *(_BYTE *)(a2 + 32) )
    {
      v12 = (struct _LIST_ENTRY **)(v13 + 264);
    }
    else
    {
      v41 = *(_QWORD *)(v13 + 208);
      if ( (*(_DWORD *)(v41 + 4) & 0x80000) != 0 )
      {
        v42 = *(_DWORD *)(v41 + 12);
        v43 = (int *)(v41 + 12);
        if ( (v42 & 0x7F000000) != 0xD000000 )
        {
          do
          {
            v43 = (int *)((char *)v43 + (v42 & 0xFFFFFF) + 4);
            v42 = *v43;
          }
          while ( (*v43 & 0x7F000000) != 0xD000000 );
        }
        v65 = *(_QWORD **)(v43 + 1);
        if ( v65 )
        {
          v44 = (_QWORD *)*v65;
          if ( (_QWORD *)*v65 != v65 )
          {
            while ( v44[4] != v10 )
            {
              v44 = (_QWORD *)*v44;
              if ( v44 == v65 )
                goto LABEL_4;
            }
            v12 = (struct _LIST_ENTRY **)(v44 - 28);
          }
        }
      }
    }
LABEL_4:
    v12 += 17;
    if ( *(_DWORD *)v12 == 5 && a4 <= 3 )
      v8 = 3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 208) + 4LL) & 0x10000000) != 0 )
    v14 = *(_QWORD **)(*(_QWORD *)CVisual::GetTransformParentDataInternal((CVisual *)a3) + 8LL);
  else
    v14 = 0LL;
  p_Blink = v12;
  if ( v14 )
  {
    v45 = 0LL;
    v47 = 0LL;
    v65 = *(_QWORD **)(a3 + 80);
    v46 = (CVisual *)v65;
    p_Blink = v12;
    v60 = 0LL;
    v61 = 0LL;
    if ( v65 )
    {
      v48 = *(_BYTE *)(v10 + 32);
      while ( 1 )
      {
        v49 = 0LL;
        if ( v48 )
        {
          v49 = (struct _LIST_ENTRY *)(v65 + 33);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(v46);
          if ( TreeDataListHead )
          {
            Flink = TreeDataListHead->Flink;
            if ( TreeDataListHead->Flink != TreeDataListHead )
            {
              while ( Flink[2].Flink != (struct _LIST_ENTRY *)v54 )
              {
                Flink = Flink->Flink;
                if ( Flink == TreeDataListHead )
                  goto LABEL_161;
              }
              v49 = Flink - 14;
            }
          }
LABEL_161:
          v47 = v61;
          v45 = v60;
          v48 = *(_BYTE *)(v54 + 32);
        }
        p_Blink = &v49[8].Blink;
        if ( v65 == v14 )
          break;
        if ( (unsigned int)(*(_DWORD *)p_Blink - 1) > 1 )
        {
          p_Blink = v12;
          if ( v8 <= 3 )
            v8 = 3;
          goto LABEL_132;
        }
        if ( v45 <= (unsigned __int64)p_Blink[1] )
          v45 = (unsigned __int64)p_Blink[1];
        v60 = v45;
        if ( v65[29] )
        {
          if ( v47 <= (CRectanglesShape *)p_Blink[4] )
            v47 = (CRectanglesShape *)p_Blink[4];
          v61 = v47;
        }
        v65 = (_QWORD *)v65[10];
        v46 = (CVisual *)v65;
        if ( !v65 )
        {
          p_Blink = v12;
          break;
        }
      }
    }
    if ( v45 > *(_QWORD *)(a1 + 64) )
      v11 = 1;
LABEL_132:
    if ( (unsigned __int64)v47 > *(_QWORD *)(a1 + 64) )
      *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( v8 > v5 )
    v11 = 1;
  if ( *(_QWORD *)(a1 + 40) )
  {
    v16 = 0;
  }
  else
  {
    v11 = 1;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 400LL);
    v16 = 1;
    v67 = 1;
  }
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v11 = 1;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 400LL);
    v16 = 1;
    v67 = 1;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( !v11 )
      goto LABEL_16;
  }
  else
  {
    v26 = *(_QWORD *)(a3 + 16);
    v11 = 1;
    v67 = 1;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(v26 + 400);
  }
  if ( v8 == 5 )
  {
    v29 = 5;
    goto LABEL_92;
  }
  if ( !CCommonRegistryData::m_fEnableCpuClipping )
  {
    v29 = 5;
    goto LABEL_92;
  }
  if ( v8 == 4 )
  {
    v29 = 4;
    goto LABEL_92;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 208) + 4LL) & 0x8000000) == 0 )
    goto LABEL_60;
  EffectInternal = CVisual::GetEffectInternal((CVisual *)a3);
  if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
          EffectInternal,
          23LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
            EffectInternal,
            7LL) )
      goto LABEL_60;
    EffectInternal = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
  }
  if ( !EffectInternal
    || (Matrix = CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a3 + 128)),
        v58 = CMILMatrix::Is2DAffine<0>(Matrix),
        v58
     && (v59 = (float *)CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a3 + 128)),
         CMILMatrix::IsInvertibleDeterminant((float)(v59[5] * *v59) - (float)(v59[4] * v59[1])))) )
  {
LABEL_60:
    if ( v8 == 2 )
    {
      v28 = 1;
      v64 = 1;
    }
    else
    {
      v27 = *(CGeometry **)(a3 + 232);
      if ( v27 )
      {
        v61 = 0LL;
        v62 = 0;
        ShapeData = CGeometry::GetShapeData(v27, (const struct D2D_SIZE_F *)(a3 + 128), (struct CShapePtr *)&v61);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeData, 0x12Au);
          v28 = 1;
          v64 = 1;
        }
        else
        {
          v51 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v61 + 40LL);
          if ( v51 == CRectanglesShape::IsRectangles )
            IsRectangles = CRectanglesShape::IsRectangles(v61, (unsigned int *)&v65);
          else
            IsRectangles = v51(v61, (unsigned int *)&v65);
          if ( !IsRectangles || (unsigned int)v65 > 1 )
          {
            v28 = 1;
            v64 = 1;
            CShapePtr::Release((CShapePtr *)&v61);
            goto LABEL_63;
          }
          v28 = v64;
        }
        CShapePtr::Release((CShapePtr *)&v61);
      }
      else
      {
        v28 = v64;
      }
    }
LABEL_63:
    if ( !*(_QWORD *)(a3 + 232) || v28 )
    {
      v29 = 4;
      v66 = 4;
    }
    else
    {
      v29 = 3;
    }
    if ( v8 != 3 )
    {
      if ( (v30 = *(float *)(a3 + 108), *(float *)(a3 + 112) == 0.0) && *(float *)(a3 + 116) == 0.0 && v30 == 0.0
        || v30 == 0.0 )
      {
        v31 = *(_QWORD *)(a3 + 224);
        if ( !v31 )
          goto LABEL_89;
        v32 = (float *)(a3 + 128);
        v33 = (*(_BYTE *)(v31 + 32) & 1) != 0;
        if ( a3 != -128 )
        {
          if ( (*(_BYTE *)(v31 + 32) & 1) == 0
            && *(_BYTE *)(v31 + 148)
            && (*(float *)(v31 + 140) != *v32 || *(float *)(v31 + 144) != *(float *)(a3 + 132)) )
          {
            v33 = 1;
          }
          *(_QWORD *)(v31 + 140) = *(_QWORD *)v32;
        }
        if ( v33 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 144LL))(v31, a3 + 128, v31 + 72);
          *(_DWORD *)(v31 + 32) &= ~1u;
        }
        v65 = (_QWORD *)(v31 + 72);
        if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(v31 + 72) )
          goto LABEL_156;
        v36 = (*(_BYTE *)(v31 + 32) & 1) != 0;
        if ( v35 )
        {
          if ( (*(_BYTE *)(v31 + 32) & 1) == 0
            && *(_BYTE *)(v31 + 148)
            && (*(float *)(v31 + 140) != *v35 || *(float *)(v31 + 144) != v35[1]) )
          {
            v36 = 1;
          }
          *(_QWORD *)(v31 + 140) = *(_QWORD *)v35;
        }
        if ( v36 )
        {
          (*(void (__fastcall **)(__int64, float *, float *))(*(_QWORD *)v31 + 144LL))(v31, v35, v34);
          *(_DWORD *)(v31 + 32) &= ~1u;
          v34 = (float *)v65;
        }
        v37 = (float)(v34[5] * *v34) - (float)(v34[4] * v34[1]);
        v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37) & _xmm);
        if ( v38 >= 0.00000011920929 && _finite((float)(1.0 / v37)) )
        {
LABEL_89:
          if ( v8 == 2 )
          {
            v29 = 2;
          }
          else
          {
            v29 = 1;
            if ( v64 )
              v29 = 2;
          }
        }
        else
        {
LABEL_156:
          v29 = v66;
        }
      }
    }
    goto LABEL_92;
  }
  v29 = 4;
LABEL_92:
  if ( *(_DWORD *)a1 == v29 )
  {
    v16 = v67;
  }
  else
  {
    *(_DWORD *)a1 = v29;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 400LL);
    v16 = 1;
    v67 = 1;
  }
LABEL_16:
  *(_BYTE *)(a1 + 76) = a5;
  if ( p_Blink
    && *(_DWORD *)p_Blink != 5
    && (unsigned __int64)p_Blink[4] > *(_QWORD *)(a1 + 32)
    && ((unsigned int)(*(_DWORD *)a1 - 1) <= 1 || *(_DWORD *)a1 == 4 && *(_QWORD *)(a3 + 232)) )
  {
    v67 = 1;
  }
  else if ( !v16 )
  {
    goto LABEL_20;
  }
  if ( *(_DWORD *)a1 != 5 )
  {
    v18 = 0LL;
    if ( p_Blink && *(_DWORD *)p_Blink != 5 )
      v18 = (__int64)p_Blink[2];
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v39 = HeapAlloc(WPF::g_processHeap, 0, 0x44uLL);
      if ( !v39 )
      {
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
        __debugbreak();
      }
      v39[16] = 0;
      *(_QWORD *)(a1 + 16) = v39;
    }
    if ( *(_QWORD *)(a3 + 232) )
    {
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v40 = operator new(0x44uLL);
        if ( v40 )
          v40[16] = 0;
        *(_QWORD *)(a1 + 24) = v40;
        if ( !v40 )
        {
          v6 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x187u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xCCu);
          return v6;
        }
      }
    }
    else
    {
      v19 = *(void **)(a1 + 24);
      if ( v19 )
      {
        WPF::ProcessHeapImpl::Free(v19);
        *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
    CVisual::CalcEffectiveTransform(a3, *(_DWORD *)a1, v18, &a5, *(CMILMatrix **)(a1 + 16), *(_QWORD *)(a1 + 24));
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 400LL);
  }
  v16 = v67;
LABEL_20:
  if ( v11 || v16 )
  {
    v20 = v12 && *((_DWORD *)v12 + 18);
    v21 = *(_DWORD *)a1;
    v22 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 64) = v22;
    *(_DWORD *)(a1 + 72) = 0;
    v23 = v21 - 1;
    if ( v23 )
    {
      if ( v23 != 2 )
        return v6;
    }
    else
    {
      if ( v22 <= (unsigned __int64)v12[8] )
        v22 = (unsigned __int64)v12[8];
      *(_QWORD *)(a1 + 64) = v22;
      if ( v20 )
      {
        *(_DWORD *)(a1 + 72) = *((_DWORD *)v12 + 18);
        v24 = *(_QWORD *)(a1 + 40);
        if ( v22 > v24 )
          v24 = v22;
        *(_QWORD *)(a1 + 64) = v24;
      }
    }
    v25 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) > v25 )
      v25 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v25;
    if ( v20 || *(_QWORD *)(a3 + 232) )
    {
      if ( v25 <= *(_QWORD *)(a1 + 56) )
        v25 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 64) = v25;
      if ( *(_QWORD *)(a3 + 232) )
        ++*(_DWORD *)(a1 + 72);
    }
  }
  return v6;
}

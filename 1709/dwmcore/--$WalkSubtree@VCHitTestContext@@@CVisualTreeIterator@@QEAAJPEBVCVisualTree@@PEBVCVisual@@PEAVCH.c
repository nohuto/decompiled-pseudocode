/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18004E990 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EA40 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18004F7FC (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?HasContent@CVisual@@UEAA_NXZ @ 0x180054230 (-HasContent@CVisual@@UEAA_NXZ.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180054250 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180059330 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x1800904CC (-GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800911EC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18009677C (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18009A770 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800B31C8 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x1800B325C (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<CHitTestContext>(
        __int64 a1,
        struct CVisualTree *a2,
        __int64 a3,
        __int64 a4,
        ...)
{
  struct CVisualTree *v4; // rsi
  __int64 v5; // r12
  int v7; // eax
  int v8; // ebx
  bool *v9; // r11
  CVisual *v10; // rsi
  __int64 v11; // r14
  void *v12; // r12
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  char v20; // r14
  __int64 *v21; // rsi
  bool *v22; // r15
  char IsPreserve3DRoot; // al
  int v24; // eax
  int v25; // eax
  bool *v26; // rcx
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v31; // rcx
  int v32; // r9d
  unsigned int v33; // r9d
  _QWORD *v34; // rcx
  unsigned __int64 v35; // rax
  bool (__fastcall *v36)(CVisual *); // rax
  bool v37; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _DWORD *TopByReference; // rax
  int WorldTransform; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 (__fastcall *v45)(CVisual *, __int64, const struct D2D_POINT_2F *, bool *); // rax
  int v46; // eax
  unsigned __int64 v47; // rax
  unsigned int v48; // r15d
  SIZE_T v49; // r8
  unsigned int v50; // ecx
  unsigned __int64 v51; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v53; // r10
  struct _LIST_ENTRY *i; // rcx
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  const struct Windows::Foundation::Numerics::float4x4 *v57; // rdx
  bool IsFacingUser; // al
  int v59; // eax
  int v60; // r9d
  __int64 v61; // rax
  int v62; // r9d
  unsigned int v63; // [rsp+20h] [rbp-81h]
  __int64 v64; // [rsp+30h] [rbp-71h] BYREF
  struct CTreeData *v65; // [rsp+38h] [rbp-69h] BYREF
  __int128 v66; // [rsp+40h] [rbp-61h]
  __int128 v67; // [rsp+50h] [rbp-51h]
  _BYTE v68[64]; // [rsp+60h] [rbp-41h] BYREF
  int v69; // [rsp+A0h] [rbp-1h]
  bool v70; // [rsp+100h] [rbp+5Fh] BYREF
  struct CVisualTree *v71; // [rsp+108h] [rbp+67h]
  struct D2D_POINT_2F v72; // [rsp+110h] [rbp+6Fh] BYREF
  __int64 v73; // [rsp+118h] [rbp+77h]
  __int64 v74; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va; // [rsp+120h] [rbp+7Fh]
  va_list va1; // [rsp+128h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v74 = va_arg(va1, _QWORD);
  v73 = a4;
  v71 = a2;
  v4 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  v64 = a3;
  v5 = a4;
  *(_DWORD *)(a1 + 72) = 4;
  v7 = CGraphWalker<CVisual>::BeginWalk(a1, &v64);
  v8 = v7;
  if ( v7 < 0 )
  {
    v63 = 193;
    goto LABEL_136;
  }
  v8 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), v4, &v65);
  if ( v8 < 0 )
  {
LABEL_131:
    v63 = 207;
    goto LABEL_132;
  }
  while ( 1 )
  {
    v7 = CHitTestContext::PreSubgraph((CHitTestContext *)v5, v4, &v70);
    v9 = 0LL;
    v8 = v7;
    if ( v7 < 0 )
    {
      v63 = 211;
LABEL_136:
      v62 = v7;
      goto LABEL_137;
    }
    if ( !v70 )
      goto LABEL_29;
    v10 = 0LL;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v11 & 2) != 0 )
      v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v11) = v11 & 1;
    if ( !(_DWORD)v11 )
    {
      v8 = 1;
      goto LABEL_25;
    }
    v8 = 0;
    *(_QWORD *)&v66 = *(_QWORD *)(a1 + 16);
    v12 = 0LL;
    DWORD2(v66) = *(_DWORD *)(a1 + 24);
    v13 = *(unsigned int *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v13 )
      goto LABEL_9;
    v47 = 2 * v13;
    v48 = -1;
    if ( v47 <= 0xFFFFFFFF )
      v48 = v47;
    v8 = v47 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v47 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x4Cu);
      goto LABEL_104;
    }
    if ( v48 <= 0x40 )
      v48 = 64;
    v8 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v48 <= 0x10 )
    {
      v8 = -2147024809;
    }
    else
    {
      v49 = 16LL * v48;
      if ( !v49 )
        v49 = 1LL;
      v12 = HeapAlloc(WPF::g_processHeap, 0, v49);
      if ( !v12 )
        v8 = -2147024882;
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x54u);
    }
    else
    {
      v50 = -1;
      v51 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v51 <= 0xFFFFFFFF )
        v50 = 16 * *(_DWORD *)(a1 + 32);
      v8 = v51 > 0xFFFFFFFF ? 0x80070216 : 0;
      if ( v51 <= 0xFFFFFFFF )
      {
        memcpy_0(v12, *(const void **)(a1 + 48), v50);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        v9 = 0LL;
        *(_QWORD *)(a1 + 48) = v12;
        *(_DWORD *)(a1 + 36) = v48;
        v12 = 0LL;
LABEL_9:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v66;
        v14 = *(_DWORD *)(a1 + 32);
        if ( *(_DWORD *)(a1 + 56) > v14 )
          v14 = *(_DWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 56) = v14;
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x56u);
    }
    v9 = 0LL;
LABEL_12:
    if ( !v12 )
      goto LABEL_13;
    HeapFree(WPF::g_processHeap, 0, v12);
LABEL_104:
    v9 = 0LL;
LABEL_13:
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x87u);
      v5 = v73;
      v9 = 0LL;
    }
    else
    {
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28) == 1 ? 0 : v11 - 1;
      v15 = *(_QWORD *)(a1 + 8);
      v16 = *(_QWORD *)(v15 + 72);
      v17 = (v16 & 2) != 0 ? *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL) : v16 & 1;
      v18 = *(unsigned int *)(a1 + 24);
      if ( v17 <= v18
        || ((*(_QWORD *)(v15 + 72) & 2LL) != 0 ? (v19 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL)) : (v19 = v16 & 1),
            v18 >= v19) )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = v19 == 1
            ? (CVisual *)(v16 & 0xFFFFFFFFFFFFFFFCuLL)
            : *(CVisual **)((v16 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v18 + 16);
      }
      ++*(_DWORD *)(a1 + 4);
      v5 = v73;
      *(_QWORD *)(a1 + 16) = v15;
      *(_QWORD *)(a1 + 8) = v10;
    }
LABEL_25:
    if ( v8 < 0 )
    {
      v63 = 218;
      goto LABEL_132;
    }
    if ( !v10 )
      break;
LABEL_27:
    v8 = CVisual::EnsureTreeData(v10, v71, &v65);
    if ( v8 < 0 )
      goto LABEL_131;
    v4 = v71;
  }
  while ( 1 )
  {
LABEL_29:
    v20 = 1;
    v21 = *(__int64 **)(v5 + 16);
    v8 = (int)v9;
    v22 = v9;
    if ( *((_BYTE *)v71 + 32) == (_BYTE)v9 )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(*(CVisual **)(v5 + 16));
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          if ( i[2].Flink == v53 )
          {
            v22 = (bool *)&i[-14];
            break;
          }
        }
      }
    }
    else
    {
      v22 = (bool *)(v21 + 35);
    }
    if ( *(bool **)(v5 + 104) != v9 )
      goto LABEL_34;
    IsPreserve3DRoot = CVisual::IsPreserve3DRoot((CVisual *)v21, *(const struct CVisual **)(v5 + 24));
    v9 = 0LL;
    if ( IsPreserve3DRoot || (*((_BYTE *)v21 + 92) & 0x20) == 0 )
      goto LABEL_34;
    v36 = *(bool (__fastcall **)(CVisual *))(*v21 + 216);
    v37 = v36 == CVisual::HasContent ? CVisual::HasContent((CVisual *)v21) : v36((CVisual *)v21);
    v9 = 0LL;
    if ( !v37 )
      goto LABEL_34;
    TopByReference = (_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference(
                                 v5 + 112,
                                 v38,
                                 v39,
                                 v40);
    if ( *TopByReference == (_DWORD)v9 + 1 )
    {
      Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v21);
      v9 = 0LL;
      if ( Transform3DEffectNoRef )
      {
        Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)((char *)v21 + 132));
        IsFacingUser = CMILMatrix::IsFacingUser(Matrix, v57);
        v9 = 0LL;
        if ( !IsFacingUser )
          goto LABEL_34;
      }
    }
    v69 = (int)v9;
    WorldTransform = CVisual::GetWorldTransform(
                       (CVisual *)v21,
                       (struct _LIST_ENTRY *)v71,
                       4,
                       (__int64)v68,
                       v9,
                       (CVisual *)v9);
    v8 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0xE7u);
      goto LABEL_121;
    }
    if ( CHitTestContext::GetPointInLocalSpace((CHitTestContext *)v5, (const struct CMILMatrix *)v68, &v72) )
    {
      v44 = *v21;
      LOBYTE(v43) = *(_BYTE *)(v5 + 176);
      LOBYTE(v74) = (_BYTE)v9;
      v45 = *(__int64 (__fastcall **)(CVisual *, __int64, const struct D2D_POINT_2F *, bool *))(v44 + 272);
      if ( (char *)v45 == (char *)CWindowNode::HitTestContent )
      {
        v46 = CWindowNode::HitTestContent((CWindowNode *)v21, v43, &v72, (bool *)va);
      }
      else if ( v45 == CVisual::HitTestContent )
      {
        v46 = CVisual::HitTestContent((CVisual *)v21, v43, &v72, (bool *)va);
      }
      else
      {
        v46 = v45((CVisual *)v21, v43, &v72, (bool *)va);
      }
      v9 = 0LL;
      v8 = v46;
      if ( v46 >= 0 )
      {
        if ( (_BYTE)v74 )
          *(_QWORD *)(v5 + 104) = v21;
        goto LABEL_34;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xEEu);
LABEL_121:
      v9 = 0LL;
      goto LABEL_40;
    }
LABEL_34:
    if ( *((_DWORD *)v21 + 50) != -1 )
    {
      v24 = *(_DWORD *)(v5 + 112);
      if ( v24 )
        *(_DWORD *)(v5 + 112) = v24 - 1;
    }
    if ( v22[224] )
    {
      v59 = *(_DWORD *)(v5 + 144);
      if ( v59 )
        *(_DWORD *)(v5 + 144) = v59 - 1;
    }
    v20 = 1;
    if ( *(bool **)(v5 + 104) != v9 )
      v20 = (char)v9;
LABEL_40:
    if ( v8 < 0 )
      break;
    if ( v20 )
    {
      v31 = *(_QWORD *)(a1 + 16);
      v8 = (int)v9;
      v10 = (CVisual *)v9;
      if ( !v31 )
        goto LABEL_78;
      if ( *(_DWORD *)(a1 + 28) != 1 )
        goto LABEL_51;
      v60 = *(_DWORD *)(a1 + 24);
      if ( v60 == -1 )
        goto LABEL_78;
      v61 = *(_QWORD *)(v31 + 72);
      if ( (v61 & 2) != 0 )
        v61 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v61) = v61 & 1;
      v33 = v60 + 1;
      if ( v33 < (unsigned int)v61 )
      {
LABEL_54:
        v34 = (_QWORD *)(v31 + 72);
        if ( (*v34 & 2) != 0 )
          v35 = *(_QWORD *)(*v34 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v35 = *v34 & 1LL;
        if ( v35 > v33 )
          v10 = (CVisual *)CPtrArrayBase::operator[](v34, v33);
        *(_QWORD *)(a1 + 8) = v10;
        *(_DWORD *)(a1 + 24) = v33;
      }
      else
      {
LABEL_51:
        if ( *(_DWORD *)(a1 + 28) == (_DWORD)v9 )
        {
          v32 = *(_DWORD *)(a1 + 24);
          if ( v32 )
          {
            v33 = v32 - 1;
            goto LABEL_54;
          }
        }
LABEL_78:
        v8 = 1;
      }
      if ( v10 )
        goto LABEL_27;
    }
    if ( *(_DWORD *)(a1 + 4) != (_DWORD)v9 )
    {
      v25 = *(_DWORD *)(a1 + 32);
      v26 = v9;
      v27 = (int)v9;
      if ( v25 )
      {
        v28 = (unsigned int)(v25 - 1);
        *(_DWORD *)(a1 + 32) = v28;
        v67 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v28);
        v27 = DWORD2(v67);
        v26 = (bool *)v67;
      }
      v29 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v26;
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v29;
      *(_DWORD *)(a1 + 24) = v27;
      if ( v29 )
        continue;
    }
    goto LABEL_46;
  }
  v63 = 244;
LABEL_132:
  v62 = v8;
LABEL_137:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, v63);
  LODWORD(v9) = 0;
LABEL_46:
  if ( v8 == 1 || v8 == -2147467260 )
    v8 = (int)v9;
  CGraphWalker<CVisual>::EndWalk(a1, v64);
  return (unsigned int)v8;
}

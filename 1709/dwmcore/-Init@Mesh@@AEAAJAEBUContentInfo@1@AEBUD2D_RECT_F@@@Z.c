/*
 * XREFs of ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180066730
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800647B0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18015435C (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x180069FD0 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800BC5BC (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x18011C7E8 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 */

__int64 __fastcall Mesh::Init(Mesh *this, const struct Mesh::ContentInfo *a2, const struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  int v4; // ebp
  unsigned __int64 v7; // rax
  bool v8; // cl
  int v9; // r14d
  int *v10; // r15
  void *v11; // rcx
  _QWORD *v12; // rsi
  Mesh::MeshGraph **v13; // r12
  Mesh::MeshGraph *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  SIZE_T v17; // r8
  LPVOID v18; // rax
  void *v19; // rbx
  int v20; // eax
  struct Mesh::MeshGraph *v21; // rdx
  Mesh::MeshGraph *v22; // rcx
  void *v23; // r8
  LPVOID v24; // rax
  Mesh::MeshGraph *v25; // rsi
  Mesh::MeshGraph *v26; // rcx
  int v27; // esi
  __int64 v28; // rax
  char v29; // cl
  char v30; // dl
  CoordMap *v31; // rcx
  bool v32; // al
  char v33; // dl
  float *v34; // rax
  float v35; // xmm2_4
  float v36; // xmm1_4
  int v37; // eax
  unsigned int v38; // ebx
  int v39; // ebx
  __int64 i; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r9
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v47; // rax
  unsigned int v48; // edx
  __int64 v49; // rcx
  int v50; // r14d
  int v51; // eax
  int v52; // eax
  Mesh::MeshGraph *v53; // [rsp+30h] [rbp-B8h] BYREF
  int v54; // [rsp+38h] [rbp-B0h] BYREF
  LPVOID v55; // [rsp+40h] [rbp-A8h]
  Mesh::MeshGraph **v56; // [rsp+48h] [rbp-A0h]
  struct Mesh::MeshGraph *v57; // [rsp+50h] [rbp-98h] BYREF
  char v58; // [rsp+58h] [rbp-90h]
  const struct D2D_RECT_F *v59; // [rsp+60h] [rbp-88h]
  _OWORD v60[3]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v61; // [rsp+98h] [rbp-50h]

  v3 = *((unsigned int *)this + 40);
  v4 = *((_DWORD *)a2 + 8);
  v59 = a3;
  if ( (_DWORD)v3 )
    v7 = (unsigned __int64)(v3 - 28) >> 3;
  else
    LODWORD(v7) = 0;
  v8 = (*((_BYTE *)this + 236) & 4) != 0;
  if ( v8 || v4 > (unsigned int)v7 )
  {
    v9 = *((_DWORD *)this + 41);
    v53 = 0LL;
    if ( v8 )
      v9 += 64;
    v10 = (int *)((char *)this + 144);
    v11 = (void *)*((_QWORD *)this + 18);
    if ( v11 )
    {
      WPF::ProcessHeapImpl::Free(v11);
      *(_QWORD *)v10 = 0LL;
    }
    v12 = (_QWORD *)((char *)this + 152);
    if ( this != (Mesh *)-152LL )
    {
      *v12 = 0LL;
      *((_QWORD *)this + 20) = 0LL;
    }
    v13 = (Mesh::MeshGraph **)((char *)this + 176);
    v14 = (Mesh::MeshGraph *)*((_QWORD *)this + 22);
    if ( v14 )
    {
      Mesh::MeshGraph::`scalar deleting destructor'(v14, (unsigned int)a2);
      *v13 = 0LL;
    }
    v15 = *((_QWORD *)this + 24);
    if ( v15 )
    {
      *(_QWORD *)(v15 + 64) = 0LL;
      *(_DWORD *)(v15 + 32) = 0;
      *(_DWORD *)(v15 + 56) = 0;
      *(_QWORD *)(v15 + 88) = 0LL;
      *(_QWORD *)(v15 + 96) = 0LL;
      *(_DWORD *)(v15 + 104) = 0;
      *(_DWORD *)(v15 + 128) = 0;
    }
    v16 = v9 * (8 * v4 + 28);
    v17 = v16;
    if ( !v16 )
      v17 = 1LL;
    v18 = HeapAlloc(WPF::g_processHeap, 0, v17);
    v55 = v18;
    if ( v18 )
    {
      v19 = v18;
      v57 = 0LL;
      v58 = 1;
      v56 = &v53;
      v20 = Mesh::MeshGraph::Create(v9, v9, 2 * v9, 0, &v57);
      v54 = v20;
      if ( v58 )
      {
        v21 = v57;
        v22 = *v56;
        if ( v57 != *v56 )
        {
          if ( v22 )
          {
            Mesh::MeshGraph::`scalar deleting destructor'(v22, (unsigned int)v57);
            v20 = v54;
            v21 = v57;
          }
          *v56 = v21;
        }
      }
      if ( v20 < 0 )
      {
        v27 = v54;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x97u);
      }
      else
      {
        if ( v10 != &v54 )
        {
          v23 = *(void **)v10;
          v19 = 0LL;
          v24 = v55;
          if ( v55 != *(LPVOID *)v10 )
          {
            if ( v23 )
            {
              HeapFree(WPF::g_processHeap, 0, v23);
              v24 = v55;
            }
            *(_QWORD *)v10 = v24;
          }
        }
        if ( this != (Mesh *)-152LL )
        {
          *v12 = *(_QWORD *)v10;
          *((_DWORD *)this + 40) = 8 * v4 + 28;
          *((_DWORD *)this + 41) = v9;
        }
        if ( v13 != &v53 )
        {
          v25 = v53;
          v26 = *v13;
          v53 = 0LL;
          if ( v25 != v26 )
          {
            if ( v26 )
              Mesh::MeshGraph::`scalar deleting destructor'(v26, (unsigned int)v21);
            *v13 = v25;
          }
        }
        v27 = 0;
      }
      if ( v19 )
        HeapFree(WPF::g_processHeap, 0, v19);
    }
    else
    {
      v27 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x95u);
    }
    if ( v53 )
      Mesh::MeshGraph::`scalar deleting destructor'(v53, (unsigned int)v21);
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x3Du);
      return (unsigned int)v27;
    }
    *((_BYTE *)this + 236) &= ~4u;
    a3 = v59;
  }
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 6) = 0;
  v28 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  if ( v28 )
  {
    *(_QWORD *)(v28 + 64) = 0LL;
    *(_DWORD *)(v28 + 32) = 0;
    *(_DWORD *)(v28 + 56) = 0;
    *(_QWORD *)(v28 + 88) = 0LL;
    *(_QWORD *)(v28 + 96) = 0LL;
    *(_DWORD *)(v28 + 104) = 0;
    *(_DWORD *)(v28 + 128) = 0;
  }
  v29 = *((_BYTE *)this + 236) & 4 | 1;
  v30 = *((_BYTE *)this + 237) & 0xFE;
  *((_BYTE *)this + 236) = v29;
  *((_BYTE *)this + 237) = v30;
  *((_BYTE *)this + 236) = v29 | (*((_BYTE *)a2 + 16) << 7);
  v31 = (CoordMap *)*((_QWORD *)a2 + 5);
  v32 = v31 && !CoordMap::IsEmpty(v31);
  v33 = v32 | v30;
  v34 = (float *)*((_QWORD *)this + 22);
  *((_BYTE *)this + 237) = v33;
  v35 = fmaxf(1.0, fmaxf(a3->right - a3->left, a3->bottom - a3->top)) * 0.0000099999997;
  *v34 = v35;
  v34[2] = v35 * v35;
  v34[1] = v35 + v35;
  v36 = a3->bottom + a3->top;
  *((float *)this + 50) = (float)(a3->left + a3->right) * 0.5;
  *((float *)this + 51) = v36 * 0.5;
  v37 = DynArrayImpl<0>::Grow((_DWORD)this, 56, v4, 0, 0LL);
  v38 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x4Fu);
    return v38;
  }
  v39 = 0;
  if ( v4 <= 0 )
    return 0LL;
  for ( i = 0LL; ; i += 56LL )
  {
    v41 = *((_QWORD *)a2 + 3);
    if ( !*(_BYTE *)(i + v41 + 52) )
      break;
    v42 = *((unsigned int *)this + 6);
    v43 = v41 + 56LL * v39;
    v44 = v42 + 1;
    if ( (int)v42 + 1 < (unsigned int)v42 )
    {
      v50 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v44 <= *((_DWORD *)this + 5) )
      {
        v45 = *(_QWORD *)this + 56 * v42;
        *(_OWORD *)v45 = *(_OWORD *)v43;
        *(_OWORD *)(v45 + 16) = *(_OWORD *)(v43 + 16);
        *(_OWORD *)(v45 + 32) = *(_OWORD *)(v43 + 32);
        *(_QWORD *)(v45 + 48) = *(_QWORD *)(v43 + 48);
        *((_DWORD *)this + 6) = v44;
        goto LABEL_53;
      }
      v51 = DynArrayImpl<0>::AddMultipleAndSet(this, 56LL, 1LL, v43);
      v50 = v51;
      if ( v51 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0xC0u);
    }
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x54u);
      return (unsigned int)v50;
    }
LABEL_53:
    if ( ++v39 >= v4 )
      return 0LL;
  }
  memset_0(v60, 0, 0x38uLL);
  v47 = *((unsigned int *)this + 6);
  v48 = v47 + 1;
  if ( (int)v47 + 1 < (unsigned int)v47 )
  {
    v50 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_73;
  }
  if ( v48 <= *((_DWORD *)this + 5) )
  {
    v49 = *(_QWORD *)this + 56 * v47;
    *(_OWORD *)v49 = v60[0];
    *(_OWORD *)(v49 + 16) = v60[1];
    *(_OWORD *)(v49 + 32) = v60[2];
    *(_QWORD *)(v49 + 48) = v61;
    *((_DWORD *)this + 6) = v48;
    goto LABEL_53;
  }
  v52 = DynArrayImpl<0>::AddMultipleAndSet(this, 56LL, 1LL, v60);
  v50 = v52;
  if ( v52 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0xC0u);
LABEL_73:
  if ( v50 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x58u);
  return (unsigned int)v50;
}

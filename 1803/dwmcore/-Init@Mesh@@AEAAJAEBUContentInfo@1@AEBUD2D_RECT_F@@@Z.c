/*
 * XREFs of ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x1800B1750
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800B1C50 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18017DA20 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800B2BA0 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800C2BA0 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall Mesh::Init(Mesh *this, const struct Mesh::ContentInfo *a2, const struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  int v4; // ebp
  int v5; // r15d
  unsigned __int64 v8; // rcx
  bool v9; // al
  int v10; // esi
  char *v11; // r14
  void *v12; // rcx
  Mesh::MeshGraph **v13; // rbp
  Mesh::MeshGraph *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  SIZE_T v17; // r8
  void *v18; // rbx
  unsigned int v19; // edx
  int v20; // r12d
  Mesh::MeshGraph *v21; // rcx
  void *v22; // rcx
  Mesh::MeshGraph *v23; // rcx
  Mesh::MeshGraph *v24; // rax
  __int64 v25; // rax
  float *v26; // rdx
  char v27; // cl
  float v28; // xmm2_4
  float v29; // xmm1_4
  int v30; // eax
  unsigned int v31; // ebx
  int v32; // ebx
  __int64 i; // rsi
  __int64 v34; // rcx
  __int64 v35; // rbp
  unsigned int v36; // edx
  __int64 v37; // r9
  __int64 v38; // rcx
  unsigned int v40; // edx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  Mesh::MeshGraph *v44; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v45[2]; // [rsp+38h] [rbp-B0h]
  struct Mesh::MeshGraph *v46; // [rsp+40h] [rbp-A8h] BYREF
  char v47; // [rsp+48h] [rbp-A0h]
  LPVOID v48; // [rsp+50h] [rbp-98h]
  const struct D2D_RECT_F *v49; // [rsp+58h] [rbp-90h]
  char v50; // [rsp+60h] [rbp-88h] BYREF
  _OWORD v51[3]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v52; // [rsp+98h] [rbp-50h]

  v3 = *((unsigned int *)this + 40);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 6);
  v49 = a3;
  if ( (_DWORD)v3 )
    v8 = (unsigned __int64)(v3 - 28) >> 3;
  else
    LODWORD(v8) = 0;
  v9 = (*((_BYTE *)this + 236) & 4) != 0;
  if ( (*((_BYTE *)this + 236) & 4) != 0 || v5 > (unsigned int)v8 )
  {
    v10 = *((_DWORD *)this + 41);
    v44 = 0LL;
    if ( v9 )
      v10 += 64;
    v11 = (char *)this + 144;
    v12 = (void *)*((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = 0LL;
    if ( v12 )
      operator delete(v12);
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    v13 = (Mesh::MeshGraph **)((char *)this + 176);
    v14 = (Mesh::MeshGraph *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
    if ( v14 )
      Mesh::MeshGraph::`scalar deleting destructor'(v14, 0);
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
    v16 = v10 * (8 * v5 + 28);
    v17 = v16;
    if ( !v16 )
      v17 = 1LL;
    v48 = HeapAlloc(WPF::g_processHeap, 0, v17);
    v18 = v48;
    if ( v48 )
    {
      v46 = 0LL;
      *(_QWORD *)v45 = &v44;
      v47 = 1;
      v20 = Mesh::MeshGraph::Create(v10, v10, 2 * v10, 0, &v46);
      if ( v47 )
      {
        v19 = v45[0];
        v21 = **(Mesh::MeshGraph ***)v45;
        **(_QWORD **)v45 = v46;
        if ( v21 )
          Mesh::MeshGraph::`scalar deleting destructor'(v21, v19);
      }
      if ( v20 >= 0 )
      {
        if ( v11 != &v50 )
        {
          v22 = *(void **)v11;
          v18 = 0LL;
          *(_QWORD *)v11 = v48;
          if ( v22 )
            operator delete(v22);
        }
        *((_QWORD *)this + 19) = *(_QWORD *)v11;
        *((_DWORD *)this + 40) = 8 * v5 + 28;
        *((_DWORD *)this + 41) = v10;
        if ( v13 != &v44 )
        {
          v23 = *v13;
          v24 = v44;
          v44 = 0LL;
          *v13 = v24;
          if ( v23 )
            Mesh::MeshGraph::`scalar deleting destructor'(v23, v19);
        }
        v4 = 0;
        v20 = 0;
        goto LABEL_26;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x96u);
    }
    else
    {
      v20 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x94u);
    }
    v4 = 0;
LABEL_26:
    if ( v18 )
      operator delete(v18);
    if ( v44 )
      Mesh::MeshGraph::`scalar deleting destructor'(v44, v19);
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x3Du);
      return (unsigned int)v20;
    }
    *((_BYTE *)this + 236) &= ~4u;
    a3 = v49;
  }
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 6) = 0;
  v25 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  if ( v25 )
  {
    *(_QWORD *)(v25 + 64) = 0LL;
    *(_DWORD *)(v25 + 32) = 0;
    *(_DWORD *)(v25 + 56) = 0;
    *(_QWORD *)(v25 + 88) = 0LL;
    *(_QWORD *)(v25 + 96) = 0LL;
    *(_DWORD *)(v25 + 104) = 0;
    *(_DWORD *)(v25 + 128) = 0;
    v26 = (float *)*((_QWORD *)this + 22);
  }
  else
  {
    v26 = 0LL;
  }
  v27 = *((_BYTE *)this + 236) & 4 | 1;
  *((_BYTE *)this + 236) = v27;
  *((_BYTE *)this + 236) = v27 | (*((_BYTE *)a2 + 16) << 7);
  v28 = fmaxf(1.0, fmaxf(a3->right - a3->left, a3->bottom - a3->top)) * 0.0000099999997;
  *v26 = v28;
  v26[2] = v28 * v28;
  v26[1] = v28 + v28;
  v29 = (float)(a3->bottom + a3->top) * 0.5;
  *((float *)this + 50) = (float)(a3->right + a3->left) * 0.5;
  *((float *)this + 51) = v29;
  v30 = DynArrayImpl<0>::Grow((__int64)this, 0x38u, v5, 0, 0LL);
  v31 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x4Eu);
    return v31;
  }
  v32 = 0;
  if ( v5 <= 0 )
    return (unsigned int)v4;
  for ( i = 0LL; ; i += 56LL )
  {
    v34 = *((_QWORD *)a2 + 4);
    v35 = *((unsigned int *)this + 6);
    if ( !*(_BYTE *)(i + v34 + 52) )
      break;
    v36 = v35 + 1;
    v37 = v34 + 56LL * v32;
    if ( (int)v35 + 1 < (unsigned int)v35 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v36 <= *((_DWORD *)this + 5) )
      {
        v38 = *(_QWORD *)this + 56 * v35;
        *(_OWORD *)v38 = *(_OWORD *)v37;
        *(_OWORD *)(v38 + 16) = *(_OWORD *)(v37 + 16);
        *(_OWORD *)(v38 + 32) = *(_OWORD *)(v37 + 32);
        *(_QWORD *)(v38 + 48) = *(_QWORD *)(v37 + 48);
        *((_DWORD *)this + 6) = v36;
        goto LABEL_41;
      }
      v42 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x38u, 1, v37);
      v4 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xC0u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x53u);
      return (unsigned int)v4;
    }
LABEL_41:
    if ( ++v32 >= v5 )
      return 0;
  }
  memset_0(v51, 0, 0x38uLL);
  v40 = v35 + 1;
  if ( (int)v35 + 1 < (unsigned int)v35 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_56;
  }
  if ( v40 <= *((_DWORD *)this + 5) )
  {
    v41 = *(_QWORD *)this + 56 * v35;
    *(_OWORD *)v41 = v51[0];
    *(_OWORD *)(v41 + 16) = v51[1];
    *(_OWORD *)(v41 + 32) = v51[2];
    *(_QWORD *)(v41 + 48) = v52;
    *((_DWORD *)this + 6) = v40;
    goto LABEL_41;
  }
  v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x38u, 1, v51);
  v4 = v43;
  if ( v43 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0xC0u);
LABEL_56:
  if ( v4 >= 0 )
    goto LABEL_41;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x57u);
  return (unsigned int)v4;
}

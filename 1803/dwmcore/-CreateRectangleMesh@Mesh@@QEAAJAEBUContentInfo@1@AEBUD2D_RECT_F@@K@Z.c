/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800B1C50
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800B0850 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800B0CF0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x1800B1750 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800B2BA0 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x1800B3274 (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800B32A8 (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800B32DC (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x1800B3304 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BCE4C (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800C2BA0 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall Mesh::CreateRectangleMesh(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  unsigned int v4; // r14d
  const struct Mesh::ContentInfo *v6; // r12
  int i; // ebx
  float v9; // xmm0_4
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // r13d
  __int64 v17; // r11
  int v18; // r10d
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  float v22; // xmm1_4
  float v23; // xmm0_4
  char *v24; // rcx
  unsigned int v25; // ebx
  char *p_Mem; // rax
  char *v27; // r9
  __int64 v28; // r11
  _DWORD *v29; // r14
  __int64 v30; // rsi
  _DWORD *v31; // r12
  int j; // r10d
  __int64 v33; // r9
  int v34; // xmm0_4
  int v35; // eax
  int v36; // xmm1_4
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 *v41; // r14
  int *v42; // rcx
  Mesh::MeshGraph *v43; // rcx
  __int64 v44; // rbx
  int v45; // r8d
  __int64 v46; // rax
  unsigned int v48; // eax
  int v49; // r9d
  unsigned int v50; // [rsp+20h] [rbp-B9h]
  Mesh::MeshGraph **v52; // [rsp+38h] [rbp-A1h]
  struct Mesh::MeshGraph *v53; // [rsp+40h] [rbp-99h] BYREF
  char v54; // [rsp+48h] [rbp-91h]
  const struct Mesh::ContentInfo *v55; // [rsp+50h] [rbp-89h]
  void *v56; // [rsp+58h] [rbp-81h] BYREF
  char *v57; // [rsp+60h] [rbp-79h]
  int v58; // [rsp+68h] [rbp-71h]
  __int64 v59; // [rsp+6Ch] [rbp-6Dh]
  char v60; // [rsp+78h] [rbp-61h] BYREF
  void *v61; // [rsp+80h] [rbp-59h] BYREF
  char *v62; // [rsp+88h] [rbp-51h]
  int v63; // [rsp+90h] [rbp-49h]
  int v64; // [rsp+94h] [rbp-45h]
  int v65; // [rsp+98h] [rbp-41h]
  char v66; // [rsp+A0h] [rbp-39h] BYREF
  char *v67; // [rsp+A8h] [rbp-31h]
  char *v68; // [rsp+B0h] [rbp-29h]
  int v69; // [rsp+B8h] [rbp-21h]
  __int64 v70; // [rsp+BCh] [rbp-1Dh]
  char Mem; // [rsp+C8h] [rbp-11h] BYREF
  void *lpMem; // [rsp+D0h] [rbp-9h]
  char *v73; // [rsp+D8h] [rbp-1h]
  int v74; // [rsp+E0h] [rbp+7h]
  __int64 v75; // [rsp+E4h] [rbp+Bh]
  char v76; // [rsp+F0h] [rbp+17h] BYREF

  v4 = a4;
  v55 = a2;
  v6 = a2;
  for ( i = Mesh::Init(this, a2, a3); i >= 0; i = Mesh::Init(this, v6, a3) )
  {
    v9 = a3->right - a3->left;
    v61 = &v66;
    v63 = 2;
    v62 = &v66;
    v10 = 0LL;
    v64 = 2;
    v56 = &v60;
    v11 = 0;
    v65 = 0;
    v57 = &v60;
    v12 = *((_QWORD *)this + 22);
    v58 = 2;
    v59 = 2LL;
    if ( v9 > *(float *)(v12 + 4) )
    {
      v13 = DynArray<float,0>::AddMultipleAndSet(&v61, a3, 1LL);
      i = v13;
      if ( v13 < 0 )
      {
        v50 = 207;
        goto LABEL_78;
      }
      v13 = DynArray<float,0>::AddMultipleAndSet(&v61, &a3->right, 1LL);
      i = v13;
      if ( v13 < 0 )
      {
        v50 = 208;
LABEL_78:
        v49 = v13;
        goto LABEL_80;
      }
      v10 = (unsigned int)v65;
      v11 = HIDWORD(v59);
    }
    if ( (float)(a3->bottom - a3->top) > *(float *)(*((_QWORD *)this + 22) + 4LL) )
    {
      v13 = DynArray<float,0>::AddMultipleAndSet(&v56, &a3->top, 1LL);
      i = v13;
      if ( v13 < 0 )
      {
        v50 = 216;
        goto LABEL_78;
      }
      v13 = DynArray<float,0>::AddMultipleAndSet(&v56, &a3->bottom, 1LL);
      i = v13;
      if ( v13 < 0 )
      {
        v50 = 217;
        goto LABEL_78;
      }
      v10 = (unsigned int)v65;
      v11 = HIDWORD(v59);
    }
    if ( v11 < 2 || (unsigned int)v10 < 2 )
    {
      i = 1;
LABEL_62:
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v56);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v61);
      goto LABEL_63;
    }
    if ( v11 > 0x19 || (unsigned int)v10 > 0x19 )
    {
      i = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xE9u);
      goto LABEL_62;
    }
    v14 = *((_DWORD *)this + 41);
    v15 = v10 * v11;
    if ( (unsigned int)v10 * v11 > v14 )
    {
      *((_BYTE *)this + 236) |= 4u;
      goto LABEL_66;
    }
    v16 = *((_DWORD *)this + 42);
    if ( v15 + v16 > (int)v14 )
    {
      i = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xFCu);
      goto LABEL_62;
    }
    v17 = 0LL;
    *((_DWORD *)this + 42) = v15 + v16;
    v18 = v16;
    do
    {
      v19 = 0LL;
      if ( (_DWORD)v10 )
      {
        do
        {
          *(_BYTE *)(v18 * *((_DWORD *)this + 40) + *((_QWORD *)this + 19) + 24LL) = 0;
          v20 = *((_DWORD *)this + 40) * v18++;
          v21 = *((_QWORD *)this + 19);
          v22 = *((float *)v61 + v19);
          v19 = (unsigned int)(v19 + 1);
          v23 = *((float *)v56 + v17) - *((float *)this + 51);
          *(float *)(v20 + v21) = v22 - *((float *)this + 50);
          *(float *)(v20 + v21 + 4) = v23;
          *(_OWORD *)(v20 + v21 + 8) = *(_OWORD *)v6;
          v10 = (unsigned int)v65;
        }
        while ( (unsigned int)v19 < v65 );
        v11 = HIDWORD(v59);
      }
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (unsigned int)v17 < v11 );
    v74 = 2;
    v73 = &v76;
    v24 = &v76;
    v25 = 0;
    lpMem = &v76;
    p_Mem = &Mem;
    v75 = 2LL;
    v27 = &Mem;
    v67 = &Mem;
    v68 = &Mem;
    v69 = 2;
    v70 = 2LL;
    if ( *((int *)this + 6) > 0 )
    {
      v28 = 0LL;
      do
      {
        if ( *(_BYTE *)(56LL * v25 + *(_QWORD *)this + 52) )
        {
          v29 = v61;
          v30 = 0LL;
          v31 = v56;
          for ( j = v16; (unsigned int)v30 < v11; v30 = (unsigned int)(v30 + 1) )
          {
            v33 = 0LL;
            if ( (_DWORD)v10 )
            {
              do
              {
                v34 = v29[v33];
                v35 = *((_DWORD *)this + 40) * j++;
                v36 = v31[v30];
                v33 = (unsigned int)(v33 + 1);
                v37 = v35;
                v38 = *((_QWORD *)this + 19);
                v39 = v28 + v37;
                *(_DWORD *)(v39 + v38 + 28) = v34;
                *(_DWORD *)(v39 + v38 + 32) = v36;
                v10 = (unsigned int)v65;
              }
              while ( (unsigned int)v33 < v65 );
              v11 = HIDWORD(v59);
            }
          }
        }
        ++v25;
        v28 += 8LL;
      }
      while ( (signed int)v25 < *((_DWORD *)this + 6) );
      v24 = (char *)lpMem;
      v27 = v68;
      p_Mem = v67;
      v6 = v55;
      v4 = a4;
    }
    *((_BYTE *)this + 236) |= 0x22u;
    *((_DWORD *)this + 53) = v10;
    *((_DWORD *)this + 52) = v11;
    if ( p_Mem != v27 )
    {
      operator delete(p_Mem);
      v24 = (char *)lpMem;
      v67 = 0LL;
    }
    if ( v24 != v73 )
      operator delete(v24);
    if ( v4 )
    {
      *((_BYTE *)this + 236) |= 0x40u;
      *((_DWORD *)this + 55) = Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(v4);
      *((_DWORD *)this + 56) = Mesh::ComputeAntialiasBorderFlags<3,1,2>(v4);
      *((_DWORD *)this + 57) = Mesh::ComputeAntialiasBorderFlags<768,256,512>(v4);
      *((_DWORD *)this + 58) = Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(v4);
    }
    v40 = 0LL;
    if ( *((_DWORD *)this + 52) != 2 || *((_DWORD *)this + 53) != 2 )
      goto LABEL_51;
    v41 = (__int64 *)((char *)this + 192);
    if ( this == (Mesh *)-192LL )
      goto LABEL_50;
    v40 = *v41;
    if ( *v41 )
    {
      if ( *(_DWORD *)(v40 + 128) )
        goto LABEL_50;
    }
    i = Mesh::BuildGrid(this, v10, 2, 2);
    if ( i < 0 )
    {
      v48 = 1196;
    }
    else
    {
      if ( !v40 )
      {
        v42 = (int *)*((_QWORD *)this + 22);
        v52 = (Mesh::MeshGraph **)((char *)this + 192);
        v53 = 0LL;
        v54 = 1;
        i = Mesh::MeshGraph::Create(v42[8], v42[14], v42[22], 3 * (v42[25] + 2 * (v42[23] - v42[26])), &v53);
        if ( v54 )
        {
          v43 = *v52;
          *v52 = v53;
          if ( v43 )
            Mesh::MeshGraph::`scalar deleting destructor'(v43, (unsigned int)v52);
        }
        if ( i < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, i, 0x4B5u);
          v4 = a4;
          goto LABEL_52;
        }
        v40 = *v41;
      }
      v44 = *((_QWORD *)this + 22);
      memcpy_0(*(void **)(v40 + 24), *(const void **)(v44 + 24), (__int64)*(int *)(v44 + 32) << 6);
      memcpy_0(*(void **)(v40 + 48), *(const void **)(v44 + 48), 88LL * *(int *)(v44 + 56));
      *(_QWORD *)(v40 + 64) = *(_QWORD *)(v44 + 64);
      memcpy_0(*(void **)(v40 + 80), *(const void **)(v44 + 80), 88LL * *(int *)(v44 + 88));
      v45 = *(_DWORD *)(v40 + 112);
      *(_DWORD *)(v40 + 32) = *(_DWORD *)(v44 + 32);
      *(_DWORD *)(v40 + 56) = *(_DWORD *)(v44 + 56);
      *(_DWORD *)(v40 + 88) = *(_DWORD *)(v44 + 88);
      *(_DWORD *)(v40 + 92) = *(_DWORD *)(v44 + 92);
      *(_DWORD *)(v40 + 96) = *(_DWORD *)(v44 + 96);
      *(_DWORD *)(v40 + 100) = *(_DWORD *)(v44 + 100);
      *(_DWORD *)(v40 + 104) = *(_DWORD *)(v44 + 104);
      i = Mesh::GenerateTriangles(this, *(unsigned __int16 **)(v40 + 120), v45, (int *)(v40 + 128));
      if ( i >= 0 )
      {
        v46 = *((_QWORD *)this + 22);
        *(_QWORD *)(v46 + 64) = 0LL;
        *(_DWORD *)(v46 + 32) = 0;
        *(_DWORD *)(v46 + 56) = 0;
        *(_QWORD *)(v46 + 88) = 0LL;
        *(_QWORD *)(v46 + 96) = 0LL;
        *(_DWORD *)(v46 + 104) = 0;
        *(_DWORD *)(v46 + 128) = 0;
LABEL_50:
        v4 = a4;
LABEL_51:
        *((_QWORD *)this + 23) = v40;
        i = 0;
        goto LABEL_52;
      }
      v48 = 1213;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, i, v48);
    v4 = a4;
    if ( v40 )
    {
      *(_QWORD *)(v40 + 64) = 0LL;
      *(_DWORD *)(v40 + 32) = 0;
      *(_DWORD *)(v40 + 56) = 0;
      *(_QWORD *)(v40 + 88) = 0LL;
      *(_QWORD *)(v40 + 96) = 0LL;
      *(_DWORD *)(v40 + 104) = 0;
      *(_DWORD *)(v40 + 128) = 0;
    }
LABEL_52:
    if ( (*((_BYTE *)this + 236) & 4) == 0 )
    {
      if ( i >= 0 )
      {
        if ( v56 != v57 )
        {
          operator delete(v56);
          v56 = 0LL;
        }
        if ( v61 != v62 )
          operator delete(v61);
        return 0LL;
      }
      v50 = 350;
      v49 = i;
LABEL_80:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, v50);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v56);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v61);
      goto LABEL_68;
    }
LABEL_66:
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v56);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v61);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, i, 0xBEu);
LABEL_68:
  if ( i )
LABEL_63:
    *((_BYTE *)this + 236) &= ~1u;
  return (unsigned int)i;
}

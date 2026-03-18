/*
 * XREFs of ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x18003C950
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18015E1C8 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?PreallocateGraphObjects@Mesh@@AEAAJI_N@Z @ 0x18003C7A0 (-PreallocateGraphObjects@Mesh@@AEAAJI_N@Z.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180057730 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall Mesh::Init(Mesh *this, const struct Mesh::ContentInfo *a2, const struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  int v4; // r15d
  unsigned __int64 v8; // rax
  char v9; // r8
  int v10; // eax
  int v11; // edi
  __int64 v12; // rax
  char v13; // cl
  char v14; // dl
  char v15; // cl
  CoordMap *v16; // rcx
  char v17; // al
  char v18; // dl
  float *v19; // rax
  float v20; // xmm2_4
  __m128 right_low; // xmm0
  __m128 bottom_low; // xmm1
  int v23; // r12d
  __int64 v24; // rax
  unsigned int v25; // r14d
  unsigned int v26; // ebp
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rcx
  bool v36; // zf
  int v37; // eax
  int v38; // eax
  int v39; // r9d
  unsigned int v40; // [rsp+20h] [rbp-98h]
  __int64 v41; // [rsp+30h] [rbp-88h]
  _OWORD v42[3]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v43; // [rsp+68h] [rbp-50h]

  v3 = *((unsigned int *)this + 40);
  v4 = *((_DWORD *)a2 + 8);
  if ( (_DWORD)v3 )
    v8 = (unsigned __int64)(v3 - 28) >> 3;
  else
    LODWORD(v8) = 0;
  v9 = *((_BYTE *)this + 236);
  if ( (v9 & 4) != 0 || v4 > (unsigned int)v8 )
  {
    v10 = Mesh::PreallocateGraphObjects(this, v4, (v9 & 4) != 0);
    v11 = v10;
    if ( v10 < 0 )
    {
      v40 = 61;
      goto LABEL_47;
    }
    *((_BYTE *)this + 236) &= ~4u;
  }
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 6) = 0;
  v12 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  if ( v12 )
  {
    *(_QWORD *)(v12 + 64) = 0LL;
    *(_DWORD *)(v12 + 32) = 0;
    *(_DWORD *)(v12 + 56) = 0;
    *(_QWORD *)(v12 + 88) = 0LL;
    *(_QWORD *)(v12 + 96) = 0LL;
    *(_DWORD *)(v12 + 104) = 0;
    *(_DWORD *)(v12 + 128) = 0;
  }
  v13 = *((_BYTE *)this + 236);
  *((_BYTE *)this + 237) &= ~1u;
  v14 = *((_BYTE *)this + 237);
  v15 = v13 & 4 | 1;
  *((_BYTE *)this + 236) = v15;
  *((_BYTE *)this + 236) = v15 & 0x7F | (*((_BYTE *)a2 + 16) << 7);
  v16 = (CoordMap *)*((_QWORD *)a2 + 5);
  if ( !v16 || (v36 = !CoordMap::IsEmpty(v16), v17 = 1, !v36) )
    v17 = 0;
  v18 = v17 | v14 & 0xFE;
  v19 = (float *)*((_QWORD *)this + 22);
  *((_BYTE *)this + 237) = v18;
  v20 = fmaxf(1.0, fmaxf(a3->right - a3->left, a3->bottom - a3->top)) * 0.0000099999997;
  *v19 = v20;
  v19[2] = v20 * v20;
  v19[1] = v20 + v20;
  right_low = (__m128)LODWORD(a3->right);
  bottom_low = (__m128)LODWORD(a3->bottom);
  right_low.m128_f32[0] = (float)(right_low.m128_f32[0] + a3->left) * 0.5;
  bottom_low.m128_f32[0] = (float)(bottom_low.m128_f32[0] + a3->top) * 0.5;
  *((_QWORD *)this + 25) = _mm_unpacklo_ps(right_low, bottom_low).m128_u64[0];
  v10 = DynArrayImpl<0>::Grow((_DWORD)this, 56, v4, 0, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    v40 = 79;
LABEL_47:
    v39 = v10;
    goto LABEL_48;
  }
  v23 = 0;
  if ( v4 <= 0 )
    return 0;
  v24 = 0LL;
  v41 = 0LL;
  v25 = 0;
  v26 = 0;
  while ( 1 )
  {
    v27 = *((_QWORD *)a2 + 3);
    if ( *(_BYTE *)(v24 + v27 + 52) )
      break;
    memset_0(v42, 0, 0x38uLL);
    v33 = *((unsigned int *)this + 6);
    v34 = v33 + 1;
    if ( (int)v33 + 1 >= (unsigned int)v33 )
      v26 = v33 + 1;
    v11 = v34 < (unsigned int)v33 ? 0x80070216 : 0;
    if ( v34 < (unsigned int)v33 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB5u);
    }
    else if ( v26 > *((_DWORD *)this + 5) )
    {
      v38 = DynArrayImpl<0>::AddMultipleAndSet(this, 56LL, 1LL, v42);
      v11 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xC0u);
    }
    else
    {
      v35 = *(_QWORD *)this + 56 * v33;
      *(_OWORD *)v35 = v42[0];
      *(_OWORD *)(v35 + 16) = v42[1];
      *(_OWORD *)(v35 + 32) = v42[2];
      *(_QWORD *)(v35 + 48) = v43;
      *((_DWORD *)this + 6) = v26;
    }
    if ( v11 < 0 )
    {
      v40 = 88;
      goto LABEL_44;
    }
LABEL_20:
    ++v23;
    v24 = v41 + 56;
    v41 += 56LL;
    if ( v23 >= v4 )
      return 0;
  }
  v28 = v27 + 56LL * v23;
  v29 = *((unsigned int *)this + 6);
  v30 = v29 + 1;
  if ( (int)v29 + 1 >= (unsigned int)v29 )
    v25 = v29 + 1;
  v11 = v30 < (unsigned int)v29 ? 0x80070216 : 0;
  if ( v30 < (unsigned int)v29 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB5u);
  }
  else if ( v25 > *((_DWORD *)this + 5) )
  {
    v37 = DynArrayImpl<0>::AddMultipleAndSet(this, 56LL, 1LL, v28);
    v11 = v37;
    if ( v37 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xC0u);
  }
  else
  {
    v31 = *(_QWORD *)this + 56 * v29;
    *(_OWORD *)v31 = *(_OWORD *)v28;
    *(_OWORD *)(v31 + 16) = *(_OWORD *)(v28 + 16);
    *(_OWORD *)(v31 + 32) = *(_OWORD *)(v28 + 32);
    *(_QWORD *)(v31 + 48) = *(_QWORD *)(v28 + 48);
    *((_DWORD *)this + 6) = v25;
  }
  if ( v11 >= 0 )
    goto LABEL_20;
  v40 = 84;
LABEL_44:
  v39 = v11;
LABEL_48:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, v40);
  return (unsigned int)v11;
}

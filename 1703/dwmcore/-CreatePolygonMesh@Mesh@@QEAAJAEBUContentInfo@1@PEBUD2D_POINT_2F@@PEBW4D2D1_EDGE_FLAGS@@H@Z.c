/*
 * XREFs of ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18015E1C8
 * Callers:
 *     ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18015BB70 (-EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x18003C950 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x18015D704 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall Mesh::CreatePolygonMesh(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_POINT_2F *a3,
        const enum D2D1_EDGE_FLAGS *a4,
        unsigned int a5)
{
  float x; // xmm8_4
  float y; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  __int64 v13; // rcx
  FLOAT *p_y; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  int v17; // eax
  unsigned int v18; // edi
  float v19; // xmm1_4
  int v20; // eax
  int i; // edx
  unsigned int v22; // r9d
  __int64 v23; // r8
  _QWORD *v24; // r10
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  struct D2D_RECT_F v28; // [rsp+30h] [rbp-68h] BYREF

  do
  {
    x = a3->x;
    y = a3->y;
    v11 = x;
    v12 = y;
    v28.right = a3->x;
    v28.bottom = y;
    v28.left = x;
    v28.top = y;
    if ( (int)a5 > 0 )
    {
      v13 = a5;
      p_y = &a3->y;
      do
      {
        v15 = *(p_y - 1);
        if ( v15 <= x )
        {
          v28.left = *(p_y - 1);
          x = v15;
        }
        v16 = *p_y;
        if ( *p_y <= y )
        {
          v28.top = *p_y;
          y = v16;
        }
        if ( v11 <= v15 )
        {
          v28.right = v15;
          v11 = v15;
        }
        if ( v12 <= v16 )
        {
          v28.bottom = v16;
          v12 = v16;
        }
        p_y += 2;
        --v13;
      }
      while ( v13 );
    }
    v17 = Mesh::Init(this, a2, &v28);
    v18 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1DDu);
LABEL_29:
      if ( !v18 )
        return v18;
      goto LABEL_30;
    }
    v19 = *(float *)(*((_QWORD *)this + 22) + 4LL);
    if ( v19 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - x)) & _xmm)
      || v19 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - y)) & _xmm) )
    {
      v18 = 1;
LABEL_30:
      *((_BYTE *)this + 236) &= ~1u;
      return v18;
    }
    v20 = Mesh::BuildPolygon((Mesh::MeshGraph **)this, a3, a4, a5, (const struct _D3DCOLORVALUE *)a2);
    v18 = v20;
  }
  while ( (*((_BYTE *)this + 236) & 4) != 0 );
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1EDu);
    goto LABEL_29;
  }
  if ( v20 == 1 )
    goto LABEL_29;
  for ( i = 0; i < *((_DWORD *)this + 42); ++i )
  {
    v22 = 0;
    v23 = *((_QWORD *)this + 19) + i * *((_DWORD *)this + 40);
    if ( *((int *)this + 6) > 0 )
    {
      v24 = (_QWORD *)(v23 + 28);
      do
      {
        if ( *(_BYTE *)(56LL * v22 + *(_QWORD *)this + 52) )
        {
          v25 = (__m128)*((unsigned int *)this + 50);
          v26 = (__m128)*(unsigned int *)(v23 + 4);
          v25.m128_f32[0] = v25.m128_f32[0] + *(float *)v23;
          v26.m128_f32[0] = v26.m128_f32[0] + *((float *)this + 51);
          *v24 = _mm_unpacklo_ps(v25, v26).m128_u64[0];
        }
        ++v22;
        ++v24;
      }
      while ( (signed int)v22 < *((_DWORD *)this + 6) );
    }
  }
  *((_BYTE *)this + 236) &= 0xDDu;
  return 0;
}

/*
 * XREFs of ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18015435C
 * Callers:
 *     ?EndFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180151AA0 (-EndFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180066730 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801538A0 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall Mesh::CreatePolygonMesh(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        struct D2D_POINT_2F *a3,
        const enum D2D1_EDGE_FLAGS *a4,
        unsigned int a5)
{
  float x; // xmm8_4
  float y; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  __int64 v13; // rcx
  const struct D2D_POINT_2F *v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  signed int v17; // eax
  unsigned int v18; // edi
  float v19; // xmm1_4
  signed int v20; // eax
  int i; // edx
  unsigned int v22; // r9d
  float *v23; // r8
  float *v24; // r10
  float v25; // xmm0_4
  struct D2D_RECT_F v27; // [rsp+30h] [rbp-58h] BYREF

  do
  {
    x = a3->x;
    y = a3->y;
    v11 = x;
    v12 = y;
    v27.right = a3->x;
    v27.bottom = y;
    v27.left = x;
    v27.top = y;
    if ( (int)a5 > 0 )
    {
      v13 = a5;
      v14 = a3;
      do
      {
        v15 = v14->x;
        if ( v14->x <= x )
        {
          v27.left = v14->x;
          x = v15;
        }
        v16 = v14->y;
        if ( v16 <= y )
        {
          v27.top = v14->y;
          y = v16;
        }
        if ( v11 <= v15 )
        {
          v27.right = v15;
          v11 = v15;
        }
        if ( v12 <= v16 )
        {
          v27.bottom = v16;
          v12 = v16;
        }
        ++v14;
        --v13;
      }
      while ( v13 );
    }
    v17 = Mesh::Init(this, a2, &v27);
    v18 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x1DDu);
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x1EDu);
    goto LABEL_29;
  }
  if ( v20 == 1 )
    goto LABEL_29;
  for ( i = 0; i < *((_DWORD *)this + 42); ++i )
  {
    v22 = 0;
    v23 = (float *)(*((_QWORD *)this + 19) + *((_DWORD *)this + 40) * i);
    if ( *((int *)this + 6) > 0 )
    {
      v24 = v23 + 7;
      do
      {
        if ( *(_BYTE *)(56LL * v22 + *(_QWORD *)this + 52) )
        {
          v25 = v23[1] + *((float *)this + 51);
          *v24 = *((float *)this + 50) + *v23;
          v24[1] = v25;
        }
        ++v22;
        v24 += 2;
      }
      while ( (signed int)v22 < *((_DWORD *)this + 6) );
    }
  }
  *((_BYTE *)this + 236) &= 0xDDu;
  return 0;
}

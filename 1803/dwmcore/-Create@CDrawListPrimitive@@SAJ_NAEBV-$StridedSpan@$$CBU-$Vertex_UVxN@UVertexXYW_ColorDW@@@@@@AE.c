/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x18017E534
 * Callers:
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180185A70 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18008ACAC (PrimitiveStorage--Alloc_16_.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800AF3E0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(
        char a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        unsigned int a6,
        __int64 a7,
        char a8,
        PrimitiveStorage::CInlineStorageBase **a9)
{
  unsigned int v13; // eax
  unsigned int v14; // edi
  PrimitiveStorage::CInlineStorageBase *v15; // rbx
  _DWORD v17[2]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+60h] [rbp-48h]

  v13 = *(_DWORD *)(a2 + 12);
  v17[0] = v13;
  v17[1] = a4;
  v18 = a6;
  if ( (v13 & 1) != 0 )
  {
    v13 = (v13 & 0xFFFFFFFE) + 2;
    v17[0] = v13;
  }
  v14 = 0;
  if ( v13 > 0x10000 || a6 > 0x1FFFE )
  {
    v17[0] = 0;
    v18 = 0;
  }
  v15 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v17);
  if ( v15 )
  {
    CDrawListPrimitive::Initialize((__int64)v15, a1, a2, a3, a4, Src, a6, a7, a8);
    *a9 = v15;
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Fu);
  }
  return v14;
}

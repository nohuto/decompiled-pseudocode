/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x1801552B4
 * Callers:
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18015CA6C (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800635A0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x180069C50 (PrimitiveStorage--Alloc_16_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(
        char a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        void *Src,
        unsigned int a6,
        __int64 a7,
        char a8,
        PrimitiveStorage::CInlineStorageBase **a9)
{
  unsigned int v11; // edx
  unsigned int v14; // ebx
  PrimitiveStorage::CInlineStorageBase *v15; // rdi
  _DWORD v17[2]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+60h] [rbp-48h]

  v11 = *(_DWORD *)(a2 + 12);
  v17[0] = v11;
  v17[1] = a4;
  v18 = a6;
  if ( (v11 & 1) != 0 )
  {
    v11 += 2 - (v11 & 1);
    v17[0] = v11;
  }
  v14 = 0;
  if ( v11 > 0x10000 || a6 > 0x1FFFE )
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x4Fu);
  }
  return v14;
}

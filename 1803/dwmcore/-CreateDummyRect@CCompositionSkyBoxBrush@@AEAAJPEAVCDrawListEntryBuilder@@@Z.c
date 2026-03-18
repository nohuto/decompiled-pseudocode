/*
 * XREFs of ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x18018591C
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF270 (-Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::CreateDummyRect(
        CCompositionSkyBoxBrush *this,
        struct CDrawListEntryBuilder *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+68h] [rbp-A0h]
  _BYTE v8[32]; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_RECT_F v9; // [rsp+98h] [rbp-70h]
  _BYTE v10[112]; // [rsp+A8h] [rbp-60h] BYREF

  if ( dword_1802DA500 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802DA500);
    if ( dword_1802DA500 == -1 )
    {
      xmmword_1802DA508 = _xmm;
      qword_1802DA518 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      Init_thread_footer(&dword_1802DA500);
    }
  }
  memset_0(v8, 0, sizeof(v8));
  memset_0(v10, 0, 0x68uLL);
  *(_QWORD *)&v6 = 2LL;
  *((_QWORD *)&v6 + 1) = v10;
  v9 = (struct D2D_RECT_F)v6;
  v7 = 0x300000000LL;
  v6 = xmmword_1802AD6D8;
  v3 = CDrawListEntryBuilder::Insert(
         a2,
         0LL,
         (const struct D2D_RECT_F *)&v6,
         (__int64)v8,
         (struct D2D_MATRIX_3X2_F *)&xmmword_1802DA508);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x144u);
  else
    return 0;
  return v4;
}

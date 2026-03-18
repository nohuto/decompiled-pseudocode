/*
 * XREFs of ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x18015C918
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18015C540 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180063054 (-Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800C2F28 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800C2F88 (_Init_thread_header.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::CreateDummyRect(
        CCompositionSkyBoxBrush *this,
        struct CDrawListEntryBuilder *a2)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+68h] [rbp-A0h]
  _BYTE v8[32]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v9; // [rsp+98h] [rbp-70h]
  _BYTE v10[112]; // [rsp+A8h] [rbp-60h] BYREF

  if ( dword_180272FC8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180272FC8);
    if ( dword_180272FC8 == -1 )
    {
      xmmword_180272FD0 = _xmm;
      qword_180272FE0 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      Init_thread_footer(&dword_180272FC8);
    }
  }
  memset_0(v8, 0, sizeof(v8));
  memset_0(v10, 0, 0x68uLL);
  *((_QWORD *)&v6 + 1) = 2LL;
  *(_QWORD *)&v6 = v10;
  v9 = v6;
  v7 = 0x300000000LL;
  v6 = xmmword_18021A640;
  v3 = CDrawListEntryBuilder::Insert(
         a2,
         0,
         (const struct PrimitiveGeometryDesc *)&v6,
         (const struct PrimitiveVertexAttributesDesc *)v8,
         (struct D2D_MATRIX_3X2_F *)&xmmword_180272FD0);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x186u);
  else
    return 0;
  return v4;
}

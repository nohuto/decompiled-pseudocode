/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x180036D08
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A670 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  char v2; // dl
  const struct CMILMatrix *TopByReference; // rax
  __int64 v5; // rdx
  float *v6; // rcx
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4

  if ( !*((_BYTE *)this + 6836)
    || !*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 152LL))(*((_QWORD *)this + 48)) + 632)
    || CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP )
  {
    return 0;
  }
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  LOBYTE(v5) = 1;
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(TopByReference, v5)
    || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6[1]) & _xmm), v7 >= 0.000081380211)
    || (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6[4]) & _xmm), v8 >= 0.000081380211) )
  {
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v6) & _xmm);
    if ( v9 >= 0.000081380211 )
      return 0;
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6[5]) & _xmm);
    if ( v10 >= 0.000081380211 )
      return 0;
  }
  if ( !*((_DWORD *)this + 192) && *((_DWORD *)this + 174) || *((_QWORD *)this + 417) )
    return 0;
  return v2;
}

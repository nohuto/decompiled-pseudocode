/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800A1E9C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  char v1; // bl
  const struct CMILMatrix *TopByReference; // rax

  v1 = 0;
  if ( *((_BYTE *)this + 6779) )
  {
    if ( *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 49) + 176LL))(*((_QWORD *)this + 49)) + 624) )
    {
      if ( !CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP )
      {
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
        if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference) )
        {
          if ( (!*((_BYTE *)this + 728) || !*((_DWORD *)this + 172)) && !*((_QWORD *)this + 405) )
            return 1;
        }
      }
    }
  }
  return v1;
}

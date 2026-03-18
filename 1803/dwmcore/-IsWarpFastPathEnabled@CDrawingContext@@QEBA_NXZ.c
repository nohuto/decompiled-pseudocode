/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800673E8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  char v1; // bl
  const struct CMILMatrix *TopByReference; // rax

  v1 = 0;
  if ( *((_BYTE *)this + 6833) )
  {
    if ( *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48)) + 632) )
    {
      if ( !CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP )
      {
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
        if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference) )
        {
          if ( (*((_DWORD *)this + 192) || !*((_DWORD *)this + 174)) && !*((_QWORD *)this + 417) )
            return 1;
        }
      }
    }
  }
  return v1;
}

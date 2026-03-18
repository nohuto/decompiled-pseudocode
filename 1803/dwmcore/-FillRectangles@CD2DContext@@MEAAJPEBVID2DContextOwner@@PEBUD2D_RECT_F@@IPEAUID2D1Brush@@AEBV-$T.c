/*
 * XREFs of ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E34D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180095C2C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ffff @ 0x18019F56C (McTemplateU0ffff.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801E3ED8 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 */

__int64 __fastcall CD2DContext::FillRectangles(
        CD2DContext *this,
        struct ID2DContextOwner *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int *a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rdi
  __int64 v12; // rbx

  v8 = a4;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a8, &a7, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0ffff(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT,
      (float)*a6,
      (float)a6[1],
      COERCE_UNSIGNED_INT((float)a6[2]),
      COERCE_UNSIGNED_INT((float)a6[3]));
  if ( (_DWORD)v8 )
  {
    v12 = v8;
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 22) + 136LL))(
        *((_QWORD *)this + 22),
        a3,
        a5);
      a3 += 16LL;
      --v12;
    }
    while ( v12 );
  }
  return 0LL;
}

/*
 * XREFs of ?DrawGenericInk@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@PEAUIDCompositionDirectInkPartner@@@Z @ 0x180198830
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC504 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DrawGenericInk(
        CD2DContext *this,
        struct ID2DContextOwner *a2,
        enum D2D1_ANTIALIAS_MODE a3,
        unsigned int a4,
        struct IDCompositionDirectInkPartner *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  struct D2D_MATRIX_3X2_F v11; // [rsp+30h] [rbp-28h] BYREF
  enum D2D1_ANTIALIAS_MODE v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a4, &v12, &v11);
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkPartner *))(*(_QWORD *)a5 + 72LL))(a5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2B6u);
  return v9;
}

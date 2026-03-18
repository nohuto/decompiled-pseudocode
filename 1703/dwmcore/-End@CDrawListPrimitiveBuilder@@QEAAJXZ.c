/*
 * XREFs of ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x1800410F8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     _lambda_7560e5feaa77ff4b83884f599d9b83ea_::operator() @ 0x18015C8A8 (_lambda_7560e5feaa77ff4b83884f599d9b83ea_--operator().c)
 * Callees:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18003FC4C (-ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOL.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::End(CMILRefCountBase **this)
{
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v3; // ebx
  CMILRefCountBase *v4; // rcx
  void (*v5)(void); // rax

  BuiltHWPrimitiveEntry = CDrawListPrimitiveBuilder::ExtractBuiltHWPrimitiveEntry(
                            (CDrawListPrimitiveBuilder *)this,
                            0,
                            0LL,
                            0LL);
  v3 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x2C9u);
  v4 = this[4];
  if ( v4 )
  {
    this[4] = 0LL;
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v5();
  }
  return v3;
}

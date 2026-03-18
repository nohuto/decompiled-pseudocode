/*
 * XREFs of ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x18015D6B4
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBrushDrawListGenerator::IsColorConversionRequired(CBrushDrawListGenerator *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  char v4; // bl

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 368LL) + 120LL))(*(_QWORD *)(*(_QWORD *)this + 368LL));
  v3 = *((_QWORD *)this + 9);
  v4 = 0;
  if ( v3 )
    return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 16LL))(v3, *(unsigned int *)(v2 + 196)) != 0;
  return v4;
}

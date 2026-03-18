/*
 * XREFs of ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x18017C630
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CBrushDrawListGenerator::IsColorConversionRequired(CBrushDrawListGenerator *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(*(_QWORD *)this + 360LL) + 24LL))(
         *(_QWORD *)(*(_QWORD *)this + 360LL),
         v6);
  v3 = *((_QWORD *)this + 5);
  v4 = *(_DWORD *)(v2 + 8);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 16LL))(v3, v4);
  else
    return v4 == 1;
}

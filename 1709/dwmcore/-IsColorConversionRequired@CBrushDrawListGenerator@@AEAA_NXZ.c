/*
 * XREFs of ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x180153510
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  v3 = *((_QWORD *)this + 9);
  v4 = *(_DWORD *)(v2 + 8);
  if ( v3 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 16LL))(v3, v4);
  else
    return v4 == 1;
}

/*
 * XREFs of sub_1800D7D58 @ 0x1800D7D58
 * Callers:
 *     sub_18001DE44 @ 0x18001DE44 (sub_18001DE44.c)
 * Callees:
 *     RtlImageRvaToSection @ 0x18002FC40 (RtlImageRvaToSection.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_18007A01C @ 0x18007A01C (sub_18007A01C.c)
 */

unsigned __int64 sub_1800D7D58()
{
  PVOID v0; // rdx
  PIMAGE_SECTION_HEADER v1; // rax
  unsigned __int64 result; // rax
  __int64 v3; // r11
  __int64 v4; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, (PVOID)0x180000000LL, 0LL, &OutHeaders);
  v1 = RtlImageRvaToSection(OutHeaders, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  result = sub_18007A01C(0x180000000LL + v1->VirtualAddress, v1->Misc.PhysicalAddress);
  qword_18016B268 = v3;
  qword_18016B278 = v4;
  return result;
}

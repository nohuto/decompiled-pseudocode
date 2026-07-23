/*
 * XREFs of sub_1800D0CF4 @ 0x1800D0CF4
 * Callers:
 *     sub_180028724 @ 0x180028724 (sub_180028724.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToSection @ 0x180010F00 (RtlImageRvaToSection.c)
 *     sub_180075BEC @ 0x180075BEC (sub_180075BEC.c)
 */

unsigned __int64 sub_1800D0CF4()
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
  result = sub_180075BEC(0x180000000LL + v1->VirtualAddress, v1->Misc.PhysicalAddress);
  qword_18016F278 = v3;
  qword_18016F288 = v4;
  return result;
}

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
  __int64 v0; // rdx
  __int64 v1; // rax
  unsigned __int64 result; // rax
  __int64 v3; // r11
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, 0x180000000uLL, 0LL, &v5);
  v1 = RtlImageRvaToSection(v5, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  result = sub_18007A01C(0x180000000LL + *(unsigned int *)(v1 + 12), *(unsigned int *)(v1 + 8));
  qword_18016B268 = v3;
  qword_18016B278 = v4;
  return result;
}

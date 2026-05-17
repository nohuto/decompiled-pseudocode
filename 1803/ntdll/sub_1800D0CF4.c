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
  result = sub_180075BEC(0x180000000LL + *(unsigned int *)(v1 + 12), *(unsigned int *)(v1 + 8));
  qword_18016F278 = v3;
  qword_18016F288 = v4;
  return result;
}

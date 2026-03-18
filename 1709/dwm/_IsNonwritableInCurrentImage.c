/*
 * XREFs of _IsNonwritableInCurrentImage @ 0x1400040D0
 * Callers:
 *     sub_1400036CC @ 0x1400036CC (sub_1400036CC.c)
 * Callees:
 *     _FindPESection @ 0x140004080 (_FindPESection.c)
 *     _ValidateImageBase @ 0x140004120 (_ValidateImageBase.c)
 */

__int64 __fastcall IsNonwritableInCurrentImage(__int64 a1)
{
  __int64 result; // rax

  result = ValidateImageBase(&_ImageBase);
  if ( (_DWORD)result )
  {
    result = FindPESection((__int64)&_ImageBase, a1 - (_QWORD)&_ImageBase);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}

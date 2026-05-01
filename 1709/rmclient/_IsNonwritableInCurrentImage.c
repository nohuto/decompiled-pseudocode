/*
 * XREFs of _IsNonwritableInCurrentImage @ 0x180007BE0
 * Callers:
 *     _CRT_INIT @ 0x1800072A4 (_CRT_INIT.c)
 * Callees:
 *     _FindPESection @ 0x180007B90 (_FindPESection.c)
 *     _ValidateImageBase @ 0x180007C30 (_ValidateImageBase.c)
 */

__int64 __fastcall IsNonwritableInCurrentImage(__int64 a1)
{
  __int64 result; // rax

  result = ValidateImageBase(0x180000000uLL);
  if ( (_DWORD)result )
  {
    result = FindPESection(0x180000000LL, a1 - 0x180000000LL);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}

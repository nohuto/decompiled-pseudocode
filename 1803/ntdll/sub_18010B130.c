/*
 * XREFs of sub_18010B130 @ 0x18010B130
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySection @ 0x18009B4E0 (ZwQuerySection.c)
 */

NTSTATUS __fastcall sub_18010B130(void *a1, void *a2, unsigned int a3, _DWORD *a4)
{
  NTSTATUS result; // eax
  ULONG_PTR ReturnLength; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0;
  if ( a3 < 0x18 )
    return -1073741789;
  result = ZwQuerySection(a1, SectionBasicInformation, a2, 0x18uLL, &ReturnLength);
  if ( result >= 0 )
  {
    if ( HIDWORD(ReturnLength) )
      return -2147483643;
    else
      *a4 = ReturnLength;
  }
  else
  {
    *a4 = 0;
  }
  return result;
}

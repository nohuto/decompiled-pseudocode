/*
 * XREFs of _wtoi @ 0x14016A420
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1405A0BD0 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 * Callees:
 *     wcstolX @ 0x14016C0F4 (wcstolX.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  int result; // eax

  result = 0;
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  return result;
}

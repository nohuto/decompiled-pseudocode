/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x140222824
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14022286C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x140701208 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvpGetCellContextInitialize @ 0x1404E15B4 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(char *a1)
{
  memset(a1, 0, 0x20uLL);
  return HvpGetCellContextInitialize(a1 + 16);
}

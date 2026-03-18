/*
 * XREFs of HvpGetCellContextInitialize @ 0x1404E15B4
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmpValueEnumStackEntryInitialize @ 0x140222824 (CmpValueEnumStackEntryInitialize.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14022310C (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextInitialize(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)a1 = -1;
  *(_WORD *)(a1 + 4) = 0;
  return result;
}

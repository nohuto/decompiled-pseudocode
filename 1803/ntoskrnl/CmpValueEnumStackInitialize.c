/*
 * XREFs of CmpValueEnumStackInitialize @ 0x140701208
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140222658 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1406F09E4 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpValueEnumStackEntryInitialize @ 0x140222824 (CmpValueEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackInitialize(char *a1)
{
  __int64 v2; // rdi
  char *v3; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x58uLL);
  *(_DWORD *)a1 = -1;
  v2 = 2LL;
  v3 = a1 + 16;
  do
  {
    result = CmpValueEnumStackEntryInitialize(v3);
    v3 += 32;
    --v2;
  }
  while ( v2 );
  return result;
}

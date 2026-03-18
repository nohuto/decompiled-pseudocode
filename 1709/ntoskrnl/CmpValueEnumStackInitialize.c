/*
 * XREFs of CmpValueEnumStackInitialize @ 0x14069C53C
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1401E448C (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     CmpValueEnumStackEntryInitialize @ 0x1401E4658 (CmpValueEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackInitialize(_DWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x58uLL);
  *a1 = -1;
  v2 = 2LL;
  v3 = (__int64)(a1 + 4);
  do
  {
    result = CmpValueEnumStackEntryInitialize(v3);
    v3 += 32LL;
    --v2;
  }
  while ( v2 );
  return result;
}

/*
 * XREFs of HvInitializeHashLibrary @ 0x1405BFAAC
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     SymCryptInit @ 0x140145644 (SymCryptInit.c)
 *     SymCryptMarvin32ExpandSeed @ 0x140176F90 (SymCryptMarvin32ExpandSeed.c)
 */

__int64 HvInitializeHashLibrary()
{
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  SymCryptInit();
  v1 = 0x82EF4D887A4E55C5uLL;
  return (unsigned int)SymCryptMarvin32ExpandSeed(HvSymcryptSeed, &v1, 8LL) != 0 ? 0xC0000001 : 0;
}

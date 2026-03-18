/*
 * XREFs of HvlpSetupPageListIteration @ 0x1401EC518
 * Callers:
 *     HvlpStartPageListIteration @ 0x1401EC59C (HvlpStartPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1401EC5C4 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 */

int *__fastcall HvlpSetupPageListIteration(int a1, char a2)
{
  int *v3; // rbx
  PVOID v4; // rax
  PVOID v5; // rcx
  int *result; // rax

  v3 = &HvlpIteratorCrashdump;
  if ( !a1 )
    v3 = &HvlpIteratorHibernate;
  *v3 = 0;
  *((_QWORD *)v3 + 1) = 0LL;
  if ( a1 == 1 )
  {
    v4 = HvlpFallbackScratchPage;
    v5 = HvlpHibernateScratchPage;
  }
  else
  {
    v4 = HvlpHibernateScratchPage;
    v5 = HvlpFallbackScratchPage;
  }
  if ( v4 )
    v5 = v4;
  *((_QWORD *)v3 + 1) = v5;
  if ( !v5 )
    return 0LL;
  *((PHYSICAL_ADDRESS *)v3 + 2) = MmGetPhysicalAddress(v5);
  result = v3;
  *((_BYTE *)v3 + 3) = a2;
  *((_BYTE *)v3 + 2) = 1;
  return result;
}

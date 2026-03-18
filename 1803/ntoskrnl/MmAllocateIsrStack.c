/*
 * XREFs of MmAllocateIsrStack @ 0x14062AFE4
 * Callers:
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MmSetPageProtection @ 0x1400C7020 (MmSetPageProtection.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14062B064 (MiMarkBootGuardPage.c)
 */

char __fastcall MmAllocateIsrStack(_QWORD *a1, unsigned __int16 a2)
{
  __int64 IndependentPages; // rax
  unsigned __int64 v4; // rbx
  __int64 PteAddress; // rax
  unsigned __int64 v7; // rbx

  if ( *a1 )
  {
    v7 = *a1 - 24576LL;
    if ( MmSetPageProtection(v7, 0x6000uLL, 4u) )
    {
      v4 = v7 - 4096;
      goto LABEL_4;
    }
  }
  else
  {
    IndependentPages = MmAllocateIndependentPages(0x7000uLL, a2);
    v4 = IndependentPages;
    if ( IndependentPages )
    {
      *a1 = IndependentPages + 28672;
LABEL_4:
      PteAddress = MiGetPteAddress(v4);
      MiMarkBootGuardPage(PteAddress);
      return 1;
    }
  }
  return 0;
}

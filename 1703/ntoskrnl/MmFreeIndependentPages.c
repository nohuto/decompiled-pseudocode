/*
 * XREFs of MmFreeIndependentPages @ 0x14056B860
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140155358 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EAE7C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x14025AD88 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140687628 (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14068ECF0 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14068F088 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14068F3B0 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14068F6F4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14068F920 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x1406B8384 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiReturnNonPagedPoolCharges @ 0x140126068 (MiReturnNonPagedPoolCharges.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  _QWORD *PteAddress; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // r10
  unsigned __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v3 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v10 = v3;
  v13 = v3;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v5 = PteAddress;
  v6 = &PteAddress[v3];
  do
  {
    v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v7 = 48
       * (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFLL)
                    - 0x58000000000LL
                    + 40) & 0xFFFFFFFFFLL);
    *PteAddress = 0LL;
    v8 = v7 - 0x58000000000LL;
    if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
      MiWritePteShadow();
    if ( (unsigned int)MiLockAndDecrementShareCount(v9, 1) == 3 )
      v11 = ++v2;
    MiLockAndDecrementShareCount(v8, 0);
    ++PteAddress;
  }
  while ( PteAddress < v6 );
  MiReleasePtes((__int64)&qword_14036D0A0, v5, v3);
  MiReturnNonPagedPoolCharges(&v10, 1);
}

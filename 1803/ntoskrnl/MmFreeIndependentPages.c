/*
 * XREFs of MmFreeIndependentPages @ 0x1400AD1B0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x14017692C (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x14022D040 (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x1402B8AEC (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140717B9C (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14071F948 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14071FCD8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x140720030 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140720374 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1407205A0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x14074F430 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiReturnPoolCharges @ 0x140134F8C (MiReturnPoolCharges.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r10
  _QWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  memset(v16, 0, sizeof(v16));
  v4 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v16[0] = v4;
  v16[3] = v4;
  v5 = v16[1];
  v6 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = v6;
  v8 = &v6[v4];
  do
  {
    v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v9 = 48
       * (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFLL)
                    - 0x58000000000LL
                    + 40) & 0xFFFFFFFFFLL);
    *v6 = ZeroPte;
    v10 = v9 - 0x58000000000LL;
    if ( MiPteInShadowRange((unsigned __int64)v6) )
      MiWritePteShadow(v12, v11, v13);
    if ( (unsigned int)MiLockAndDecrementShareCount(v14, 1LL) == 3 )
      v16[1] = ++v5;
    MiLockAndDecrementShareCount(v10, 0LL);
    ++v6;
  }
  while ( v6 < v8 );
  MiReleasePtes(&qword_1403CC5E0, v7, (unsigned int)v4);
  return MiReturnPoolCharges(v16, 1LL);
}

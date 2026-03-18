/*
 * XREFs of MmAllocateIndependentPages @ 0x1400C74F0
 * Callers:
 *     KeAllocateInterrupt @ 0x140168D78 (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x14017692C (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x14022D040 (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x14047BAF8 (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x14062AFE4 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14062B3A4 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14062BBD8 (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x140717ED4 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14071F3A0 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14071F948 (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 *     InitializePool @ 0x1408ACB14 (InitializePool.c)
 *     InitializePagedPool @ 0x1408ACF98 (InitializePagedPool.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiObtainPoolCharges @ 0x14013307C (MiObtainPoolCharges.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPages(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rbp
  unsigned __int64 ValidPte; // rbx
  int v8; // r15d
  int v9; // r12d
  unsigned int v10; // r14d
  __int64 Page; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  volatile signed __int32 *v15; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 v16; // [rsp+28h] [rbp-20h]
  unsigned __int16 v17; // [rsp+2Ah] [rbp-1Eh]

  v3 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v4 = MiReservePtes(&qword_1403CC5E0, (unsigned int)v3);
  if ( !v4 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v3, 1LL) )
  {
    MiReleasePtes(&qword_1403CC5E0, v4, (unsigned int)v3);
    return 0LL;
  }
  v6 = (__int64)(v4 << 25) >> 16;
  ValidPte = MiMakeValidPte(v4, 0LL, 2684354564LL, v5);
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v15);
  v8 = v16;
  v9 = v17;
  do
  {
    v10 = v9 | _InterlockedExchangeAdd(v15, 1u) & v8;
    while ( 1 )
    {
      Page = MiGetPage((__int64)&MiSystemPartition, v10, 8u);
      if ( Page != -1 )
        break;
      MiWaitForFreePage(&MiSystemPartition);
    }
    ValidPte ^= (ValidPte ^ (Page << 12)) & 0xFFFFFFFFF000LL;
    MiInitializePfn(48 * Page - 0x58000000000LL, v4, 4u, 4);
    *(_QWORD *)v4 = ValidPte;
    if ( MiPteInShadowRange(v4) )
      MiWritePteShadow(v12, ValidPte, v13);
    v4 += 8LL;
    --v3;
  }
  while ( v3 );
  return v6;
}

/*
 * XREFs of MmAllocateIndependentPages @ 0x1405B7830
 * Callers:
 *     KeAllocateInterrupt @ 0x1400B2D10 (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401F0038 (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x1404253FC (KiInitializePrcbContext.c)
 *     ExCreatePoolTagTable @ 0x1405B74F4 (ExCreatePoolTagTable.c)
 *     MmAllocateIsrStack @ 0x1405B7620 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x1405B7BCC (HvlInitializeProcessor.c)
 *     HvlpPreallocatePageListResources @ 0x1406B32A4 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406BA400 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1406BA9B4 (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     InitializePagedPool @ 0x14082DD0C (InitializePagedPool.c)
 *     InitializePool @ 0x14082DEFC (InitializePool.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400F74DC (MiObtainNonPagedPoolCharges.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPages(unsigned __int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  ULONG_PTR v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v9; // r9
  unsigned __int64 ValidPte; // rbx
  __int16 v11; // r12
  int v12; // r13d
  _WORD *v13; // r15
  unsigned int v14; // ebp
  __int64 Page; // rax
  _WORD *v16; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+28h] [rbp-30h]
  unsigned __int16 v18; // [rsp+2Ah] [rbp-2Eh]
  __int64 v19; // [rsp+60h] [rbp+8h]

  v4 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v5 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v4, a3);
  if ( !v5 )
    return 0LL;
  if ( !(unsigned int)MiObtainNonPagedPoolCharges(v4, 1, v6, v7) )
  {
    MiReleasePtes((__int64)&qword_140389360, v5, v4, v9);
    return 0LL;
  }
  v19 = (__int64)(v5 << 25) >> 16;
  ValidPte = MiMakeValidPte(v5, 0LL, -1610612732);
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v16);
  v11 = v17;
  v12 = v18;
  v13 = v16;
  do
  {
    v14 = v12 | (unsigned __int16)(v11 & ++*v13);
    while ( 1 )
    {
      Page = MiGetPage((__int64)&MiSystemPartition, v14, 8u);
      if ( Page != -1 )
        break;
      MiWaitForFreePage(&MiSystemPartition);
    }
    ValidPte ^= (ValidPte ^ (Page << 12)) & 0xFFFFFFFFF000LL;
    MiInitializePfn(48 * Page - 0x58000000000LL, (__int64 *)v5, 4u, 4);
    *(_QWORD *)v5 = ValidPte;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    v5 += 8LL;
    --v4;
  }
  while ( v4 );
  return v19;
}

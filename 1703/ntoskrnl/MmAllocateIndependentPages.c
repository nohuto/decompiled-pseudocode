/*
 * XREFs of MmAllocateIndependentPages @ 0x1405723D0
 * Callers:
 *     KeAllocateInterrupt @ 0x14014C058 (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x140155358 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EAE7C (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x140410CF4 (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x1405A77F8 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x1405A7BC0 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x1405A7F84 (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x140687884 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14068E734 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14068ECF0 (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 *     InitializePool @ 0x140814AC0 (InitializePool.c)
 *     InitializePagedPool @ 0x140814FA8 (InitializePagedPool.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiObtainNonPagedPoolCharges @ 0x14010ECE0 (MiObtainNonPagedPoolCharges.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPages(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  ULONG_PTR v5; // rsi
  unsigned __int64 ValidPte; // rbx
  __int16 v8; // r12
  int v9; // r13d
  _WORD *v10; // r15
  unsigned int v11; // ebp
  __int64 Page; // rax
  _WORD *v13; // [rsp+20h] [rbp-38h] BYREF
  __int16 v14; // [rsp+28h] [rbp-30h]
  unsigned __int16 v15; // [rsp+2Ah] [rbp-2Eh]
  __int64 v16; // [rsp+60h] [rbp+8h]

  v4 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v5 = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)v4, a3);
  if ( !v5 )
    return 0LL;
  if ( !(unsigned int)MiObtainNonPagedPoolCharges(v4, 1) )
  {
    MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v5, v4);
    return 0LL;
  }
  v16 = (__int64)(v5 << 25) >> 16;
  ValidPte = MiMakeValidPte(v5, 0LL, -1610612732);
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v13);
  v8 = v14;
  v9 = v15;
  v10 = v13;
  do
  {
    v11 = v9 | (unsigned __int16)(v8 & ++*v10);
    while ( 1 )
    {
      Page = MiGetPage((__int64)&MiSystemPartition, v11, 8u);
      if ( Page != -1 )
        break;
      MiWaitForFreePage(&MiSystemPartition);
    }
    ValidPte ^= (ValidPte ^ (Page << 12)) & 0xFFFFFFFFF000LL;
    MiInitializePfn(48 * Page - 0x58000000000LL, v5, 4LL, 4);
    *(_QWORD *)v5 = ValidPte;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow();
    v5 += 8LL;
    --v4;
  }
  while ( v4 );
  return v16;
}

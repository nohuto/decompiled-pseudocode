/*
 * XREFs of MiAllocateTopLevelPage @ 0x14041D294
 * Callers:
 *     MiAllocateProcessShadow @ 0x14041D3DC (MiAllocateProcessShadow.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiInitializePfnForOtherProcess @ 0x14010A008 (MiInitializePfnForOtherProcess.c)
 *     MiMarkPageActive @ 0x14010A760 (MiMarkPageActive.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR *ProcessPartition; // rbx
  __int64 i; // rcx
  __int64 Page; // rax
  __int64 v7; // r14
  __int64 *v8; // rdi
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 *v12; // rcx

  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
  for ( i = (__int64)ProcessPartition; ; i = (__int64)ProcessPartition )
  {
    Page = MiGetPage(i, 0, 0xC2u);
    v7 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(ProcessPartition);
  }
  v8 = (__int64 *)(48 * Page - 0x58000000000LL);
  ValidPte = MiMakeValidPte(0LL, Page, -1879048186);
  *v8 = a1;
  v10 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  v8[5] ^= (v7 ^ v8[5]) & 0xFFFFFFFFFLL;
  PteAddress = MiGetPteAddress(0xFFFFF6FB7DBED000uLL);
  MiInitializePfnForOtherProcess(v7, PteAddress, v7, 0);
  MiMarkPageActive((__int64)v8);
  *(_QWORD *)a2 = MiMakeValidPte(0LL, v7, -1610612732);
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow();
  v12 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 8 * ((PteAddress >> 3) & 0x1FF));
  *v12 = v10;
  if ( MiPteInShadowRange((unsigned __int64)v12) )
    MiWritePteShadow();
  return v7;
}

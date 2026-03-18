/*
 * XREFs of MiAllocateTopLevelPage @ 0x140512C1C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x140512DBC (MiAllocateProcessShadow.c)
 * Callees:
 *     MiSetPfnLink @ 0x1400093E8 (MiSetPfnLink.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x140071888 (MiSetPageTablePfnBuddy.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  _QWORD *ProcessPartition; // rbx
  __int64 i; // rcx
  __int64 Page; // rax
  __int64 v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // r9
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8

  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  for ( i = (__int64)ProcessPartition; ; i = (__int64)ProcessPartition )
  {
    Page = MiGetPage(i, 0, 0x302u);
    v7 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(ProcessPartition);
  }
  v8 = (_QWORD *)(48 * Page - 0x58000000000LL);
  MiSetPfnLink(v8, 0LL);
  ValidPte = MiMakeValidPte(0LL, v7, 2415919110LL, v9);
  *v8 = 0LL;
  v8[5] ^= (v7 ^ v8[5]) & 0xFFFFFFFFFLL;
  v11 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  MiSetPageTablePfnBuddy((__int64)v8, a1, 0);
  MiInitializePfnForOtherProcess(v7, 0xFFFFF6FB7DBEDF68uLL, v7, 512);
  *(_QWORD *)a2 = MiMakeValidPte(0LL, v7, 2684354564LL, v12);
  if ( MiPteInShadowRange(a2) )
  {
    MiWritePteShadow(v14, v13, v15);
    LODWORD(v15) = 2109661032;
  }
  v16 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 8LL * (((unsigned int)v15 >> 3) & 0x1FF));
  *v16 = v11;
  if ( MiPteInShadowRange((unsigned __int64)v16) )
    MiWritePteShadow(v17, v11, v18);
  return v7;
}

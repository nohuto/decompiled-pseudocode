/*
 * XREFs of MiAllocateTopLevelPage @ 0x14043CD94
 * Callers:
 *     MiAllocateProcessShadow @ 0x14043CF0C (MiAllocateProcessShadow.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x1400379C4 (MiSetPfnLink.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiSetPageTablePfnBuddy @ 0x1400B7DD4 (MiSetPageTablePfnBuddy.c)
 *     MiInitializePfnForOtherProcess @ 0x1400C457C (MiInitializePfnForOtherProcess.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  _QWORD *ProcessPartition; // rbx
  __int64 i; // rcx
  __int64 Page; // rax
  __int64 v7; // r14
  _QWORD *v8; // rdi
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 v12; // r10
  unsigned __int64 *v13; // rcx

  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  for ( i = (__int64)ProcessPartition; ; i = (__int64)ProcessPartition )
  {
    Page = MiGetPage(i, 0, 0xC2u);
    v7 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(ProcessPartition);
  }
  v8 = (_QWORD *)(48 * Page - 0x58000000000LL);
  MiSetPfnLink(v8, 0LL);
  ValidPte = MiMakeValidPte(0LL, v7, -1879048186);
  *v8 = 0LL;
  v8[5] ^= (v7 ^ v8[5]) & 0xFFFFFFFFFLL;
  v10 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  MiSetPageTablePfnBuddy((__int64)v8, a1, 0);
  PteAddress = MiGetPteAddress(0xFFFFF6FB7DBED000uLL);
  MiInitializePfnForOtherProcess(v7, PteAddress, v7, 512);
  *(_QWORD *)a2 = MiMakeValidPte(0LL, v7, -1610612732);
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  v13 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 8 * ((PteAddress >> 3) & 0x1FF));
  *v13 = v10;
  if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= v12 )
    MiWritePteShadow();
  return v7;
}

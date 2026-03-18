/*
 * XREFs of MiProtectAweRegion @ 0x1406E568C
 * Callers:
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400A5D30 (MiInitializeTbFlushList.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400BAD00 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140113B10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebp
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // r8d
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v10; // r15
  _KPROCESS *Process; // r13
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 PteShadow; // rax
  _KPROCESS *v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-118h] BYREF
  struct _KTHREAD *v20; // [rsp+28h] [rbp-110h]
  int v21[48]; // [rsp+30h] [rbp-108h] BYREF

  v4 = 1;
  PteAddress = MiGetPteAddress(a1);
  v7 = MiGetPteAddress(v6);
  CurrentThread = KeGetCurrentThread();
  v20 = CurrentThread;
  if ( v8 == 24 )
    v8 = 1;
  v10 = v7;
  Process = CurrentThread->ApcState.Process;
  ValidPte = MiMakeValidPte(PteAddress, -1LL, v8 | 0x80000000);
  v13 = ValidPte;
  if ( a3 == 24 )
    v13 = ValidPte & 0xFFFFFFFFFFFFFFFBuLL;
  MiInitializeTbFlushList((__int64)v21, 1, 20);
  v14 = Process[1].ActiveProcessors.Bitmap[3];
  --CurrentThread->SpecialApcDisable;
  ExAcquireAutoExpandPushLockExclusive(v14 + 16, 0LL);
  v15 = *(_QWORD *)PteAddress;
  if ( PteAddress >= 0xFFFFF6FB7DBED000uLL && PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
    LOWORD(v15) = MiReadPteShadow();
  if ( (v15 & 1) != 0 && (v15 & 4) != 0 )
    v4 = (v15 & 0x800) != 0 ? 4 : 2;
  if ( PteAddress <= v10 )
  {
    do
    {
      PteShadow = *(_QWORD *)PteAddress;
      if ( PteAddress >= 0xFFFFF6FB7DBED000uLL && PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v19 = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        v13 ^= (v13 ^ (MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v19) << 12)) & 0xFFFFFFFFF000LL;
        MiInsertTbFlushEntry(v21, (__int64)(PteAddress << 25) >> 16, 1LL, 0);
        MiWriteValidPteNewPage((unsigned __int64 *)PteAddress, v13);
      }
      PteAddress += 8LL;
    }
    while ( PteAddress <= v10 );
    CurrentThread = v20;
  }
  ExReleaseAutoExpandPushLockExclusive(v14 + 16, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFlushTbList((__int64)v21, v17);
  return v4;
}

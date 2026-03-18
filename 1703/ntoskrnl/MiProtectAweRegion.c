/*
 * XREFs of MiProtectAweRegion @ 0x1406B89C4
 * Callers:
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140020340 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140021C70 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiInitializeTbFlushList @ 0x14007F890 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
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
  __int16 v15; // ax
  _KPROCESS *v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v19[192]; // [rsp+30h] [rbp-108h] BYREF

  v4 = 1;
  PteAddress = MiGetPteAddress(a1);
  v7 = MiGetPteAddress(v6);
  CurrentThread = KeGetCurrentThread();
  v10 = v7;
  if ( v8 == 24 )
    v8 = 1;
  Process = CurrentThread->ApcState.Process;
  ValidPte = MiMakeValidPte(PteAddress, -1LL, v8 | 0x80000000);
  v13 = ValidPte;
  if ( a3 == 24 )
    v13 = ValidPte & 0xFFFFFFFFFFFFFFFBuLL;
  MiInitializeTbFlushList((__int64)v19, 1, 20);
  v14 = Process[1].ActiveProcessors.Bitmap[3];
  --CurrentThread->SpecialApcDisable;
  ExAcquireAutoExpandPushLockExclusive(v14 + 16, 0LL);
  v15 = MI_READ_PTE_LOCK_FREE(PteAddress);
  if ( (v15 & 1) != 0 && (v15 & 4) != 0 )
    v4 = (v15 & 0x800) != 0LL ? 4 : 2;
  while ( PteAddress <= v10 )
  {
    v18 = MI_READ_PTE_LOCK_FREE(PteAddress);
    if ( (v18 & 1) != 0 )
    {
      v13 ^= (v13 ^ MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18)) & 0xFFFFFFFFF000LL;
      MiInsertTbFlushEntry((__int64)v19, (__int64)(PteAddress << 25) >> 16, 1LL, 0);
      MiWriteValidPteNewProtection(PteAddress);
    }
    PteAddress += 8LL;
  }
  ExReleaseAutoExpandPushLockExclusive(v14 + 16, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFlushTbList((__int64)v19, v16);
  return v4;
}

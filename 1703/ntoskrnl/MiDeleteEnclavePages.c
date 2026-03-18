/*
 * XREFs of MiDeleteEnclavePages @ 0x1406BB880
 * Callers:
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14000C2E0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x14007F890 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14011C590 (ExAcquireAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiDeleteEnclavePage @ 0x14021C7C0 (MiDeleteEnclavePage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnReservedEnclavePages @ 0x1406BBDE0 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiDeleteEnclavePages(__int64 a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 PteAddress; // rdi
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v6; // r15
  _KPROCESS *Process; // r12
  unsigned __int64 v8; // rcx
  ULONG_PTR v9; // rbx
  _KPROCESS *v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  _KPROCESS *v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 ValidPte; // [rsp+20h] [rbp-108h] BYREF
  ULONG_PTR v17; // [rsp+28h] [rbp-100h]
  _BYTE v18[192]; // [rsp+30h] [rbp-F8h] BYREF

  v2 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  PteAddress = MiGetPteAddress(v2);
  v4 = MiGetPteAddress((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  Process = CurrentThread->ApcState.Process;
  v8 = Process[1].ActiveProcessors.Bitmap[3];
  --CurrentThread->SpecialApcDisable;
  v17 = ExAcquireAutoExpandPushLockShared(v8 + 16, 0LL);
  v9 = v17;
  MiInitializeTbFlushList((__int64)v18, 1, 20);
  v11 = PteAddress;
  if ( PteAddress <= v6 )
  {
    do
    {
      ValidPte = MI_READ_PTE_LOCK_FREE(v11);
      if ( ValidPte )
      {
        v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
        MiInsertTbFlushEntry((__int64)v18, v2, 1LL, 0);
        ValidPte = MiMakeValidPte(v11, (v12 >> 12) & 0xFFFFFFFFFLL, -1073741820);
        MiWriteValidPteNewProtection(v11);
      }
      v2 += 4096LL;
      v11 += 8LL;
    }
    while ( v11 <= v6 );
    v9 = v17;
  }
  MiFlushTbList((__int64)v18, v10);
  while ( PteAddress <= v6 )
  {
    MiDeleteEnclavePage(PteAddress, (__int64)v18);
    PteAddress += 8LL;
  }
  ExReleaseAutoExpandPushLockShared(v9, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFlushTbList((__int64)v18, v13);
  if ( (*(_DWORD *)(a1 + 88) & 2) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)&Process[1].IdealGlobalNode + 144LL));
  if ( (MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 64)) & 1) != 0 )
    MiDeleteEnclavePage(v14, 0LL);
  MiReleasePtes((__int64)&qword_14036D0A0, *(_QWORD **)(a1 + 64), 1u);
  return MiReturnReservedEnclavePages(a1);
}

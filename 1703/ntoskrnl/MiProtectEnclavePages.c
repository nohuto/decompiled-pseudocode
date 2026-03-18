/*
 * XREFs of MiProtectEnclavePages @ 0x1406BBB84
 * Callers:
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14000C2E0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x14007F890 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14011C590 (ExAcquireAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiUpdateEnclavePfnProtection @ 0x14021CC88 (MiUpdateEnclavePfnProtection.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiProtectEnclavePages(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        unsigned __int64 *a6,
        _QWORD *a7)
{
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  _DWORD *v15; // r10
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v17; // rcx
  ULONG_PTR v18; // r12
  unsigned __int64 ValidPte; // rbx
  _KPROCESS *v20; // rdx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rdi
  __int64 v24; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 *v25; // [rsp+28h] [rbp-120h]
  _QWORD *v26; // [rsp+30h] [rbp-118h]
  _BYTE v27[192]; // [rsp+40h] [rbp-108h] BYREF

  v25 = a6;
  v26 = a7;
  if ( (a4 & 0x20000000) == 0 || (a3 & 7) == 0 || a3 > 7 || (a3 & 5) == 5 )
    return 3221225496LL;
  PteAddress = MiGetPteAddress(a1);
  v12 = MiGetPteAddress(v11);
  v13 = PteAddress;
  if ( PteAddress <= v12 )
  {
    while ( MI_READ_PTE_LOCK_FREE(v13) )
    {
      v13 += 8LL;
      if ( v13 > v12 )
        goto LABEL_8;
    }
    return 3221225496LL;
  }
LABEL_8:
  v24 = MI_READ_PTE_LOCK_FREE(PteAddress);
  v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24);
  *v15 = MmProtectToValue[((unsigned __int64)*(unsigned int *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) >> 5) & 0x1F];
  CurrentThread = KeGetCurrentThread();
  v17 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[3];
  --CurrentThread->SpecialApcDisable;
  v18 = ExAcquireAutoExpandPushLockShared(v17 + 16, 0LL);
  ValidPte = MiMakeValidPte(v13, -1LL, a3 | 0x80000000);
  MiInitializeTbFlushList((__int64)v27, 1, 20);
  v21 = a1 & 0xFFFFFFFFFFFFF000uLL;
  *v25 = v21;
  *v26 = (a2 & 0xFFFFFFFFFFFFF000uLL) - v21 + 4096;
  while ( PteAddress <= v12 )
  {
    v24 = MI_READ_PTE_LOCK_FREE(PteAddress);
    v22 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v24);
    MiUpdateEnclavePfnProtection(48 * v22 - 0x58000000000LL, a3);
    ValidPte ^= (ValidPte ^ (v22 << 12)) & 0xFFFFFFFFF000LL;
    MiWriteValidPteNewProtection(PteAddress);
    MiInsertTbFlushEntry((__int64)v27, v21, 1LL, 0);
    PteAddress += 8LL;
    v21 += 4096LL;
  }
  MiFlushTbList((__int64)v27, v20);
  ExReleaseAutoExpandPushLockShared(v18, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}

/*
 * XREFs of MiProtectEnclavePages @ 0x1406E8DE4
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
 *     ExAcquireAutoExpandPushLockShared @ 0x140101100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1401038D0 (ExReleaseAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiUpdateEnclavePfnProtection @ 0x140229B50 (MiUpdateEnclavePfnProtection.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     VslDebugProtectSecureProcessMemory @ 0x1406B38C0 (VslDebugProtectSecureProcessMemory.c)
 */

NTSTATUS __fastcall MiProtectEnclavePages(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned __int64 *a10,
        ULONG_PTR *a11)
{
  int v11; // eax
  NTSTATUS result; // eax
  unsigned __int64 *PteAddress; // rsi
  unsigned __int64 v14; // r15
  __int64 *v15; // rbx
  __int64 PteShadow; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // r10
  unsigned __int64 v20; // rcx
  unsigned __int64 ValidPte; // rbx
  _KPROCESS *v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v31; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-B0h]
  int v33[48]; // [rsp+60h] [rbp-A0h] BYREF

  v11 = *(_DWORD *)(a3 + 64);
  v31 = a11;
  v29 = a4;
  if ( (v11 & 1) == 0 )
  {
    BugCheckParameter2 = a5 - a4 + 1;
    result = VslDebugProtectSecureProcessMemory(a1, a2, (__int64 *)&v29, (__int64 *)&BugCheckParameter2, a6, a9);
    if ( result >= 0 )
    {
      *a10 = v29;
      *a11 = BugCheckParameter2;
    }
    return result;
  }
  if ( (a8 & 0x20000000) == 0 || (a7 & 7) == 0 || a7 > 7 || (a7 & 5) == 5 )
    return -1073741800;
  PteAddress = (unsigned __int64 *)MiGetPteAddress(a4);
  v14 = MiGetPteAddress(a5);
  v15 = (__int64 *)PteAddress;
  if ( (unsigned __int64)PteAddress <= v14 )
  {
    do
    {
      PteShadow = *v15;
      if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      if ( !PteShadow )
        return -1073741800;
      ++v15;
    }
    while ( (unsigned __int64)v15 <= v14 );
  }
  v17 = *PteAddress;
  if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
    v17 = MiReadPteShadow();
  v30 = v17;
  v18 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v30);
  *v19 = MmProtectToValue[(*(_DWORD *)(48 * v18 - 0x57FFFFFFFF0LL) >> 5) & 0x1F];
  CurrentThread = KeGetCurrentThread();
  v20 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[3];
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v20 + 16, 0LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v15, -1LL, a7 | 0x80000000);
  MiInitializeTbFlushList((__int64)v33, 1, 20);
  v23 = v29 & 0xFFFFFFFFFFFFF000uLL;
  v24 = v31;
  v25 = (a5 & 0xFFFFFFFFFFFFF000uLL) - (v29 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *a10 = v29 & 0xFFFFFFFFFFFFF000uLL;
  for ( *v24 = v25; (unsigned __int64)PteAddress <= v14; v23 += 4096LL )
  {
    v26 = *PteAddress;
    if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
      v26 = MiReadPteShadow();
    v30 = v26;
    v27 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v30);
    MiUpdateEnclavePfnProtection(48 * v27 - 0x58000000000LL, a7);
    ValidPte ^= (ValidPte ^ (v27 << 12)) & 0xFFFFFFFFF000LL;
    MiWriteValidPteNewPage(PteAddress, ValidPte);
    MiInsertTbFlushEntry(v33, v23, 1LL, 0);
    ++PteAddress;
  }
  MiFlushTbList((__int64)v33, v22);
  ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0;
}

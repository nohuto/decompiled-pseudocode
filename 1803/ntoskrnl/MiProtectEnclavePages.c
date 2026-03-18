/*
 * XREFs of MiProtectEnclavePages @ 0x140752874
 * Callers:
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiInitializeTbFlushList @ 0x14003B3A0 (MiInitializeTbFlushList.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14007BE70 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400A4CF0 (ExReleaseAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140125D90 (MI_TIGHTER_PERMISSIONS.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeCanChangeEnclavePageProtection @ 0x14024130C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1402413D4 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x1402415F4 (KeTrackEnclaveTbFlush.c)
 *     MiUpdateEnclavePfnProtection @ 0x140264964 (MiUpdateEnclavePfnProtection.c)
 *     MiWriteEnclavePte @ 0x1402649B4 (MiWriteEnclavePte.c)
 *     VslDebugProtectSecureProcessMemory @ 0x1407184F0 (VslDebugProtectSecureProcessMemory.c)
 */

NTSTATUS __fastcall MiProtectEnclavePages(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned __int64 *a10,
        struct _KTHREAD **a11)
{
  __int64 v11; // r13
  int v12; // eax
  NTSTATUS result; // eax
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  unsigned __int64 PteAddress; // r14
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  _DWORD *v21; // r11
  int v22; // r9d
  __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r8
  unsigned __int64 v27; // rdi
  __int64 v28; // r9
  unsigned __int64 ValidPte; // rbx
  __int64 v30; // rsi
  unsigned __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // r8
  ULONG_PTR v34; // rdi
  __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v41; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  _BYTE v44[12]; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h]

  v11 = a4;
  v12 = *(_DWORD *)(a3 + 64);
  v43 = a5;
  CurrentThread = (struct _KTHREAD *)a3;
  v39 = a4;
  v42 = a10;
  v41 = a11;
  if ( (v12 & 1) == 0 )
  {
    CurrentThread = (struct _KTHREAD *)(a5 - a4 + 1);
    result = VslDebugProtectSecureProcessMemory(a1, a2, (__int64 *)&v39, (__int64 *)&CurrentThread, a6, a9);
    if ( result >= 0 )
    {
      *a10 = v39;
      *a11 = CurrentThread;
    }
    return result;
  }
  v14 = 0;
  v15 = a7;
  v38 = a8 & 0x20000000;
  if ( (a8 & 0x20000000) != 0 )
  {
    if ( (a8 & 0x90000000) != 0 )
      return -1073741755;
    goto LABEL_17;
  }
  if ( (v12 & 2) == 0 || (*(_DWORD *)(a3 + 72) & 1) == 0 )
    return -1073741800;
  if ( a8 < 0 )
  {
    if ( a8 == 0x80000000 && !a6 )
    {
      v14 = 8;
      goto LABEL_20;
    }
    return -1073741755;
  }
  if ( (a8 & 0x10000000) == 0 )
  {
LABEL_17:
    if ( (a7 & 7) != 0 && a7 <= 7 && (a7 & 5) != 5 )
      goto LABEL_20;
    return -1073741800;
  }
  if ( a8 != 0x10000000 || a6 )
    return -1073741755;
  v14 = 128;
LABEL_20:
  PteAddress = MiGetPteAddress(a4);
  v18 = MiGetPteAddress(v17);
  v19 = PteAddress;
  if ( PteAddress <= v18 )
  {
    while ( (MI_READ_PTE_LOCK_FREE(v19) & 1) != 0 )
    {
      v19 += 8LL;
      if ( v19 > v18 )
        goto LABEL_23;
    }
    return -1073741800;
  }
LABEL_23:
  v40 = MI_READ_PTE_LOCK_FREE(PteAddress);
  v20 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40);
  *v21 = MmProtectToValue[((unsigned __int64)*(unsigned int *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) >> 5) & 0x1F];
  if ( !v22 )
  {
    if ( !v14 )
    {
      v14 = (a7 & 4 | 2) >> 1;
      if ( (a7 & 2) != 0 )
        LOBYTE(v14) = v14 | 4;
    }
    v23 = v11;
    v24 = PteAddress;
    if ( PteAddress <= v18 )
    {
      while ( (int)KeCanChangeEnclavePageProtection() >= 0 )
      {
        v24 += 8LL;
        v23 += 4096LL;
        if ( v24 > v18 )
          goto LABEL_30;
      }
      return -1073741800;
    }
LABEL_30:
    v19 = PteAddress;
    if ( PteAddress <= v18 )
    {
      v25 = ((v18 - PteAddress) >> 3) + 1;
      v19 = PteAddress + 8 * v25;
      do
      {
        KeChangeEnclavePageProtection(v11, v14);
        v11 += 4096LL;
        --v25;
      }
      while ( v25 );
    }
    KeTrackEnclaveTbFlush();
    v15 = a7 & 2 | 4;
  }
  MiInitializeTbFlushList((__int64)v44, 1, 20);
  v26 = v15;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v26) = v15 | 0x80000000;
  v27 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[3];
  ValidPte = MiMakeValidPte(v19, -1LL, v26, v28);
  v30 = (__int64)CurrentThread;
  v31 = v39 & 0xFFFFFFFFFFFFF000uLL;
  *v42 = v39 & 0xFFFFFFFFFFFFF000uLL;
  *v41 = (v43 & 0xFFFFFFFFFFFFF000uLL) - v31 + 4096;
  --*(_WORD *)(v30 + 486);
  v41 = (_QWORD *)ExAcquireAutoExpandPushLockShared(v27 + 16, 0LL);
  v34 = (ULONG_PTR)v41;
  if ( PteAddress <= v18 )
  {
    do
    {
      v40 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v35 = v40;
      v36 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFLL;
      MiUpdateEnclavePfnProtection(48 * v36 - 0x58000000000LL, v15);
      ValidPte = (v36 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
      MiWriteEnclavePte(PteAddress, ValidPte, 1);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v35, ValidPte) )
        MiInsertTbFlushEntry((__int64)v44, v31, 1LL, 0);
      PteAddress += 8LL;
      v31 += 4096LL;
    }
    while ( PteAddress <= v18 );
    v30 = (__int64)CurrentThread;
    v34 = (ULONG_PTR)v41;
  }
  if ( !v38 && !v45 )
    MiInsertTbFlushEntry((__int64)v44, v31 - 4096, 1LL, 0);
  MiFlushTbList((__int64)v44, v32, v33);
  ExReleaseAutoExpandPushLockShared(v34, 0LL);
  KiLeaveGuardedRegionUnsafe(v30);
  return 0;
}

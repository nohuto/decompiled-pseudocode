/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x1406E7BD4
 * Callers:
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140101100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1401038D0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiGetVmPartition @ 0x140120738 (MiGetVmPartition.c)
 *     MiCreatePteCopyList @ 0x140123E80 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140125EF4 (MiReleasePteCopyList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MiInitializeEnclavePfn @ 0x1402298F0 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x140229AD8 (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KeAddEnclavePage @ 0x1406D7E00 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x1406E8908 (MiGetPageForEnclave.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        void *Src,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v10; // r15
  char *PoolWithTag; // rsi
  unsigned int ProtectionMask; // eax
  char v13; // r8
  unsigned __int64 v14; // r9
  char v16; // cl
  char v17; // cl
  char v18; // dl
  unsigned int v19; // edx
  unsigned __int64 PteAddress; // r12
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  int v26; // edi
  unsigned __int64 v27; // rcx
  unsigned int v28; // r13d
  char v29; // al
  unsigned __int64 v30; // rcx
  char *v31; // r14
  __int64 v32; // rdi
  char *v33; // r14
  __int64 PageForEnclave; // rax
  __int64 v35; // r15
  unsigned __int64 PteFromCopyList; // r12
  unsigned int v38; // [rsp+34h] [rbp-1D4h]
  char v40; // [rsp+48h] [rbp-1C0h]
  _QWORD *v42; // [rsp+58h] [rbp-1B0h]
  unsigned __int64 v43; // [rsp+60h] [rbp-1A8h]
  __int64 VmPartition; // [rsp+70h] [rbp-198h]
  __int64 v46; // [rsp+88h] [rbp-180h]
  unsigned __int64 v47; // [rsp+98h] [rbp-170h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-168h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-160h]
  unsigned int v50[8]; // [rsp+B0h] [rbp-158h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+D0h] [rbp-138h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v52; // [rsp+190h] [rbp-78h] BYREF

  v10 = (unsigned __int64)Src;
  MemoryDescriptorList.MdlFlags = 0;
  PoolWithTag = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0x5FFFFFFF);
  v38 = ProtectionMask;
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase & 0x100) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v13 |= 4u;
  }
  v16 = v13 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v16 = v13;
  v17 = v16 | 1;
  v18 = v17 | 0x40;
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
    v18 = v17;
  v40 = v18;
  if ( (v18 & 9) == 0 )
    return 3221225541LL;
  PteAddress = MiGetPteAddress(v14);
  v42 = (_QWORD *)PteAddress;
  v21 = PteAddress + 8 * (v19 - 1LL);
  v47 = v21;
  if ( v22 > 0x14000 )
    v19 = 20;
  MiCreatePteCopyList(v19 + 1, v19 + 1, (__int64)v50);
  if ( !v50[1] )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0
    || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    CurrentThread = KeGetCurrentThread();
    v27 = a1[1].ActiveProcessors.Bitmap[3];
    --CurrentThread->SpecialApcDisable;
    BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v27 + 16, 0LL);
    v46 = (__int64)(*(_QWORD *)(a2 + 72) << 25) >> 16;
    VmPartition = MiGetVmPartition((__int64)&a1[1].IdealNode[12]);
    v26 = 0;
    *a8 = 0LL;
    while ( PteAddress <= v21 )
    {
      v28 = 16;
      if ( (unsigned __int64)((__int64)(v21 - PteAddress + 8) >> 3) < 0x10 )
        v28 = (__int64)(v21 - PteAddress + 8) >> 3;
      v29 = a3;
      if ( a3 == 1 )
      {
        if ( v28 )
        {
          v30 = ((unsigned __int64)v28 << 12) + v10;
          if ( v30 > 0x7FFFFFFF0000LL || v30 < v10 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v29 = 1;
      }
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, (const void *)v10, (unsigned __int64)v28 << 12);
        v31 = PoolWithTag;
      }
      else if ( v29 == 1 )
      {
        MemoryDescriptorList.Next = 0LL;
        MemoryDescriptorList.Size = 8 * (((((unsigned __int64)v28 << 12) + (v10 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList.MdlFlags = 0;
        MemoryDescriptorList.StartVa = (PVOID)(v10 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList.ByteOffset = v10 & 0xFFF;
        MemoryDescriptorList.ByteCount = v28 << 12;
        MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
        v31 = (char *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
        if ( !v31 )
        {
          v26 = -1073741670;
          break;
        }
      }
      else
      {
        v31 = (char *)v10;
      }
      v10 += (unsigned __int64)v28 << 12;
      v43 = v10;
      KiStackAttachProcess(a1, 0, (__int64)&v52);
      if ( v28 )
      {
        v32 = a4;
        v33 = &v31[-a4];
        while ( 1 )
        {
          PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
          v35 = PageForEnclave;
          if ( PageForEnclave == -1 )
            break;
          PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v50, PageForEnclave, -1LL);
          v26 = KeAddEnclavePage(v46, (__int64)&v33[v32], (__int64)(PteFromCopyList << 25) >> 16, v32, v40, a9);
          *(_QWORD *)PteFromCopyList = 0LL;
          if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow();
          if ( v26 < 0 )
          {
            MiReturnEnclavePage(v35);
            PteAddress = (unsigned __int64)v42;
            goto LABEL_52;
          }
          MiInitializeEnclavePfn(v35, (__int64)v42, v38);
          *v42 = MiMakeValidPte((unsigned __int64)v42, v35, v38 | 0x80000000);
          if ( (unsigned __int64)v42 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v42 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow();
          a4 += 4096LL;
          PteAddress = (unsigned __int64)++v42;
          *a8 += 4096LL;
          if ( !--v28 )
            goto LABEL_52;
          v32 = a4;
        }
        v26 = -1073741801;
LABEL_52:
        v10 = v43;
      }
      if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
        MmUnlockPages(&MemoryDescriptorList);
      KiUnstackDetachProcess(&v52, 0LL);
      v21 = v47;
    }
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    v26 = -1073741670;
  }
  if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
    MmUnlockPages(&MemoryDescriptorList);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  MiReleasePteCopyList((__int64)v50, v23, v24, v25);
  return (unsigned int)v26;
}

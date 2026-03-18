/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x140751610
 * Callers:
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140002458 (MiGetPteFromCopyList.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14007BE70 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400A4CF0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiCreatePteCopyList @ 0x1400C613C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400C8214 (MiReleasePteCopyList.c)
 *     MiGetVmPartition @ 0x1400D2E10 (MiGetVmPartition.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiInitializeEnclavePfn @ 0x1402646F8 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x1402648EC (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1402649B4 (MiWriteEnclavePte.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     KeAddEnclavePage @ 0x140741D10 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x140752384 (MiGetPageForEnclave.c)
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
  unsigned __int64 v11; // r12
  char *PoolWithTag; // rsi
  unsigned int ProtectionMask; // eax
  char v14; // r8
  unsigned __int64 v15; // r9
  unsigned int v16; // r14d
  char v18; // cl
  char v19; // cl
  char v20; // r8
  unsigned int v21; // edx
  unsigned __int64 PteAddress; // r15
  unsigned __int64 v23; // r8
  int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r13d
  char v28; // al
  unsigned __int64 v29; // rcx
  char *v30; // r15
  char *v31; // r15
  __int64 PageForEnclave; // rax
  ULONG_PTR v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v42; // [rsp+48h] [rbp-1C0h]
  char v43; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v44; // [rsp+60h] [rbp-1A8h]
  __int64 VmPartition; // [rsp+78h] [rbp-190h]
  __int64 v48; // [rsp+90h] [rbp-178h]
  unsigned __int64 PteFromCopyList; // [rsp+98h] [rbp-170h]
  char *v50; // [rsp+A0h] [rbp-168h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-160h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-158h]
  unsigned int v53[6]; // [rsp+B8h] [rbp-150h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+D0h] [rbp-138h] BYREF
  _BYTE v55[48]; // [rsp+190h] [rbp-78h] BYREF

  v11 = (unsigned __int64)Src;
  MemoryDescriptorList.MdlFlags = 0;
  PoolWithTag = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0x5FFFFFFF);
  v16 = ProtectionMask;
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase & 0x100) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v14 |= 4u;
  }
  v18 = v14 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v18 = v14;
  v19 = v18 | 1;
  v20 = v19 | 0x40;
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
    v20 = v19;
  v43 = v20;
  if ( (v20 & 9) == 0 )
    return 3221225541LL;
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    v16 = ProtectionMask & 2 | 4;
  PteAddress = MiGetPteAddress(v15);
  v42 = PteAddress;
  v44 = PteAddress + 8 * (v21 - 1LL);
  if ( v23 > 0x14000 )
    v21 = 20;
  MiCreatePteCopyList(v21 + 1, v21 + 1, (__int64)v53);
  if ( !v53[1] )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0
    || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    CurrentThread = KeGetCurrentThread();
    VmPartition = MiGetVmPartition((__int64)&a1[1].IdealNode[12]);
    v24 = 0;
    *a8 = 0LL;
    --*(_WORD *)(v25 + 486);
    BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v26 + 16, 0LL);
    v48 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( PteAddress <= v44 )
    {
      v27 = 16;
      if ( (unsigned __int64)((__int64)(v44 - PteAddress + 8) >> 3) < 0x10 )
        v27 = (__int64)(v44 - PteAddress + 8) >> 3;
      v28 = a3;
      if ( a3 == 1 )
      {
        if ( v27 )
        {
          v29 = ((unsigned __int64)v27 << 12) + v11;
          if ( v29 > 0x7FFFFFFF0000LL || v29 < v11 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v28 = 1;
      }
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, (const void *)v11, (unsigned __int64)v27 << 12);
        v30 = PoolWithTag;
      }
      else if ( v28 == 1 )
      {
        MemoryDescriptorList.Next = 0LL;
        MemoryDescriptorList.Size = 8 * (((((unsigned __int64)v27 << 12) + (v11 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList.MdlFlags = 0;
        MemoryDescriptorList.StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList.ByteOffset = v11 & 0xFFF;
        MemoryDescriptorList.ByteCount = v27 << 12;
        MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
        v30 = (char *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
        if ( !v30 )
        {
          v24 = -1073741670;
          break;
        }
      }
      else
      {
        v30 = (char *)v11;
      }
      v50 = (char *)(((unsigned __int64)v27 << 12) + v11);
      KiStackAttachProcess(a1, 0, (__int64)v55);
      v31 = &v30[-a4];
      while ( v27 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v33 = PageForEnclave;
        if ( PageForEnclave == -1 )
        {
          v24 = -1073741801;
          break;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v53, PageForEnclave, -1LL);
        v24 = KeAddEnclavePage(v48, (__int64)&v31[a4], (__int64)(PteFromCopyList << 25) >> 16, a4, v43, a9);
        *(_QWORD *)PteFromCopyList = ZeroPte;
        if ( MiPteInShadowRange(PteFromCopyList) )
          MiWritePteShadow(v35, v34, v36);
        if ( v24 < 0 )
        {
          MiReturnEnclavePage(v33);
          break;
        }
        MiInitializeEnclavePfn(v33, v42, v16);
        v37 = v16;
        LODWORD(v37) = v16 | 0x80000000;
        ValidPte = MiMakeValidPte(v42, v33, v37, v38);
        MiWriteEnclavePte(v42, ValidPte, 0);
        a4 += 4096LL;
        v42 += 8LL;
        --v27;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
        MmUnlockPages(&MemoryDescriptorList);
      KiUnstackDetachProcess((__int64)v55, 0LL);
      v11 = (unsigned __int64)v50;
      PteAddress = v42;
    }
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    v24 = -1073741670;
  }
  if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
    MmUnlockPages(&MemoryDescriptorList);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  MiReleasePteCopyList((__int64)v53);
  return (unsigned int)v24;
}

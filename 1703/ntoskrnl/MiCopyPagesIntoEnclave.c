/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x1406BAD94
 * Callers:
 *     NtLoadEnclaveData @ 0x1406BC4E4 (NtLoadEnclaveData.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14000C2E0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiReleasePteCopyList @ 0x14002EDD4 (MiReleasePteCopyList.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14011C590 (ExAcquireAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiGetVmPartition @ 0x1402139C8 (MiGetVmPartition.c)
 *     MiInitializeEnclavePfn @ 0x14021CAB0 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x14021CC10 (MiReturnEnclavePage.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KeAddEnclavePage @ 0x1406ACB18 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x1406BBA78 (MiGetPageForEnclave.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *BugCheckParameter1,
        char a2,
        unsigned __int64 a3,
        void *a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int16 v8; // r12
  char *PoolWithTag; // r14
  unsigned int ProtectionMask; // eax
  int v13; // r8d
  int v15; // edi
  int v16; // edi
  unsigned int v17; // edx
  unsigned __int64 v18; // r8
  int v19; // r15d
  unsigned int *v20; // rax
  unsigned int *v21; // rsi
  int v22; // ecx
  int v23; // edi
  ULONG_PTR v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rax
  unsigned int v28; // r12d
  char v29; // al
  char *v30; // rcx
  char *v31; // r12
  __int64 v32; // rdi
  char *v33; // r12
  __int64 PageForEnclave; // rax
  __int64 v35; // r15
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // r15
  unsigned int v40; // [rsp+34h] [rbp-1D4h]
  int v41; // [rsp+38h] [rbp-1D0h] BYREF
  void *Src; // [rsp+40h] [rbp-1C8h]
  unsigned __int64 PteFromCopyList; // [rsp+48h] [rbp-1C0h]
  unsigned int v44; // [rsp+50h] [rbp-1B8h]
  PVOID v45; // [rsp+58h] [rbp-1B0h]
  unsigned __int64 v46; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 PteAddress; // [rsp+68h] [rbp-1A0h]
  int v48; // [rsp+70h] [rbp-198h]
  unsigned int *v49; // [rsp+78h] [rbp-190h]
  unsigned __int64 v50; // [rsp+80h] [rbp-188h]
  ULONG_PTR BugCheckParameter1a; // [rsp+88h] [rbp-180h]
  _QWORD *v52; // [rsp+90h] [rbp-178h]
  __int64 VmPartition; // [rsp+A0h] [rbp-168h]
  _DWORD *v54; // [rsp+A8h] [rbp-160h]
  __int64 v55; // [rsp+B0h] [rbp-158h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-150h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-148h]
  unsigned int v58[6]; // [rsp+C8h] [rbp-140h] BYREF
  $5BC46E0569261879018906DEC3127961 v59; // [rsp+E0h] [rbp-128h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+110h] [rbp-F8h] BYREF

  v8 = (__int16)a4;
  Src = a4;
  v46 = a3;
  BugCheckParameter1a = (ULONG_PTR)BugCheckParameter1;
  v52 = a7;
  v54 = a8;
  MemoryDescriptorList.MdlFlags = 0;
  PoolWithTag = 0LL;
  v45 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a6 & 0x5FFFFFFF);
  v44 = ProtectionMask;
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x400) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v13 |= 4u;
  }
  v15 = v13 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v15 = v13;
  v16 = v15 | 1;
  if ( (v16 & 9) == 0 )
    return 3221225541LL;
  PteAddress = MiGetPteAddress(a3);
  v50 = PteAddress + 8 * (v17 - 1LL);
  if ( v18 > 0x14000 )
    v17 = 20;
  MiCreatePteCopyList(v17 + 1, v17 + 1, (__int64)v58);
  if ( !v58[1] )
    return 3221225626LL;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v59);
  v19 = 1;
  v20 = MiObtainReferencedVad(a3, &v41);
  v21 = v20;
  v49 = v20;
  if ( v20 && (v20[12] & 7) == 3 && (v20[12] & 0x40000) != 0 )
  {
    v22 = v16 | 0x40;
    if ( (v20[22] & 1) == 0 )
      v22 = v16;
    v48 = v22;
    if ( (v8 & 0xFFF) == 0
      || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x44456D4Du), (v45 = PoolWithTag) != 0LL) )
    {
      CurrentThread = KeGetCurrentThread();
      v24 = BugCheckParameter1a;
      v25 = *(_QWORD *)(BugCheckParameter1a + 1032);
      --CurrentThread->SpecialApcDisable;
      BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v25 + 16, 0LL);
      v55 = (__int64)(*((_QWORD *)v21 + 8) << 25) >> 16;
      VmPartition = MiGetVmPartition(v24 + 1280);
      v23 = 0;
      v41 = 0;
      *v52 = 0LL;
      while ( 1 )
      {
        v19 = 1;
        v26 = PteAddress;
        if ( PteAddress > v50 )
          break;
        KiUnstackDetachProcess(&v59, 0LL);
        v19 = 0;
        v27 = (__int64)(v50 - v26 + 8) >> 3;
        v28 = 16;
        if ( v27 < 0x10 )
          v28 = v27;
        v40 = v28;
        v29 = a2;
        if ( a2 == 1 )
        {
          if ( v28 )
          {
            v30 = (char *)Src + 4096 * (unsigned __int64)v28;
            if ( (unsigned __int64)v30 > 0x7FFFFFFF0000LL || v30 < Src )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v29 = 1;
        }
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Src, (unsigned __int64)v28 << 12);
          v31 = PoolWithTag;
        }
        else if ( v29 == 1 )
        {
          MemoryDescriptorList.Next = 0LL;
          MemoryDescriptorList.Size = 8
                                    * (((((unsigned __int64)v28 << 12) + ((unsigned __int16)Src & 0xFFF) + 4095LL) >> 12)
                                     + 6);
          MemoryDescriptorList.MdlFlags = 0;
          MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
          MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
          MemoryDescriptorList.ByteCount = v28 << 12;
          MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
          v31 = (char *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
          if ( !v31 )
          {
            v23 = -1073741670;
            break;
          }
        }
        else
        {
          v31 = (char *)Src;
        }
        Src = (char *)Src + 4096 * (unsigned __int64)v40;
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)&v59);
        if ( v40 )
        {
          v32 = v46;
          v33 = &v31[-v46];
          while ( 1 )
          {
            PageForEnclave = MiGetPageForEnclave(v21, VmPartition);
            v35 = PageForEnclave;
            if ( PageForEnclave == -1 )
              break;
            PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v58, PageForEnclave, -1LL);
            v23 = KeAddEnclavePage(v55, (__int64)&v33[v32], (__int64)(PteFromCopyList << 25) >> 16, v32, v48, v54);
            v41 = v23;
            v36 = PteFromCopyList;
            *(_QWORD *)PteFromCopyList = 0LL;
            if ( MiPteInShadowRange(v36) )
              MiWritePteShadow();
            if ( v23 < 0 )
            {
              MiReturnEnclavePage(v35);
              goto LABEL_53;
            }
            MiInitializeEnclavePfn(v35, PteAddress, v44);
            v37 = v35;
            v38 = (_QWORD *)PteAddress;
            *v38 = MiMakeValidPte(PteAddress, v37, v44 | 0x80000000);
            if ( MiPteInShadowRange((unsigned __int64)v38) )
              MiWritePteShadow();
            v46 += 4096LL;
            PteAddress = (unsigned __int64)(v38 + 1);
            --v40;
            *v52 += 4096LL;
            if ( !v40 )
              goto LABEL_53;
            v32 = v46;
          }
          v23 = -1073741801;
          v41 = -1073741801;
        }
LABEL_53:
        if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
          MmUnlockPages(&MemoryDescriptorList);
      }
      ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      v23 = -1073741670;
    }
  }
  else
  {
    v23 = -1073741800;
  }
  if ( v21 )
    MiUnlockAndDereferenceVad((char *)v21);
  if ( v19 )
    KiUnstackDetachProcess(&v59, 0LL);
  if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
    MmUnlockPages(&MemoryDescriptorList);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  MiReleasePteCopyList((__int64)v58);
  return (unsigned int)v23;
}

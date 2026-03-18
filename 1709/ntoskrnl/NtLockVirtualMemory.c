/*
 * XREFs of NtLockVirtualMemory @ 0x14010ABA8
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiLockPageAndSetDirty @ 0x140032380 (MiLockPageAndSetDirty.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiLockPageTablePage @ 0x1400BE2E0 (MiLockPageTablePage.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiUnlockVa @ 0x14010C884 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x14010CA64 (MiUnlockPageTableCharges.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiUnlockVadRange @ 0x1405405F8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140540730 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x140540A60 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r12
  PVOID PoolWithTag; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r10
  NTSTATUS v14; // edi
  unsigned __int64 Address; // rsi
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  char *v20; // r14
  LONG *SharedVm; // rdi
  KIRQL v22; // al
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 PteShadow; // rax
  LONG *v32; // rdi
  __int64 v33; // r13
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rdi
  unsigned __int64 v41; // rsi
  const signed __int64 *v42; // rbx
  LOGICAL ShouldYieldProcessor; // eax
  unsigned __int64 v44; // rax
  unsigned __int8 v45; // [rsp+40h] [rbp-118h]
  char v46; // [rsp+44h] [rbp-114h]
  unsigned __int64 v47; // [rsp+48h] [rbp-110h]
  PVOID Object; // [rsp+50h] [rbp-108h] BYREF
  int v49; // [rsp+58h] [rbp-100h]
  int v50; // [rsp+5Ch] [rbp-FCh]
  PVOID P; // [rsp+60h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v53; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v54; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v55; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v56; // [rsp+88h] [rbp-D0h]
  __int64 v57; // [rsp+90h] [rbp-C8h] BYREF
  int v58; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned __int64 v60; // [rsp+A8h] [rbp-B0h]
  char *v61; // [rsp+B0h] [rbp-A8h]
  __int64 v62; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-90h]
  PSIZE_T v65; // [rsp+D0h] [rbp-88h]
  PVOID *v66; // [rsp+D8h] [rbp-80h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v67; // [rsp+E0h] [rbp-78h] BYREF

  v65 = NumberOfBytesToLock;
  v66 = BaseAddress;
  v5 = 0;
  v46 = 0;
  v49 = 0;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v57, (__int64)&v59, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = v57;
  v8 = (v57 + v59 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v53 = v8;
  v47 = v57 & 0xFFFFFFFFFFFFF000uLL;
  v9 = ((v8 - (v57 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1;
  v10 = 0LL;
  BugCheckParameter2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v9 >> 6) + ((v9 & 0x3F) != 0)), 0x6B6C6D4Du);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  memset(PoolWithTag, 0, 4 * ((v9 >> 5) + ((v9 & 0x1F) != 0)));
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v67);
    v5 = 2;
    v46 = 2;
    v49 = 2;
  }
  v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = v12;
  v54 = v47;
  v60 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockVadRange(Object, v47, v8);
  v56 = v13;
  if ( !v13 )
  {
    v14 = -1073741819;
LABEL_66:
    MiUnlockVadRange(Object, v54, v13);
    if ( (v5 & 2) != 0 )
      KiUnstackDetachProcess(&v67, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v14;
  }
  Address = MiLocateAddress(v47);
  v16 = Address;
  v17 = 0LL;
  if ( v13 )
  {
    while ( ((1 << (*(_BYTE *)(v16 + 48) & 7)) & 0x15) != 0 )
    {
      v18 = v16;
      v19 = *(_QWORD **)(v16 + 8);
      if ( v19 )
      {
        do
        {
          v16 = (unsigned __int64)v19;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
      }
      else
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v16 || *(_QWORD *)v16 == v18 )
            break;
          v18 = v16;
        }
      }
      if ( ++v17 >= v13 )
        goto LABEL_19;
    }
    v14 = -1073741747;
    goto LABEL_66;
  }
LABEL_19:
  v50 = MiVadPureReserve(Address);
  v20 = (char *)Object + 1280;
  v61 = (char *)Object + 1280;
  v63 = *((_QWORD *)Object + 162);
  SharedVm = MiGetSharedVm((__int64)Object + 1280);
  v22 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
LABEL_20:
  v24 = v53;
  v45 = v22;
  LOBYTE(v23) = v22;
  while ( v47 <= v24 )
  {
    if ( v47 >> 12 <= (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v27 = v50;
    }
    else
    {
      v25 = Address;
      v26 = *(_QWORD **)(Address + 8);
      if ( v26 )
      {
        do
        {
          Address = (unsigned __int64)v26;
          v26 = (_QWORD *)*v26;
        }
        while ( v26 );
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v25 )
            break;
          v25 = Address;
        }
      }
      v27 = MiVadPureReserve(Address);
      v50 = v27;
      LOBYTE(v23) = v45;
    }
    if ( v27 )
    {
      if ( MiGetNextPageTable(v12, v60, 0LL, v23, 4u, &v58) != v12 )
      {
        v14 = -1073741819;
        goto LABEL_55;
      }
    }
    else
    {
      MiMakeSystemAddressValid(v12, 0LL, (*(_DWORD *)(Address + 48) >> 8) & 0x3F, v23, 1);
    }
    PteShadow = *(_QWORD *)v12;
    if ( (*(_QWORD *)v12 & 1) == 0 )
    {
      LOBYTE(v28) = v45;
      MiUnlockWorkingSetExclusive((__int64)v20, v28);
      v32 = MiGetSharedVm((__int64)v20);
      v22 = ExAcquireSpinLockExclusive(v32);
      v32[1] = 0;
      goto LABEL_20;
    }
    if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v12, *(_QWORD *)v12);
    v62 = PteShadow;
    v33 = MI_GET_PFN_FROM_PTE(&v62, v28, v29, v30);
    if ( (MiGetWsleContents(v34, v47) & 0xF) == 8 )
    {
      v5 |= 1u;
      v46 = v5;
      v49 = v5;
    }
    else
    {
      if ( *((_QWORD *)v20 + 14) <= (unsigned __int64)(*(_QWORD *)(v63 + 32) + 6LL) )
      {
        v14 = -1073741663;
        goto LABEL_55;
      }
      if ( (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) != 0 && !(unsigned int)MiLockPageTablePage(v33, 1) )
        goto LABEL_45;
      BugCheckParameter2 = MI_GET_PFN_FROM_PTE(((v47 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, v28, v35, v36);
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      {
        v38 = *(_QWORD *)(v33 + 40);
        if ( (v38 & 0x200000000000000LL) != 0 )
          MiUnlockPageTableCharges(48 * (v38 & 0xFFFFFFFFFLL) - 0x58000000000LL);
LABEL_45:
        v14 = -1073741670;
LABEL_55:
        if ( v10 )
        {
          v41 = v54 + (v10 << 12);
          v42 = (const signed __int64 *)P;
          do
          {
            --v10;
            v41 -= 4096LL;
            if ( _bittest64(v42, v10) == 1 )
              MiUnlockVa(v20, v41);
            if ( (v10 & 0xF) == 0 && (unsigned int)MiWorkingSetIsContended((__int64)v20) || KeShouldYieldProcessor() )
              MiRelockWorkingSetExclusive((__int64)v20, v45);
          }
          while ( v10 );
          LOBYTE(v5) = v46;
        }
        LOBYTE(v28) = v45;
        MiUnlockWorkingSetExclusive((__int64)v20, v28);
        v13 = v56;
        goto LABEL_66;
      }
      if ( (*(_DWORD *)(v33 + 16) & 0x400LL) != 0 )
      {
        v39 = *(_QWORD *)(v33 + 40);
        if ( (v39 & 0x200000000000000LL) != 0 )
        {
          v40 = *(_QWORD *)(qword_140388AF0 + 8 * ((v39 >> 40) & 0x3FF));
          if ( !(unsigned int)MiChargeCommit(v40, 1uLL, 0LL, v37) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v33 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            v14 = -1073741523;
            goto LABEL_55;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v40 + 6464), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v33 + 16) )
      {
        MiLockPageAndSetDirty(v33, 1);
      }
      MiSetVaAge((__int64)v20, v47, 8u);
      ++*(_QWORD *)(*((_QWORD *)v20 + 2) + 32LL);
      MiGetEffectivePagePriorityThread((__int64)CurrentThread);
      MiLockPageAtDpcInline(v33);
      MiUpdatePfnPriority(v33);
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v10);
      v24 = v53;
    }
    BugCheckParameter2 = ++v10;
    v12 = v55 + 8;
    v55 = v12;
    v47 += 4096LL;
    if ( (v12 & 0x78) != 0 || !(unsigned int)MiWorkingSetIsContended((__int64)v20) )
    {
      ShouldYieldProcessor = KeShouldYieldProcessor();
      LOBYTE(v23) = v45;
      if ( !ShouldYieldProcessor )
        continue;
    }
    MiRelockWorkingSetExclusive((__int64)v20, v45);
    LOBYTE(v23) = v45;
  }
  MiUnlockWorkingSetExclusive((__int64)v20, v23);
  MiUnlockVadRange(Object, v54, v56);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess(&v67, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v44 = v57 & 0xFFFFFFFFFFFFF000uLL;
  *v65 = v24 - (v57 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v66 = (PVOID)v44;
  return (v5 & 1) != 0 ? 0x40000019 : 0;
}

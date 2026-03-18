/*
 * XREFs of NtLockVirtualMemory @ 0x14007687C
 * Callers:
 *     <none>
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableCharges @ 0x14001769C (MiUnlockPageTableCharges.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiLockPageTablePage @ 0x1400B50F0 (MiLockPageTablePage.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiSetVaAge @ 0x1400FDA60 (MiSetVaAge.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiLockPageAndSetDirty @ 0x140100B80 (MiLockPageAndSetDirty.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 *     MiUnlockVa @ 0x140134DC8 (MiUnlockVa.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiLockUnlockCommon @ 0x1404C84A0 (MiLockUnlockCommon.c)
 *     MiUnlockVadRange @ 0x14054B6D0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14054B808 (MiLockVadRange.c)
 */

NTSTATUS __stdcall NtLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r12
  PVOID PoolWithTag; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r10
  NTSTATUS v14; // edi
  __int64 v15; // rdx
  unsigned __int64 Address; // rsi
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  char *v21; // r14
  __int64 SharedVm; // rdi
  KIRQL v23; // al
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // eax
  __int64 NextPageTable; // rax
  __int64 v31; // rdx
  _DWORD *v32; // r9
  __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // r8
  ULONG_PTR v37; // r9
  unsigned __int64 v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rsi
  const signed __int64 *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int EffectivePagePriorityThread; // edi
  LOGICAL ShouldYieldProcessor; // eax
  unsigned __int64 v49; // rdi
  KIRQL v50; // [rsp+40h] [rbp-128h]
  char v51; // [rsp+44h] [rbp-124h]
  PVOID Object; // [rsp+48h] [rbp-120h] BYREF
  int v53; // [rsp+50h] [rbp-118h]
  unsigned __int64 v54; // [rsp+58h] [rbp-110h]
  ULONG_PTR v55; // [rsp+60h] [rbp-108h]
  int v56; // [rsp+68h] [rbp-100h]
  unsigned __int64 v57; // [rsp+70h] [rbp-F8h] BYREF
  PVOID P; // [rsp+78h] [rbp-F0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v60; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v61; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v62; // [rsp+98h] [rbp-D0h]
  char v63[8]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-B8h]
  char *v66; // [rsp+B8h] [rbp-B0h]
  __int64 v67; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-A0h]
  __int64 v69; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-90h]
  PSIZE_T v71; // [rsp+E0h] [rbp-88h]
  PVOID *v72; // [rsp+E8h] [rbp-80h]
  _BYTE v73[48]; // [rsp+F0h] [rbp-78h] BYREF

  v71 = NumberOfBytesToLock;
  v72 = BaseAddress;
  v5 = 0;
  v51 = 0;
  v53 = 0;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v57, (__int64)&v64, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = v57;
  v8 = (v57 + v64 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v61 = v8;
  v54 = v57 & 0xFFFFFFFFFFFFF000uLL;
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
    KiStackAttachProcess((ULONG_PTR)Object);
    v5 = 2;
    v51 = 2;
    v53 = 2;
  }
  v55 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v54;
  v60 = v54;
  v65 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockVadRange(Object, v54, v8);
  v62 = v13;
  if ( !v13 )
  {
    v14 = -1073741819;
LABEL_63:
    MiUnlockVadRange(Object, v60, v13);
    if ( (v5 & 2) != 0 )
      KiUnstackDetachProcess(v73, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v14;
  }
  Address = MiLocateAddress(v12);
  v17 = Address;
  v18 = 0LL;
  if ( v13 )
  {
    while ( 1 )
    {
      v15 = (unsigned int)(1 << (*(_BYTE *)(v17 + 48) & 7));
      if ( (v15 & 0x15) == 0 )
        break;
      v19 = v17;
      v20 = *(_QWORD **)(v17 + 8);
      if ( v20 )
      {
        do
        {
          v17 = (unsigned __int64)v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
      }
      else
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v17 || *(_QWORD *)v17 == v19 )
            break;
          v19 = v17;
        }
      }
      if ( ++v18 >= v13 )
        goto LABEL_19;
    }
    v14 = -1073741747;
    goto LABEL_63;
  }
LABEL_19:
  v56 = MiVadPureReserve(Address, v15, v17, v18);
  v21 = (char *)Object + 1280;
  v66 = (char *)Object + 1280;
  v68 = *((_QWORD *)Object + 162);
  SharedVm = MiGetSharedVm((char *)Object + 1280);
  v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
LABEL_20:
  v26 = v57;
  v50 = v23;
  LOBYTE(v24) = v23;
  while ( v54 <= v8 )
  {
    if ( v54 >> 12 <= (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v29 = v56;
    }
    else
    {
      v27 = Address;
      v28 = *(_QWORD **)(Address + 8);
      if ( v28 )
      {
        do
        {
          Address = (unsigned __int64)v28;
          v28 = (_QWORD *)*v28;
        }
        while ( v28 );
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v27 )
            break;
          v27 = Address;
        }
      }
      v29 = MiVadPureReserve(Address, v24, v54, v25);
      v56 = v29;
      LOBYTE(v24) = v50;
    }
    LOBYTE(v25) = v24;
    if ( v29 )
    {
      NextPageTable = MiGetNextPageTable(v55, v65, 0, v25, 4, (__int64)v63);
      v32 = (_DWORD *)v55;
      if ( NextPageTable != v55 )
      {
        v14 = -1073741819;
        goto LABEL_52;
      }
    }
    else
    {
      MiMakeSystemAddressValid(v55, 1);
      v32 = (_DWORD *)v55;
    }
    if ( (*v32 & 1) == 0 )
    {
      LOBYTE(v31) = v50;
      MiUnlockWorkingSetExclusive(v21, v31);
      v33 = MiGetSharedVm(v21);
      v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v33);
      *(_DWORD *)(v33 + 4) = 0;
      goto LABEL_20;
    }
    v67 = MI_READ_PTE_LOCK_FREE(v32);
    v34 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v67) - 0x58000000000LL;
    if ( (MiGetWsleContents(v35, v54) & 0xF) == 8 )
    {
      v5 |= 1u;
      v51 = v5;
      v53 = v5;
    }
    else
    {
      if ( *((_QWORD *)v21 + 14) <= (unsigned __int64)(*(_QWORD *)(v68 + 32) + 6LL) )
      {
        v14 = -1073741663;
        goto LABEL_52;
      }
      if ( (*(_QWORD *)(v34 + 40) & 0x200000000000000LL) != 0 && !(unsigned int)MiLockPageTablePage(v34, 1LL) )
        goto LABEL_42;
      v38 = v54;
      BugCheckParameter2 = MI_GET_PFN_FROM_PTE(((v54 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, v31, v36, v37);
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      {
        v40 = *(_QWORD *)(v34 + 40);
        if ( (v40 & 0x200000000000000LL) != 0 )
          MiUnlockPageTableCharges(48 * (v40 & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
LABEL_42:
        v14 = -1073741670;
LABEL_52:
        if ( v10 )
        {
          v42 = v60 + (v10 << 12);
          v43 = (const signed __int64 *)P;
          do
          {
            --v10;
            v42 -= 4096LL;
            if ( _bittest64(v43, v10) == 1 )
              MiUnlockVa(v21, v42);
            if ( (v10 & 0xF) == 0 && (unsigned int)MiWorkingSetIsContended(v21) || KeShouldYieldProcessor() )
            {
              LOBYTE(v31) = v50;
              MiRelockWorkingSetExclusive((__int64)v21, v31);
            }
          }
          while ( v10 );
          LOBYTE(v5) = v51;
        }
        LOBYTE(v31) = v50;
        MiUnlockWorkingSetExclusive(v21, v31);
        v13 = v62;
        goto LABEL_63;
      }
      if ( (*(_DWORD *)(v34 + 16) & 0x400LL) != 0 )
      {
        v41 = *(_QWORD *)(v34 + 40);
        if ( (v41 & 0x200000000000000LL) != 0 )
        {
          v69 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v41 >> 40) & 0x3FF));
          if ( !(unsigned int)MiChargeCommit(v69, 1LL, 0LL) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2, 2);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v34 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
            v14 = -1073741523;
            goto LABEL_52;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v69 + 6272), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v34 + 16) )
      {
        MiLockPageAndSetDirty(v34, 1LL);
      }
      LOBYTE(v39) = 8;
      MiSetVaAge(v21, v38, v39);
      ++*(_QWORD *)(*((_QWORD *)v21 + 2) + 32LL);
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v44, v45, v46);
      MiLockPageAtDpcInline(v34);
      MiUpdatePfnPriority(v34, EffectivePagePriorityThread, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v10);
      v26 = v57;
      v37 = v55;
    }
    BugCheckParameter2 = ++v10;
    v55 = v37 + 8;
    v54 += 4096LL;
    if ( (((_BYTE)v37 + 8) & 0x78) != 0 || !(unsigned int)MiWorkingSetIsContended(v21) )
    {
      ShouldYieldProcessor = KeShouldYieldProcessor();
      v8 = v61;
      LOBYTE(v24) = v50;
      if ( !ShouldYieldProcessor )
        continue;
    }
    LOBYTE(v24) = v50;
    MiRelockWorkingSetExclusive((__int64)v21, v24);
    v8 = v61;
    LOBYTE(v24) = v50;
  }
  MiUnlockWorkingSetExclusive(v21, v24);
  MiUnlockVadRange(Object, v60, v62);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess(v73, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v49 = v26 & 0xFFFFFFFFFFFFF000uLL;
  *v71 = v8 - v49 + 4096;
  *v72 = (PVOID)v49;
  return (v5 & 1) != 0 ? 0x40000019 : 0;
}

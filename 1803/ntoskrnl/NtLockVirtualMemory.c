/*
 * XREFs of NtLockVirtualMemory @ 0x14013B8F4
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTablePage @ 0x1400211A0 (MiLockPageTablePage.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiUnlockVa @ 0x14004EACC (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x14004ECC4 (MiUnlockPageTableCharges.c)
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAndSetDirty @ 0x1401248B8 (MiLockPageAndSetDirty.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiUnlockVadRange @ 0x1404BFFA8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1404C0468 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  PVOID PoolWithTag; // rax
  PVOID v11; // r12
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r10
  unsigned __int64 Address; // r12
  unsigned __int64 v15; // r8
  unsigned __int64 i; // r9
  unsigned __int64 v17; // r14
  char *v18; // rsi
  char v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // r11
  ULONG_PTR v23; // r15
  __int64 v24; // r8
  __int64 v25; // r10
  unsigned __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // rdi
  unsigned int EffectivePagePriorityThread; // edi
  char v30; // al
  BOOL v31; // edi
  bool v32; // zf
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  ULONG_PTR v35; // r14
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  _QWORD **v39; // rax
  _QWORD *j; // rcx
  unsigned __int64 v41; // rdi
  unsigned __int64 NextPageTable; // rax
  unsigned __int8 v43; // r12
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r15
  const signed __int64 *v47; // rdi
  int v48; // r12d
  __int64 v49; // rcx
  NTSTATUS v50; // edi
  unsigned __int64 v51; // rcx
  _QWORD **v52; // rax
  _QWORD *k; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int8 v56; // [rsp+40h] [rbp-128h]
  int v57; // [rsp+44h] [rbp-124h]
  int v58; // [rsp+44h] [rbp-124h]
  char v59; // [rsp+48h] [rbp-120h]
  PVOID Object; // [rsp+50h] [rbp-118h] BYREF
  int v61; // [rsp+58h] [rbp-110h]
  ULONG_PTR v62; // [rsp+60h] [rbp-108h]
  unsigned __int64 v63; // [rsp+68h] [rbp-100h]
  unsigned __int64 v64; // [rsp+70h] [rbp-F8h]
  PVOID P; // [rsp+78h] [rbp-F0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v67; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v68; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v69; // [rsp+98h] [rbp-D0h]
  int v70[2]; // [rsp+A0h] [rbp-C8h] BYREF
  int v71; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+B8h] [rbp-B0h]
  char *v74; // [rsp+C0h] [rbp-A8h]
  __int64 v75; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-90h]
  unsigned __int64 v78; // [rsp+E0h] [rbp-88h]
  PSIZE_T v79; // [rsp+E8h] [rbp-80h]
  PVOID *v80; // [rsp+F0h] [rbp-78h]
  _BYTE v81[48]; // [rsp+F8h] [rbp-70h] BYREF

  v79 = NumberOfBytesToLock;
  v80 = BaseAddress;
  v5 = 0;
  v59 = 0;
  v61 = 0;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)v70, (__int64)&v72, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)v70;
  v8 = (*(_QWORD *)v70 + v72 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v78 = v8;
  v63 = *(_QWORD *)v70 & 0xFFFFFFFFFFFFF000uLL;
  v9 = ((v8 - (*(_QWORD *)v70 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1;
  v64 = 0LL;
  BugCheckParameter2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v9 >> 6) + ((v9 & 0x3F) != 0)), 0x6B6C6D4Du);
  v11 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  memset(PoolWithTag, 0, 4 * ((v9 >> 5) + ((v9 & 0x1F) != 0)));
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v81);
    v5 = 2;
    v59 = 2;
    v61 = 2;
  }
  v62 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v63;
  v67 = v63;
  v73 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockVadRange(Object, v63, v8, 0LL);
  v69 = v13;
  if ( !v13 )
  {
    v50 = -1073741819;
    goto LABEL_85;
  }
  Address = MiLocateAddress(v12);
  v15 = Address;
  for ( i = 0LL; i < v13; ++i )
  {
    if ( ((1 << (*(_BYTE *)(v15 + 48) & 7)) & 0x15) == 0 )
    {
      v50 = -1073741747;
      goto LABEL_84;
    }
    v38 = v15;
    v39 = *(_QWORD ***)(v15 + 8);
    if ( v39 )
    {
      v15 = *(_QWORD *)(v15 + 8);
      for ( j = *v39; j; j = (_QWORD *)*j )
        v15 = (unsigned __int64)j;
    }
    else
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v15 || *(_QWORD *)v15 == v38 )
          break;
        v38 = v15;
      }
    }
  }
  v57 = MiVadPureReserve(Address);
  v17 = 0LL;
  v18 = (char *)Object + 1280;
  v74 = (char *)Object + 1280;
  v76 = *((_QWORD *)Object + 162);
LABEL_9:
  v19 = MiLockWorkingSetShared((__int64)v18);
  v56 = v19;
LABEL_10:
  v20 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v12 > v8 )
    {
      if ( v17 )
      {
        MiUnlockPageTableInternal((__int64)v18, v17);
        v19 = v56;
      }
      MiUnlockWorkingSetShared((__int64)v18, v19, v20);
      MiUnlockVadRange(Object, v67, v69, 0LL);
      if ( (v5 & 2) != 0 )
        KiUnstackDetachProcess((__int64)v81, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v41 = *(_QWORD *)v70 & 0xFFFFFFFFFFFFF000uLL;
      *v79 = v8 - (*(_QWORD *)v70 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v80 = (PVOID)v41;
      return (v5 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v12 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v51 = Address;
      v52 = *(_QWORD ***)(Address + 8);
      if ( v52 )
      {
        Address = *(_QWORD *)(Address + 8);
        for ( k = *v52; k; k = (_QWORD *)*k )
          Address = (unsigned __int64)k;
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v51 )
            break;
          v51 = Address;
        }
      }
      v57 = MiVadPureReserve(Address);
    }
    v68 = ((v12 >> 18) & 0x3FFFFFF8) + v20;
    if ( v17 != v68 )
    {
      if ( v17 )
      {
        MiUnlockPageTableInternal((__int64)v18, v17);
        v19 = v56;
      }
      v17 = 0LL;
      if ( v57 )
      {
        NextPageTable = MiGetNextPageTable(v62, v73, 0LL, v19, 0, &v71);
        if ( NextPageTable )
          v17 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v62 )
        {
          v58 = -1073741819;
          goto LABEL_62;
        }
      }
      else
      {
        v35 = v62;
        MiMakeSystemAddressValid(v62, 0LL, (*(_DWORD *)(Address + 48) >> 8) & 0x3F, v19, 0);
        v17 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_DWORD *)v62 & 1) == 0 )
    {
      MiUnlockPageTableInternal((__int64)v18, v17);
      v17 = 0LL;
      v68 = 0LL;
      MiUnlockWorkingSetShared((__int64)v18, v56, v36);
      goto LABEL_9;
    }
    v75 = MI_READ_PTE_LOCK_FREE(v62);
    v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v75);
    v23 = v22 + 48 * ((v21 >> 12) & 0xFFFFFFFFFLL);
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v12) & 0xF) == 8 )
    {
      v5 |= 1u;
      v59 = v5;
      v61 = v5;
      goto LABEL_24;
    }
    if ( *((_QWORD *)v18 + 14) <= (unsigned __int64)(*(_QWORD *)(v76 + 32) + 6LL) )
    {
      v58 = -1073741663;
      goto LABEL_62;
    }
    if ( (v25 & *(_QWORD *)(v23 + 40)) != 0 && !(unsigned int)MiLockPageTablePage(v23, 1) )
      goto LABEL_105;
    v26 = MI_READ_PTE_LOCK_FREE(v68);
    BugCheckParameter2 = v27 + 48 * ((v26 >> 12) & 0xFFFFFFFFFLL);
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      break;
    v28 = 0LL;
    if ( (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
    {
      v34 = *(_QWORD *)(v23 + 40);
      if ( (v34 & 0x200000000000000LL) != 0 )
      {
        v28 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v34 >> 40) & 0x3FF));
        if ( !(unsigned int)MiChargeCommit(v28, 1uLL, 0) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2, 2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
          v58 = -1073741523;
          goto LABEL_62;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v28 + 7552), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(v23 + 16) )
    {
      MiLockPageAndSetDirty(v23, 1);
    }
    if ( !(unsigned int)MiSetVaAge((__int64)v18, v63, 8u) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2, 2);
      v55 = *(_QWORD *)(v23 + 40);
      if ( (v55 & 0x200000000000000LL) != 0 )
      {
        MiUnlockPageTableCharges(48 * (v55 & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
        if ( (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v28, 1uLL);
      }
      goto LABEL_105;
    }
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    MiLockPageAtDpcInline(v23);
    MiUpdatePfnPriority(v23, EffectivePagePriorityThread, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _bittestandset64((signed __int64 *)P, v64);
    v12 = v63;
LABEL_24:
    BugCheckParameter2 = ++v64;
    v30 = v62 + 8;
    v62 += 8LL;
    v63 = v12 + 4096;
    v31 = 0;
    v8 = v78;
    if ( v63 <= v78 && (v30 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended((__int64)v18) || (unsigned int)MiPageTableLockIsContended(v37, v17) )
      {
LABEL_27:
        MiUnlockPageTableInternal((__int64)v18, v17);
        MiUnlockWorkingSetShared((__int64)v18, v56, v33);
        v17 = 0LL;
        MiLockWorkingSetShared((__int64)v18);
        v12 = v63;
        v19 = v56;
        goto LABEL_10;
      }
      v31 = KeShouldYieldProcessor() != 0;
    }
    v32 = !v31;
    v12 = v63;
    v19 = v56;
    v20 = 0xFFFFF6FB40000000uLL;
    if ( !v32 )
      goto LABEL_27;
  }
  v54 = *(_QWORD *)(v23 + 40);
  if ( (v54 & 0x200000000000000LL) != 0 )
    MiUnlockPageTableCharges(48 * (v54 & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
LABEL_105:
  v58 = -1073741670;
LABEL_62:
  v43 = v56;
  if ( v17 )
    MiUnlockPageTableInternal((__int64)v18, v17);
  v44 = 0LL;
  v45 = v64;
  v46 = v67 + (v64 << 12);
  v47 = (const signed __int64 *)P;
  while ( 2 )
  {
    if ( v45 )
    {
      --v45;
      v46 -= 4096LL;
      if ( _bittest64(v47, v45) == 1 )
      {
        if ( v44 != ((v46 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v44 )
            MiUnlockPageTableInternal((__int64)v18, v44);
          v44 = ((v46 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockPageTableInternal((__int64)v18, v44, 0LL);
        }
        MiUnlockVa((__int64)v18, v46);
      }
      v48 = 0;
      if ( (v45 & 0xF) != 0 )
        goto LABEL_70;
      if ( !(unsigned int)MiWorkingSetIsContended((__int64)v18)
        && (!v44 || !(unsigned int)MiPageTableLockIsContended(v49, v44)) )
      {
        if ( KeShouldYieldProcessor() )
          v48 = 1;
LABEL_70:
        v32 = v48 == 1;
        v43 = v56;
        if ( !v32 )
          continue;
      }
      if ( v44 )
        MiUnlockPageTableInternal((__int64)v18, v44);
      v43 = v56;
      MiUnlockWorkingSetShared((__int64)v18, v56, v24);
      MiLockWorkingSetShared((__int64)v18);
      v44 = 0LL;
      continue;
    }
    break;
  }
  LOBYTE(v5) = v59;
  v50 = v58;
  if ( v44 )
    MiUnlockPageTableInternal((__int64)v18, v44);
  MiUnlockWorkingSetShared((__int64)v18, v43, v24);
  v13 = v69;
LABEL_84:
  v11 = P;
LABEL_85:
  MiUnlockVadRange(Object, v67, v13, 0LL);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v81, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(v11, 0);
  return v50;
}

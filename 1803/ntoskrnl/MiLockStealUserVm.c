/*
 * XREFs of MiLockStealUserVm @ 0x1400D5854
 * Callers:
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiUnlockStealVm @ 0x14003F9B0 (MiUnlockStealVm.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiSmallVaStillMapsFrame @ 0x1400CD0D0 (MiSmallVaStillMapsFrame.c)
 *     MiPrepareAttachThread @ 0x1400D4D68 (MiPrepareAttachThread.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400D4DC8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetTopLevelPfn @ 0x1400D5C50 (MiGetTopLevelPfn.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiClusterVadActive @ 0x140269260 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r14
  BOOL v8; // eax
  __int64 v9; // r13
  __int64 TopLevelPfn; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  int v14; // ebx
  char *v15; // r8
  char v16; // al
  unsigned __int64 Address; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // r10
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 SharedVm; // rbx
  __int64 valid; // rax
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  unsigned int v29; // [rsp+30h] [rbp-79h]
  BOOL v30; // [rsp+34h] [rbp-75h]
  unsigned __int64 v31; // [rsp+38h] [rbp-71h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-69h]
  __int64 v33; // [rsp+48h] [rbp-61h]
  __int64 v34; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v35[4]; // [rsp+58h] [rbp-51h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-31h] BYREF
  char v37; // [rsp+90h] [rbp-19h] BYREF

  v32 = a3;
  v7 = (__int64)(a3 << 25) >> 16;
  v8 = v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL;
  v30 = v8;
  v29 = 2;
  v9 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  v33 = v9;
  TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
  v11 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v12 = v11 + 1280;
  if ( TopLevelPfn != BugCheckParameter2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v11 == PsIdleProcess
    || (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v9 && (*(_DWORD *)(v11 + 1740) & 0x1000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    return 0LL;
  }
  v13 = a2;
  if ( (_KPROCESS *)v11 == KeGetCurrentThread()->ApcState.Process )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    goto LABEL_12;
  }
  if ( !MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    return 0LL;
  }
  v14 = MiPrepareAttachThread(v11, v11 + 1280);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(v13);
  if ( !v14 )
    return 0LL;
  v15 = (char *)(a4 + 72);
  *(_QWORD *)(a4 + 64) = v12;
  if ( a4 == -72 )
  {
    CurrentThread = KeGetCurrentThread();
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex )
      KeBugCheckEx(5u, v11, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
    v15 = &v37;
  }
  KiStackAttachProcess((_KPROCESS *)v11, 1u, (__int64)v15);
LABEL_12:
  *(_QWORD *)(a4 + 24) = v12;
  *(_BYTE *)(a4 + 33) = v30;
  if ( v30 )
  {
    SharedVm = MiGetSharedVm(v12);
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  else
  {
    v16 = MiLockWorkingSetShared(v12);
  }
  *(_BYTE *)(a4 + 32) = v16;
  if ( (*(_DWORD *)(a4 + 8) & 8) != 0 )
  {
    v18 = 0LL;
  }
  else
  {
    Address = MiLocateAddress(v7);
    v18 = Address;
    if ( !Address )
      goto LABEL_45;
    if ( ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x15) == 0 )
    {
      if ( (*(_DWORD *)(Address + 48) & 7) != 6 )
      {
LABEL_44:
        v29 = 0;
        goto LABEL_45;
      }
      *(_DWORD *)(a4 + 8) |= 0x800u;
    }
  }
  if ( !v30 )
  {
    v31 = 0LL;
    if ( (unsigned int)MiFastLockLeafPageTable(v12, v7)
      && (MiFillPteHierarchy(v7, v35), v20 = v35[v19], v21 = v35[(int)v19 - 1], v31 = v21, v20) )
    {
      v22 = v32;
    }
    else
    {
      v22 = v32;
      valid = MiLockLowestValidPageTable(v12, v32, &v31);
      v21 = v31;
      v20 = valid;
    }
    *(_QWORD *)(a4 + 40) = v20;
    if ( v21 != v22 )
      goto LABEL_45;
    v34 = MI_READ_PTE_LOCK_FREE(v21);
    if ( (v34 & 1) == 0 )
      goto LABEL_45;
    v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v34);
    if ( ((v23 >> 12) & 0xFFFFFFFFFLL) != v33 )
      goto LABEL_45;
    goto LABEL_24;
  }
  if ( MiSmallVaStillMapsFrame(v7) )
  {
    v22 = v32;
LABEL_24:
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0
      || (unsigned int)MiIsPfnFileOnly(BugCheckParameter2) == 1 )
    {
      goto LABEL_45;
    }
    if ( ((*(_DWORD *)a4 & 0x800000) == 0
       || !v18
       || (*(_DWORD *)(v18 + 48) & 0x24000) != 0x24000
       || (unsigned int)MiClusterVadActive(v18, BugCheckParameter2, a4 + 120) != 1)
      && ((*(_DWORD *)(a4 + 8) & 0x800) == 0 || !MiRotatedToFrameBuffer(v22)) )
    {
      return 1LL;
    }
    goto LABEL_44;
  }
LABEL_45:
  MiUnlockStealVm(a4);
  return v29;
}

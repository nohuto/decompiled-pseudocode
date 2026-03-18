/*
 * XREFs of MmCleanProcessAddressSpace @ 0x14047ABC0
 * Callers:
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 * Callees:
 *     MiCleanWorkingSet @ 0x1400066F8 (MiCleanWorkingSet.c)
 *     MiUnlinkWorkingSet @ 0x1400178A8 (MiUnlinkWorkingSet.c)
 *     MiCleanCfg @ 0x14002F780 (MiCleanCfg.c)
 *     ExFreeSvmAsid @ 0x140033488 (ExFreeSvmAsid.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     PsReturnProcessQuota @ 0x140062C84 (PsReturnProcessQuota.c)
 *     MiBeginProcessClean @ 0x14007E820 (MiBeginProcessClean.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiVadDeleted @ 0x1400CE370 (MiVadDeleted.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400CE400 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     MiClearCommitReleaseState @ 0x14020B124 (MiClearCommitReleaseState.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 *     MiDereferenceSession @ 0x14044DF60 (MiDereferenceSession.c)
 *     MiCleanVad @ 0x14047AE9C (MiCleanVad.c)
 *     MiContractWsSwapPageFile @ 0x1404C90EC (MiContractWsSwapPageFile.c)
 *     MiCleanPhysicalProcessPages @ 0x1406B87E4 (MiCleanPhysicalProcessPages.c)
 */

void __fastcall MmCleanProcessAddressSpace(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r15
  int v4; // ecx
  unsigned int v5; // eax
  struct _KTHREAD *CurrentThread; // rdi
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r14
  ULONG_PTR *v10; // r13
  _QWORD *v11; // rcx
  _QWORD *i; // rbx
  _QWORD **v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *j; // rax
  BOOL v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int16 v21; // ax
  ULONG_PTR *ProcessPartition; // rax
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(unsigned int *)(a1 + 772);
  v2 = a1 + 1280;
  v4 = *(_DWORD *)(a1 + 772) & 0x20;
  if ( !v4 || (*(_BYTE *)(v2 + 195) & 0xC0) != 0xC0 )
  {
    if ( v4 || (v5 = v1 & 0xC00, v5 <= 0x400) )
    {
      if ( (v1 & 0x10000) == 0 )
        return;
    }
    else
    {
      if ( v5 != 2048 )
        goto LABEL_5;
      PsReturnProcessQuota((struct _KPROCESS *)a1, v1, *(_QWORD *)(v2 + 112) - 4LL);
      ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(*(_QWORD *)(v2 + 112) - 4LL);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, *(_QWORD *)(v2 + 112) - 4LL);
      v23 = *(_DWORD *)(a1 + 772);
      do
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 772), v23 & 0xFFFFF3FF | 0x400, v23);
      }
      while ( v24 != v23 );
      if ( (*(_DWORD *)(a1 + 772) & 0x10000) == 0 )
        return;
    }
    MiDereferenceSession();
    return;
  }
LABEL_5:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v7 = MiBeginProcessClean((__int64)CurrentThread, a1);
  v8 = MiGetProcessPartition(a1);
  v9 = *(_QWORD *)(a1 + 1296);
  v10 = (ULONG_PTR *)v8;
LABEL_6:
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  v11 = *(_QWORD **)(a1 + 1576);
  for ( i = 0LL; v11; v11 = (_QWORD *)*v11 )
    i = v11;
  if ( i )
  {
    MiReferenceVad((__int64)i);
    while ( 1 )
    {
      v13 = (_QWORD **)i[1];
      v14 = (__int64)i;
      v15 = i;
      if ( v13 )
      {
        i = (_QWORD *)i[1];
        for ( j = *v13; j; j = (_QWORD *)*j )
          i = j;
      }
      else
      {
        for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*i == v15 )
            break;
          v15 = i;
        }
      }
      if ( i )
        MiReferenceVad((__int64)i);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiLockVad((__int64)CurrentThread, v14);
      if ( (*(_DWORD *)(v14 + 48) & 0x200000) != 0 )
        MiUnlockAndDereferenceVad((char *)v14);
      else
        MiCleanVad((PVOID)v14);
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, (__int64)i);
      if ( (unsigned int)MiVadDeleted((__int64)i) )
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)i);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)i);
        MiCleanVad(i);
        goto LABEL_6;
      }
      MiUnlockVad((__int64)CurrentThread, (__int64)i);
    }
  }
  *(_QWORD *)(v9 + 160) = &Event;
  v17 = _InterlockedDecrement((volatile signed __int32 *)(v9 + 136)) != 0;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v17 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(v2 + 195) & 0xC0) == 0xC0 )
    MiClearCommitReleaseState(v2);
  ExFreeSvmAsid();
  MiCleanCfg();
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  *(_QWORD *)(v9 + 160) = 0LL;
  if ( *(_QWORD *)(a1 + 1032) )
    MiCleanPhysicalProcessPages(a1);
  v18 = *(_QWORD *)(a1 + 1064);
  if ( v18 )
  {
    v21 = *(_WORD *)(v18 + 8);
    if ( v21 == 332 || v21 == 452 )
    {
      if ( *(_QWORD *)v18 )
        *(_QWORD *)v18 = 0LL;
    }
  }
  v19 = MiCleanWorkingSet(a1);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  PsReturnProcessQuota((struct _KPROCESS *)a1, v20, v19);
  if ( v10 == &MiSystemPartition )
    MiReturnResidentAvailable(v19);
  else
    MiReturnPartitionResidentAvailable((__int64)v10, v19);
  MiUnlinkWorkingSet(v2, 0LL);
  if ( (*(_DWORD *)(a1 + 772) & 0x10000) != 0 )
    MiDereferenceSession();
  if ( v7 )
    MiContractWsSwapPageFile(v10);
}

/*
 * XREFs of MmCleanProcessAddressSpace @ 0x1404D2F70
 * Callers:
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14003D780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     PsReturnProcessQuota @ 0x1400B8758 (PsReturnProcessQuota.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiBeginProcessClean @ 0x140124890 (MiBeginProcessClean.c)
 *     MiCleanCfg @ 0x140126DCC (MiCleanCfg.c)
 *     MiCleanWorkingSet @ 0x140127068 (MiCleanWorkingSet.c)
 *     ExFreeSvmAsid @ 0x1401288A8 (ExFreeSvmAsid.c)
 *     MiClearCommitReleaseState @ 0x140212020 (MiClearCommitReleaseState.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 *     MiContractWsSwapPageFile @ 0x140444648 (MiContractWsSwapPageFile.c)
 *     MiCleanVad @ 0x1404D3230 (MiCleanVad.c)
 *     MiDereferenceSession @ 0x14058B274 (MiDereferenceSession.c)
 *     MiCleanPhysicalProcessPages @ 0x1406E54AC (MiCleanPhysicalProcessPages.c)
 */

void __fastcall MmCleanProcessAddressSpace(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // r15
  unsigned int v4; // ecx
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
  ULONG_PTR v19; // rbx
  __int64 v20; // rdx
  __int16 v21; // ax
  ULONG_PTR *ProcessPartition; // rax
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF

  v3 = a1 + 1280;
  v4 = *(_DWORD *)(a1 + 772);
  if ( (v4 & 0x20) == 0 )
  {
    v5 = (v4 >> 10) & 3;
    if ( v5 > 1 )
    {
      if ( v5 != 2 )
        goto LABEL_4;
      PsReturnProcessQuota(a1, a2, *(_QWORD *)(v3 + 112) - 4LL);
      ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(*(_QWORD *)(v3 + 112) - 4LL);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, *(_QWORD *)(v3 + 112) - 4LL);
      v23 = *(_DWORD *)(a1 + 772);
      do
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 772), v23 & 0xFFFFF3FF | 0x400, v23);
      }
      while ( v24 != v23 );
      if ( (*(_DWORD *)(a1 + 772) & 0x10000) == 0 )
        return;
LABEL_40:
      MiDereferenceSession();
      return;
    }
LABEL_39:
    if ( (v4 & 0x10000) == 0 )
      return;
    goto LABEL_40;
  }
  if ( (*(_BYTE *)(v3 + 195) & 0x60) != 0x60 )
    goto LABEL_39;
LABEL_4:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v7 = MiBeginProcessClean((__int64)CurrentThread, a1);
  v8 = MiGetProcessPartition(a1);
  v9 = *(_QWORD *)(a1 + 1296);
  v10 = (ULONG_PTR *)v8;
LABEL_5:
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
        goto LABEL_5;
      }
      MiUnlockVad((__int64)CurrentThread, (__int64)i);
    }
  }
  *(_QWORD *)(v9 + 160) = &Event;
  v17 = _InterlockedDecrement((volatile signed __int32 *)(v9 + 136)) != 0;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v17 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(v3 + 195) & 0x60) == 0x60 )
    MiClearCommitReleaseState(v3);
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
  PsReturnProcessQuota(a1, v20, v19);
  if ( v10 == &MiSystemPartition )
    MiReturnResidentAvailable(v19);
  else
    MiReturnPartitionResidentAvailable((__int64)v10, v19);
  if ( (*(_DWORD *)(a1 + 772) & 0x10000) != 0 )
    MiDereferenceSession();
  if ( v7 )
    MiContractWsSwapPageFile((__int64)v10);
}

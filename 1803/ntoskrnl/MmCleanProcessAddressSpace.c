/*
 * XREFs of MmCleanProcessAddressSpace @ 0x140595928
 * Callers:
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 * Callees:
 *     PsReturnProcessQuota @ 0x1400703DC (PsReturnProcessQuota.c)
 *     MiCleanWorkingSet @ 0x14007A220 (MiCleanWorkingSet.c)
 *     MiBeginProcessClean @ 0x14007F22C (MiBeginProcessClean.c)
 *     MiCleanCfg @ 0x1400C6198 (MiCleanCfg.c)
 *     ExFreeSvmAsid @ 0x1400C8CA8 (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x1400C9564 (MiDeleteCloneZombies.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiClearCommitReleaseState @ 0x140250524 (MiClearCommitReleaseState.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 *     MiContractWsSwapPageFile @ 0x14052C90C (MiContractWsSwapPageFile.c)
 *     MiDereferenceSession @ 0x140577AC4 (MiDereferenceSession.c)
 *     MiCleanVad @ 0x140595BD8 (MiCleanVad.c)
 *     MiCleanPhysicalProcessPages @ 0x14074F9E0 (MiCleanPhysicalProcessPages.c)
 */

void __fastcall MmCleanProcessAddressSpace(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned int v4; // ecx
  unsigned int v5; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  ULONG_PTR *v9; // r13
  int v10; // r12d
  _QWORD *v11; // rax
  _QWORD *i; // rbx
  _QWORD **v13; // rax
  _DWORD *v14; // r14
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rcx
  BOOL v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int16 v28; // ax
  bool v29; // zf
  ULONG_PTR *ProcessPartition; // rax
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  int v34; // [rsp+80h] [rbp+8h]

  v3 = a1 + 1280;
  v4 = *(_DWORD *)(a1 + 772);
  if ( (v4 & 0x20) == 0 )
  {
    v5 = (v4 >> 10) & 3;
    if ( v5 > 1 )
    {
      if ( v5 != 2 )
        goto LABEL_4;
      PsReturnProcessQuota((struct _KPROCESS *)a1, a2, *(_QWORD *)(v3 + 112) - 4LL);
      ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(*(_QWORD *)(v3 + 112) - 4LL);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, *(_QWORD *)(v3 + 112) - 4LL);
      v31 = *(_DWORD *)(a1 + 772);
      do
      {
        v32 = v31;
        v31 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 772), v31 & 0xFFFFF3FF | 0x400, v31);
      }
      while ( v32 != v31 );
      v29 = (*(_DWORD *)(a1 + 772) & 0x10000) == 0;
LABEL_43:
      if ( !v29 )
        MiDereferenceSession();
      return;
    }
LABEL_42:
    v29 = (v4 & 0x10000) == 0;
    goto LABEL_43;
  }
  if ( (*(_BYTE *)(v3 + 187) & 0x60) != 0x60 )
    goto LABEL_42;
LABEL_4:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v34 = MiBeginProcessClean((__int64)CurrentThread, a1);
  v7 = MiGetProcessPartition(a1);
  v8 = *(_QWORD *)(a1 + 1296);
  v9 = (ULONG_PTR *)v7;
LABEL_5:
  while ( 1 )
  {
    v10 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v11 = *(_QWORD **)(a1 + 1576);
    i = 0LL;
    while ( v11 )
    {
      i = v11;
      v11 = (_QWORD *)*v11;
    }
    if ( !i )
      break;
    MiReferenceVad((__int64)i);
    while ( 1 )
    {
      v13 = (_QWORD **)i[1];
      v14 = i;
      v15 = i;
      if ( v13 )
      {
        v21 = *v13;
        for ( i = (_QWORD *)i[1]; v21; v21 = (_QWORD *)*v21 )
          i = v21;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v15 )
            break;
          v15 = i;
        }
      }
      if ( i )
        MiReferenceVad((__int64)i);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiLockVad((__int64)CurrentThread, (__int64)v14);
      if ( (v14[12] & 0x40000) != 0 )
      {
        MiUnlockAndDereferenceVad(v14, v16, v17, v18);
      }
      else if ( (unsigned int)MiCleanVad(v14) )
      {
        v10 = 1;
      }
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, (__int64)i);
      if ( (unsigned int)MiVadDeleted((__int64)i) )
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)i, v19, v20);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)i);
        MiCleanVad(i);
        goto LABEL_5;
      }
      MiUnlockVad((__int64)CurrentThread, (__int64)i, v19, v20);
    }
    if ( !v10 )
      break;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  }
  *(_QWORD *)(v8 + 248) = &Event;
  v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 224), 0xFFFFFFFF) != 1;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v22 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x60 )
    MiClearCommitReleaseState(v3);
  ExFreeSvmAsid();
  MiCleanCfg();
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  *(_QWORD *)(v8 + 248) = 0LL;
  if ( *(_QWORD *)(a1 + 1032) )
    MiCleanPhysicalProcessPages(a1);
  v23 = *(_QWORD *)(a1 + 1064);
  if ( v23 )
  {
    v28 = *(_WORD *)(v23 + 8);
    if ( v28 == 332 || v28 == 452 )
    {
      if ( *(_QWORD *)v23 )
        *(_QWORD *)v23 = 0LL;
    }
  }
  MiDeleteCloneZombies(a1, 0);
  v24 = MiCleanWorkingSet(a1);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v25, v26);
  PsReturnProcessQuota((struct _KPROCESS *)a1, v27, v24);
  if ( v9 == &MiSystemPartition )
    MiReturnResidentAvailable(v24);
  else
    MiReturnPartitionResidentAvailable((__int64)v9, v24);
  if ( (*(_DWORD *)(a1 + 772) & 0x10000) != 0 )
    MiDereferenceSession();
  if ( v34 )
    MiContractWsSwapPageFile((__int64)v9);
}

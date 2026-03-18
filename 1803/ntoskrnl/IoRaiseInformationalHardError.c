/*
 * XREFs of IoRaiseInformationalHardError @ 0x140236B00
 * Callers:
 *     MiCauseOverCommitPopup @ 0x140265884 (MiCauseOverCommitPopup.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     FsRtlLogCcFlushError @ 0x140714660 (FsRtlLogCcFlushError.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeInitializeApc @ 0x140132910 (KeInitializeApc.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  int v6; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  PVOID v9; // rcx
  PVOID v11; // rsi
  void *v12; // rcx
  KIRQL v13; // si
  __int64 v14; // r9
  const void *v15; // rcx
  unsigned __int16 v16; // ax
  __int64 v17; // rdi
  int v18; // ebp
  const void *v19; // rcx
  unsigned __int16 v20; // ax
  _QWORD *v21; // rax

  if ( !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  if ( Thread )
  {
    v6 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 4) & 1;
  }
  else
  {
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10) != 0 )
      return 0;
    v6 = 0;
  }
  if ( v6
    || ErrorStatus == -1073741283
    || ErrorStatus == -1073741500
    || ErrorStatus == 1073741848
    || !Thread && dword_1403C849C >= 25 )
  {
    return 0;
  }
  if ( dword_1403C84BC > 25 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x72456F49u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x28uLL);
  *((_DWORD *)v8 + 4) = ErrorStatus;
  if ( String && String->Length )
  {
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, String->Length, 0x72456F49u);
    if ( !v9 )
    {
LABEL_17:
      ExFreePoolWithTag(v8, 0);
      return 0;
    }
    *((_WORD *)v8 + 12) = String->Length;
    *((_WORD *)v8 + 13) = String->Length;
    v8[4] = v9;
    memmove(v9, String->Buffer, String->Length);
  }
  if ( !Thread )
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_1403C8490);
    if ( dword_1403C849C < 25 )
    {
      if ( !IopCurrentHardError
        || *((_DWORD *)v8 + 4) != *(_DWORD *)(IopCurrentHardError + 16)
        || ((v15 = (const void *)v8[4]) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
        && ((v16 = *((_WORD *)v8 + 12), v16 != *(_WORD *)(IopCurrentHardError + 24))
         || memcmp(v15, *(const void **)(IopCurrentHardError + 32), v16)) )
      {
        v17 = qword_1403C8480;
        if ( (__int64 *)qword_1403C8480 == &qword_1403C8480 )
        {
LABEL_41:
          v21 = (_QWORD *)qword_1403C8488;
          if ( *(__int64 **)qword_1403C8488 != &qword_1403C8480 )
            __fastfail(3u);
          *v8 = &qword_1403C8480;
          v8[1] = v21;
          *v21 = v8;
          qword_1403C8488 = (__int64)v8;
          KeReleaseSemaphoreEx((__int64)&byte_1403C8498, 0, 1, v14, 0);
          if ( !byte_1403C84B8 )
          {
            byte_1403C84B8 = 1;
            ExQueueWorkItem(&IopHardError, DelayedWorkQueue);
          }
          KxReleaseSpinLock(&qword_1403C8490);
          __writecr8(v13);
          return 1;
        }
        v18 = *((_DWORD *)v8 + 4);
        while ( 1 )
        {
          if ( v18 == *(_DWORD *)(v17 + 16) )
          {
            v19 = (const void *)v8[4];
            if ( !v19 && !*(_QWORD *)(v17 + 32) )
              break;
            v20 = *((_WORD *)v8 + 12);
            if ( v20 == *(_WORD *)(v17 + 24) && !memcmp(v19, *(const void **)(v17 + 32), v20) )
              break;
          }
          v17 = *(_QWORD *)v17;
          if ( (__int64 *)v17 == &qword_1403C8480 )
            goto LABEL_41;
        }
      }
    }
    KxReleaseSpinLock(&qword_1403C8490);
    __writecr8(v13);
LABEL_22:
    v12 = (void *)v8[4];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_17;
  }
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x4350414Bu);
  if ( !v11 )
    goto LABEL_22;
  _InterlockedIncrement(&dword_1403C84BC);
  KeInitializeApc(
    (__int64)v11,
    (__int64)Thread,
    0,
    (__int64)PspQueueApcSpecialApc,
    0LL,
    (__int64)IopRaiseInformationalHardError,
    0,
    (__int64)v8);
  KeInsertQueueApc((__int64)v11, 0LL, 0LL, 0);
  return 1;
}

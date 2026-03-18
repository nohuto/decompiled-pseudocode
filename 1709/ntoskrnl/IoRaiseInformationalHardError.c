/*
 * XREFs of IoRaiseInformationalHardError @ 0x1401F9810
 * Callers:
 *     MiCauseOverCommitPopup @ 0x1402222C8 (MiCauseOverCommitPopup.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     FsRtlLogCcFlushError @ 0x1406AFEC0 (FsRtlLogCcFlushError.c)
 * Callees:
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  const void *v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // rdi
  int v17; // ebp
  const void *v18; // rcx
  unsigned __int16 v19; // ax
  _QWORD *v20; // rax

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
    || !Thread && dword_1403850DC >= 25 )
  {
    return 0;
  }
  if ( dword_1403850FC > 25 )
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
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_1403850D0);
    if ( dword_1403850DC < 25 )
    {
      if ( !IopCurrentHardError
        || *((_DWORD *)v8 + 4) != *(_DWORD *)(IopCurrentHardError + 16)
        || ((v14 = (const void *)v8[4]) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
        && ((v15 = *((_WORD *)v8 + 12), v15 != *(_WORD *)(IopCurrentHardError + 24))
         || memcmp(v14, *(const void **)(IopCurrentHardError + 32), v15)) )
      {
        v16 = qword_1403850C0;
        if ( (__int64 *)qword_1403850C0 == &qword_1403850C0 )
        {
LABEL_41:
          v20 = (_QWORD *)qword_1403850C8;
          if ( *(__int64 **)qword_1403850C8 != &qword_1403850C0 )
            __fastfail(3u);
          *v8 = &qword_1403850C0;
          v8[1] = v20;
          *v20 = v8;
          qword_1403850C8 = (__int64)v8;
          KeReleaseSemaphoreEx((__int64)&byte_1403850D8, 0, 1);
          if ( !byte_1403850F8 )
          {
            byte_1403850F8 = 1;
            ExQueueWorkItem(&IopHardError, DelayedWorkQueue);
          }
          KxReleaseSpinLock(&qword_1403850D0);
          __writecr8(v13);
          return 1;
        }
        v17 = *((_DWORD *)v8 + 4);
        while ( 1 )
        {
          if ( v17 == *(_DWORD *)(v16 + 16) )
          {
            v18 = (const void *)v8[4];
            if ( !v18 && !*(_QWORD *)(v16 + 32) )
              break;
            v19 = *((_WORD *)v8 + 12);
            if ( v19 == *(_WORD *)(v16 + 24) && !memcmp(v18, *(const void **)(v16 + 32), v19) )
              break;
          }
          v16 = *(_QWORD *)v16;
          if ( (__int64 *)v16 == &qword_1403850C0 )
            goto LABEL_41;
        }
      }
    }
    KxReleaseSpinLock(&qword_1403850D0);
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
  _InterlockedIncrement(&dword_1403850FC);
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

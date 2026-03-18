/*
 * XREFs of IoRaiseInformationalHardError @ 0x1401F3E30
 * Callers:
 *     MiCauseOverCommitPopup @ 0x140218018 (MiCauseOverCommitPopup.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     FsRtlLogCcFlushError @ 0x140684AD0 (FsRtlLogCcFlushError.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
    || !Thread && dword_14036909C >= 25 )
  {
    return 0;
  }
  if ( dword_1403690BC > 25 )
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
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_140369090);
    if ( dword_14036909C < 25 )
    {
      if ( !IopCurrentHardError
        || *((_DWORD *)v8 + 4) != *(_DWORD *)(IopCurrentHardError + 16)
        || ((v15 = (const void *)v8[4]) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
        && ((v16 = *((_WORD *)v8 + 12), v16 != *(_WORD *)(IopCurrentHardError + 24))
         || memcmp(v15, *(const void **)(IopCurrentHardError + 32), v16)) )
      {
        v17 = qword_140369080;
        if ( (__int64 *)qword_140369080 == &qword_140369080 )
        {
LABEL_41:
          v21 = (_QWORD *)qword_140369088;
          if ( *(__int64 **)qword_140369088 != &qword_140369080 )
            __fastfail(3u);
          *v8 = &qword_140369080;
          v8[1] = v21;
          *v21 = v8;
          qword_140369088 = (__int64)v8;
          KeReleaseSemaphoreEx((__int64)&byte_140369098, 0, 1, v14, 0);
          if ( !byte_1403690B8 )
          {
            byte_1403690B8 = 1;
            ExQueueWorkItem(&IopHardError, DelayedWorkQueue);
          }
          KxReleaseSpinLock(&qword_140369090);
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
          if ( (__int64 *)v17 == &qword_140369080 )
            goto LABEL_41;
        }
      }
    }
    KxReleaseSpinLock(&qword_140369090);
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
  _InterlockedIncrement(&dword_1403690BC);
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

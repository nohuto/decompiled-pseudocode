/*
 * XREFs of NtAllocateUuids @ 0x140449620
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExpAllocateUuids @ 0x140597490 (ExpAllocateUuids.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x14059D77C (ExpUuidSaveSequenceNumberIf.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PUCHAR Seed)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  PRTL_BALANCED_NODE v13; // rax
  PRTL_BALANCED_NODE v14; // rdi
  NTSTATUS v15; // edi
  char v16; // di
  char v17; // bl
  ULONG v19; // [rsp+24h] [rbp-44h] BYREF
  ULONG v20; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v21[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)Time & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Time < 0x7FFFFFFF0000LL )
      v9 = (__int64)Time;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(v9 + 7);
    if ( ((unsigned __int8)Range & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Range < 0x7FFFFFFF0000LL )
      v10 = (__int64)Range;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( ((unsigned __int8)Sequence & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Sequence < 0x7FFFFFFF0000LL )
      v11 = (__int64)Sequence;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( (unsigned __int64)Seed < 0x7FFFFFFF0000LL )
      v8 = (__int64)Seed;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 5) = *(_BYTE *)(v8 + 5);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, (__int64)v13, (__int16 *)&ExpUuidLock);
  if ( v14 )
    BYTE2(v14[1].Left) |= 1u;
  v15 = ExpAllocateUuids(v21, &v19, &v20);
  if ( v15 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return v15;
  }
  else
  {
    ExpUuidSaveSequenceNumberIf();
    v16 = ExpUuidCacheValid;
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    *Time = (ULARGE_INTEGER)v21[0];
    *Range = v19;
    *Sequence = v20;
    *(_DWORD *)Seed = *(int *)((char *)&dword_1407F329C + 2);
    *((_WORD *)Seed + 2) = word_1407F32A2;
    return v16 == 0 ? 0x40020056 : 0;
  }
}

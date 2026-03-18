/*
 * XREFs of SepDereferenceLowBoxNumberEntry @ 0x140430FB8
 * Callers:
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     SeSetSessionIdToken @ 0x14046E808 (SeSetSessionIdToken.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     SepTokenDeleteMethod @ 0x14051E5E0 (SepTokenDeleteMethod.c)
 *     SeExchangePrimaryToken @ 0x1406F6594 (SeExchangePrimaryToken.c)
 * Callees:
 *     ExRemoveLowBoxAtomReferences @ 0x140018630 (ExRemoveLowBoxAtomReferences.c)
 *     RtlDereferenceAtomTable @ 0x14001863C (RtlDereferenceAtomTable.c)
 *     RtlRemoveEntryHashTable @ 0x1400667C0 (RtlRemoveEntryHashTable.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x140248758 (SepGetTokenSessionMapEntry.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxNumberEntry(unsigned int a1, __int64 a2)
{
  unsigned int TokenSessionMapEntry; // ebp
  struct _KTHREAD *v5; // rax
  __int64 v6; // rax
  ULONG_PTR v8; // rsi
  BOOLEAN v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  TokenSessionMapEntry = 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(a1, 0, &BugCheckParameter2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
  }
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v8 = BugCheckParameter2;
    v9 = RtlRemoveEntryHashTable(
           *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 24),
           (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2,
           0LL);
    if ( v9 )
      _bittestandreset(*(signed __int32 **)(v8 + 16), *(_DWORD *)(a2 + 40) - 1);
    else
      TokenSessionMapEntry = -1073741823;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    if ( v9 && *(_QWORD *)(a2 + 48) )
    {
      ExRemoveLowBoxAtomReferences();
      RtlDereferenceAtomTable(*(PRTL_ATOM_TABLE *)(a2 + 48));
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    return TokenSessionMapEntry;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}

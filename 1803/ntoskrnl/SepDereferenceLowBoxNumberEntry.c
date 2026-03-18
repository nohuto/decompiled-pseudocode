/*
 * XREFs of SepDereferenceLowBoxNumberEntry @ 0x140547090
 * Callers:
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     SeSetSessionIdToken @ 0x140546054 (SeSetSessionIdToken.c)
 *     SepTokenDeleteMethod @ 0x140593260 (SepTokenDeleteMethod.c)
 *     SeExchangePrimaryToken @ 0x140640AD0 (SeExchangePrimaryToken.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x1400A1100 (RtlRemoveEntryHashTable.c)
 *     RtlDereferenceAtomTable @ 0x1400A1218 (RtlDereferenceAtomTable.c)
 *     ExRemoveLowBoxAtomReferences @ 0x1400A122C (ExRemoveLowBoxAtomReferences.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     SepGetTokenSessionMapEntry @ 0x1402A1924 (SepGetTokenSessionMapEntry.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxNumberEntry(unsigned int a1, __int64 a2)
{
  unsigned int TokenSessionMapEntry; // ebp
  struct _KTHREAD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  ULONG_PTR v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  BOOLEAN v15; // r14
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
  v9 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v9 <= 0 )
  {
    if ( v9 )
      __fastfail(0xEu);
    v11 = BugCheckParameter2;
    v15 = RtlRemoveEntryHashTable(
            *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 24),
            (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2,
            0LL);
    if ( v15 )
      _bittestandreset(*(signed __int32 **)(v11 + 16), *(_DWORD *)(a2 + 40) - 1);
    else
      TokenSessionMapEntry = -1073741823;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v12, v13, v14);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    if ( v15 && *(_QWORD *)(a2 + 48) )
    {
      ExRemoveLowBoxAtomReferences();
      RtlDereferenceAtomTable(*(struct _RTL_ATOM_TABLE **)(a2 + 48));
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    return TokenSessionMapEntry;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v6, v7, v8);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}

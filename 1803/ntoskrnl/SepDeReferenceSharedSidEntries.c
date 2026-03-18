/*
 * XREFs of SepDeReferenceSharedSidEntries @ 0x14079481C
 * Callers:
 *     SepFreeTokenCapabilities @ 0x1400C2374 (SepFreeTokenCapabilities.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x1400A1100 (RtlRemoveEntryHashTable.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SepFindSharedSidEntry @ 0x140794CD4 (SepFindSharedSidEntry.c)
 */

void __fastcall SepDeReferenceSharedSidEntries(PSID *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  __int64 SharedSidEntry; // rax
  void *v10; // rsi
  __int64 v11; // rcx
  volatile signed __int64 *v12; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(g_SepSidMapping, 0LL);
  if ( a2 )
  {
    v8 = a2;
    do
    {
      SharedSidEntry = SepFindSharedSidEntry(*a1);
      v10 = (void *)SharedSidEntry;
      v11 = _InterlockedDecrement64((volatile signed __int64 *)(SharedSidEntry + 24));
      if ( v11 <= 0 )
      {
        if ( v11 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(
               *(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8),
               (PRTL_DYNAMIC_HASH_TABLE_ENTRY)SharedSidEntry,
               0LL) )
        {
          ExFreePoolWithTag(v10, 0);
        }
      }
      a1 += 2;
      --v8;
    }
    while ( v8 );
  }
  v12 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12, v5, v6, v7);
  KeAbPostRelease((ULONG_PTR)v12);
  KeLeaveCriticalRegion();
}

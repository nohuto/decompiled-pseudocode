/*
 * XREFs of SepInsertOrReferenceSharedSidEntries @ 0x1406F9A28
 * Callers:
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x140066100 (RtlInsertEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1400667C0 (RtlRemoveEntryHashTable.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 *     SepFindSharedSidEntry @ 0x1406F9998 (SepFindSharedSidEntry.c)
 */

__int64 __fastcall SepInsertOrReferenceSharedSidEntries(PSID *a1, char *a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  unsigned int v5; // r15d
  __int64 v8; // rbp
  signed __int64 v9; // r12
  signed __int64 v10; // rsi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY SharedSidEntry; // rax
  struct _LIST_ENTRY *Blink; // rax
  unsigned int v13; // r13d
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v15; // r15
  ULONG_PTR v16; // r8
  unsigned int v17; // edx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v18; // rdi
  __int64 v19; // rax
  volatile signed __int64 *v20; // rdi

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = a3;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(g_SepSidMapping, 0LL);
  v8 = 0LL;
  if ( !v5 )
    goto LABEL_23;
  v9 = (char *)a1 - a2;
  v10 = a2 - (char *)a1;
  while ( 1 )
  {
    *(_DWORD *)((char *)a1 + v10 + 8) = *(_DWORD *)((char *)a1 + v10 + v9 + 8);
    SharedSidEntry = SepFindSharedSidEntry(*a1);
    if ( SharedSidEntry )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)&SharedSidEntry[1]) <= 1 )
        __fastfail(0xEu);
      Blink = SharedSidEntry[1].Linkage.Blink;
      goto LABEL_12;
    }
    v13 = ((4 * *((unsigned __int8 *)*a1 + 1) + 51) & 0xFFFFFFFC) + 4 * *((unsigned __int8 *)*a1 + 1) + 48;
    PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, v13, 0x73536553u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolWithTag[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
    PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)&PoolWithTag[1].Signature;
    RtlCopySid(v13 - 40, &PoolWithTag[1].Signature, *a1);
    v16 = 1LL;
    v17 = *((_DWORD *)*a1 + (unsigned int)*((unsigned __int8 *)*a1 + 1) + 1);
    if ( v17 )
      v16 = v17;
    if ( !RtlInsertEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v15, v16, 0LL) )
    {
      v4 = -1073741823;
      ExFreePoolWithTag(v15, 0x73536553u);
      goto LABEL_16;
    }
    Blink = v15[1].Linkage.Blink;
    v5 = a3;
LABEL_12:
    *(PSID *)((char *)a1 + v10) = Blink;
    v8 = (unsigned int)(v8 + 1);
    a1 += 2;
    if ( (unsigned int)v8 >= v5 )
    {
      v4 = 0;
      goto LABEL_23;
    }
  }
  v4 = -1073741801;
LABEL_16:
  if ( (_DWORD)v8 )
  {
    do
    {
      v18 = SepFindSharedSidEntry(*(_DWORD **)a2);
      v19 = _InterlockedDecrement64((volatile signed __int64 *)&v18[1]);
      if ( v19 <= 0 )
      {
        if ( v19 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v18, 0LL) )
          ExFreePoolWithTag(v18, 0);
      }
      a2 += 16;
      --v8;
    }
    while ( v8 );
  }
LABEL_23:
  v20 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  KeAbPostRelease((ULONG_PTR)v20);
  KeLeaveCriticalRegion();
  return v4;
}

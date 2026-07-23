/*
 * XREFs of SepInsertOrReferenceSharedSidEntries @ 0x140794D64
 * Callers:
 *     SepSetTokenCapabilities @ 0x140543800 (SepSetTokenCapabilities.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlInsertEntryHashTable @ 0x14006C450 (RtlInsertEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1400A1100 (RtlRemoveEntryHashTable.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
 *     SepFindSharedSidEntry @ 0x140794CD4 (SepFindSharedSidEntry.c)
 */

__int64 __fastcall SepInsertOrReferenceSharedSidEntries(PSID *a1, char *a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  signed __int64 v12; // r12
  signed __int64 v13; // rsi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY SharedSidEntry; // rax
  struct _LIST_ENTRY *Blink; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v17; // r15
  __int64 v18; // rax
  ULONG_PTR v19; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v20; // rdi
  __int64 v21; // rax
  volatile signed __int64 *v22; // rdi
  unsigned int v24; // [rsp+60h] [rbp+18h]
  int v25; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(g_SepSidMapping, 0LL);
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_24;
  v12 = (char *)a1 - a2;
  v13 = a2 - (char *)a1;
  while ( 1 )
  {
    *(_DWORD *)((char *)a1 + v13 + 8) = *(_DWORD *)((char *)a1 + v13 + v12 + 8);
    SharedSidEntry = SepFindSharedSidEntry(*a1);
    v8 = (__int64)SharedSidEntry;
    if ( SharedSidEntry )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)&SharedSidEntry[1]) <= 1 )
        __fastfail(0xEu);
      Blink = SharedSidEntry[1].Linkage.Blink;
      goto LABEL_12;
    }
    v24 = 8 * *((unsigned __int8 *)*a1 + 1) + 96;
    PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, v24, 0x73536553u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)&PoolWithTag[1].Signature;
    PoolWithTag[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
    RtlCopySid(v24 - 40, &PoolWithTag[1].Signature, *a1);
    v18 = (unsigned int)*((unsigned __int8 *)*a1 + 1) - 1;
    v19 = *((unsigned int *)*a1 + v18 + 2);
    if ( !*((_DWORD *)*a1 + v18 + 2) )
      v19 = 1LL;
    if ( !RtlInsertEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v17, v19, 0LL) )
    {
      v4 = -1073741823;
      v25 = -1073741823;
      ExFreePoolWithTag(v17, 0x73536553u);
      goto LABEL_16;
    }
    Blink = v17[1].Linkage.Blink;
LABEL_12:
    *(PSID *)((char *)a1 + v13) = Blink;
    v11 = (unsigned int)(v11 + 1);
    a1 += 2;
    if ( (unsigned int)v11 >= a3 )
    {
      v4 = 0;
      goto LABEL_24;
    }
  }
  v4 = -1073741801;
  v25 = -1073741801;
LABEL_16:
  if ( (_DWORD)v11 )
  {
    do
    {
      v20 = SepFindSharedSidEntry(*(_DWORD **)a2);
      v21 = _InterlockedDecrement64((volatile signed __int64 *)&v20[1]);
      if ( v21 <= 0 )
      {
        if ( v21 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v20, 0LL) )
          ExFreePoolWithTag(v20, 0);
      }
      a2 += 16;
      --v11;
    }
    while ( v11 );
    v4 = v25;
  }
LABEL_24:
  v22 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v22, v8, v9, v10);
  KeAbPostRelease((ULONG_PTR)v22);
  KeLeaveCriticalRegion();
  return v4;
}

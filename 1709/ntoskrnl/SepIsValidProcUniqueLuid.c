/*
 * XREFs of SepIsValidProcUniqueLuid @ 0x140730140
 * Callers:
 *     SepRmValidateProcUniqueLuidWrkr @ 0x14072F5C0 (SepRmValidateProcUniqueLuidWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     RtlLookupEntryHashTable @ 0x140101DF0 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140113840 (RtlGetNextEntryHashTable.c)
 */

__int64 __fastcall SepIsValidProcUniqueLuid(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  ULONG_PTR v4; // rdx
  _RTL_DYNAMIC_HASH_TABLE *v5; // rsi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rcx
  signed __int64 *v8; // rbx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(SeLuidToIndexMapping, 0LL);
  v4 = *a1;
  v5 = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  if ( !*a1 )
    v4 = 1LL;
  for ( i = RtlLookupEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(SeLuidToIndexMapping + 8), v4, &Context);
        ;
        i = RtlGetNextEntryHashTable(v5, &Context) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( (struct _LIST_ENTRY *)*a1 == i[1].Linkage.Blink )
      goto LABEL_8;
  }
  v7 = 0LL;
LABEL_8:
  if ( v7 )
    v3 = LOBYTE(v7[2].Linkage.Flink) != 0 ? 0xC0000225 : 0;
  v8 = (signed __int64 *)SeLuidToIndexMapping;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)SeLuidToIndexMapping, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}

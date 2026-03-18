/*
 * XREFs of ExpTimerDpcRoutine @ 0x1400CD640
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     _local_unwind @ 0x140188100 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine0 @ 0x1401B4FF0 (KiCustomAccessRoutine0.c)
 */

void __fastcall ExpTimerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v6; // edi
  int v7; // r14d
  __int64 v8; // [rsp+0h] [rbp-1A8h] BYREF
  int v9; // [rsp+34h] [rbp-174h]
  __int64 v10; // [rsp+101h] [rbp-A7h]
  __int64 v11; // [rsp+149h] [rbp-5Fh]
  unsigned __int64 v12; // [rsp+151h] [rbp-57h]
  __int64 *v13; // [rsp+170h] [rbp-38h]

  v13 = &v8;
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v9 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v12 = SystemArgument1;
    v10 = __ROL8__(DeferredContext, SystemArgument1);
    v11 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine0(DeferredContext);
  }
  v6 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  if ( (*(_BYTE *)(DeferredContext + 304) & 1) != 0 )
  {
    v6 = KeInsertQueueApc(DeferredContext + 72, MEMORY[0xFFFFF78000000014], HIDWORD(MEMORY[0xFFFFF78000000014]), 0) == 0;
    if ( *(_DWORD *)(DeferredContext + 240) )
    {
      v7 = v6 - 1;
      if ( v6 - 1 < 0 )
        ObfReferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
      v6 = 0;
      if ( v7 >= 0 )
        v6 = v7;
      if ( (*(_BYTE *)(DeferredContext + 304) & 2) == 0
        && KeSetCoalescableTimer(
             (PKTIMER)DeferredContext,
             (LARGE_INTEGER)(-10000LL * *(int *)(DeferredContext + 240)),
             0,
             *(_DWORD *)(DeferredContext + 320),
             Dpc) )
      {
        ++v6;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
}

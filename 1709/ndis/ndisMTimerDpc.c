/*
 * XREFs of ndisMTimerDpc @ 0x1C0062950
 * Callers:
 *     <none>
 * Callees:
 *     NdisMSetTimer @ 0x1C00027C0 (NdisMSetTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C004FA5C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004FB40 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C005FF50 (ndisMProcessDeferred.c)
 */

void __fastcall ndisMTimerDpc(
        struct _KDPC *Dpc,
        _LIST_ENTRY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 Flink; // rdi
  __int64 Clock; // r15
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  _LIST_ENTRY **j; // rcx
  _LIST_ENTRY *v10; // rbx
  __int64 v11; // rax
  unsigned int i; // [rsp+68h] [rbp+10h]

  Flink = (__int64)DeferredContext[9].Flink;
  Clock = 0LL;
  if ( HIBYTE(dword_1C0099FD8) )
  {
    v7 = 1;
    ndisTraceDpcStart(Flink, 2u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Flink + 96));
  CurrentThread = KeGetCurrentThread();
  for ( *(_DWORD *)(Flink + 1856) = 655728; ; *(_DWORD *)(Flink + 1856) = 655732 )
  {
    *(_QWORD *)(Flink + 520) = CurrentThread;
    if ( !*(_BYTE *)(Flink + 89) )
      break;
    *(_QWORD *)(Flink + 520) = 0LL;
    *(_DWORD *)(Flink + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Flink + 96));
    for ( i = 0; i < 0x32; ++i )
      ;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Flink + 96));
    CurrentThread = KeGetCurrentThread();
  }
  *(_BYTE *)(Flink + 89) = 1;
  *(_DWORD *)(Flink + 1860) = 655732;
  *(_QWORD *)(Flink + 1864) = KeGetCurrentThread();
  if ( (*(_BYTE *)(*(_QWORD *)(Flink + 3784) + 26LL) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Flink + 1880));
    for ( j = (_LIST_ENTRY **)(Flink + 560); *j; j = &(*j)[9].Blink )
    {
      if ( *j == DeferredContext )
      {
        if ( !HIDWORD(DeferredContext[3].Blink) )
          *j = DeferredContext[9].Blink;
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Flink + 1880));
  }
  if ( (*(_DWORD *)(Flink + 120) & 2) != 0 )
  {
    NdisMSetTimer(DeferredContext, 10);
  }
  else if ( (*(_DWORD *)(Flink + 124) & 0x1000000) == 0 )
  {
    v10 = DeferredContext[8].Flink;
    *(_QWORD *)(Flink + 520) = 0LL;
    *(_DWORD *)(Flink + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Flink + 96));
    ((void (__fastcall *)(_QWORD, _LIST_ENTRY *, _QWORD, _QWORD))v10)(0LL, DeferredContext[8].Blink, 0LL, 0LL);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Flink + 96));
    *(_QWORD *)(Flink + 520) = KeGetCurrentThread();
    *(_DWORD *)(Flink + 1856) = 655796;
    ndisMProcessDeferred(Flink);
  }
  *(_BYTE *)(Flink + 89) = 0;
  *(_DWORD *)(Flink + 1860) = 0;
  *(_QWORD *)(Flink + 1864) = 0LL;
  *(_QWORD *)(Flink + 520) = 0LL;
  *(_DWORD *)(Flink + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Flink + 96));
  if ( v7 )
  {
    v11 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(Flink, 2u, v11 - Clock);
  }
}

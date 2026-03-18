/*
 * XREFs of ExpCancelTimer @ 0x140049910
 * Callers:
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     NtCancelTimer @ 0x14004AB00 (NtCancelTimer.c)
 *     ExTimerRundown @ 0x14004E2AC (ExTimerRundown.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x14003179C (KeRemoveQueueApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1)
{
  unsigned int v1; // edi
  unsigned __int8 CurrentIrql; // si
  char v4; // bp
  unsigned __int64 Size; // r15
  __int64 Processor; // rax
  __int64 v7; // r12
  volatile signed __int32 *v8; // r14
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  volatile signed __int32 *v14; // rcx
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v18; // rdx
  int v19; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+34h] [rbp-54h] BYREF
  int v21; // [rsp+38h] [rbp-50h] BYREF
  PKTIMER v22; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[98]);
    Flink = a1[3].TimerListEntry.Flink;
    v18 = a1[3].TimerListEntry.Blink;
    if ( Flink->Blink != &a1[3].TimerListEntry || v18->Flink != &a1[3].TimerListEntry )
      __fastfail(3u);
    v18->Flink = Flink;
    Flink->Blink = v18;
    KxReleaseSpinLock((PKSPIN_LOCK)&Blink[98]);
    LOBYTE(a1[4].Dpc) &= ~1u;
    if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
      || KeCancelTimer(a1)
      || KeRemoveQueueDpcEx((int *)&a1[2].TimerListEntry, 0) )
    {
      v1 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc((__int64)&a1[1].Header.WaitListHead) )
      ++v1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v4 = 0;
    while ( 1 )
    {
      v19 = 0;
      while ( _interlockedbittestandset(&a1->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( (a1->Header.LockNV & 0x80u) != 0 );
      }
      if ( (a1->Header.Reserved1 & 0xC0) == 0 )
      {
        _InterlockedAnd(&a1->Header.Lock, 0xFFFFFF7F);
        goto LABEL_15;
      }
      Size = a1->Header.Size;
      Processor = a1->Processor;
      v20 = 0;
      v7 = KiProcessorBlock[Processor] + 13952;
      v8 = (volatile signed __int32 *)(v7 + 32 * (Size + 16));
      while ( _interlockedbittestandset64(v8, 0LL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(_QWORD *)v8 );
      }
      if ( (a1->Header.Reserved1 & 0x80u) == 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
      if ( _InterlockedExchange64((volatile __int64 *)(v7 + 8LL * (a1->Header.Reserved1 & 0x3F)), 0LL) )
      {
        _InterlockedAnd(&a1->Header.Lock, 0xFFFF7Fu);
        v4 = 1;
        goto LABEL_15;
      }
      _InterlockedAnd(&a1->Header.Lock, 0xFFFFFF7F);
      v21 = 0;
      while ( (a1->Header.Reserved1 & 0x80u) != 0 )
        KeYieldProcessorEx(&v21);
    }
    v9 = a1->TimerListEntry.Flink;
    v10 = a1->TimerListEntry.Blink;
    v11 = Size;
    if ( v9->Blink != &a1->TimerListEntry || v10->Flink != &a1->TimerListEntry )
      __fastfail(3u);
    v10->Flink = v9;
    v9->Blink = v10;
    if ( v10 == v9 )
    {
      *(_DWORD *)(32 * (Size + 16) + v7 + 28) = -1;
      v12 = qword_1403E4FD8[2 * *(unsigned __int8 *)(v7 - 13744)];
      if ( KiSerializeTimerExpiration )
      {
        v13 = Size & 0x3F;
        v14 = (volatile signed __int32 *)(v12 + 8 * (v11 >> 6));
      }
      else
      {
        v13 = *(unsigned __int8 *)(v7 - 13743);
        v14 = (volatile signed __int32 *)((v11 << 6) + v12);
      }
      _interlockedbittestandreset64(v14, v13);
    }
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    _InterlockedAnd(&a1->Header.Lock, 0xBFFFFF7F);
    v4 = 1;
LABEL_15:
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
    {
      v22 = a1;
      v23[0] = &v22;
      v23[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v23, 1, 1073872896, 3925, 1538);
    }
    __writecr8(CurrentIrql);
  }
  LOBYTE(a1[3].Processor) = 0;
  return v1;
}

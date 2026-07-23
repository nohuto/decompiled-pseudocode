/*
 * XREFs of TlgAggregateInternalProviderCallback @ 0x1404F19A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     LookUpTableFlushComplete @ 0x1404F06DC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  PRTL_BALANCED_NODE v4; // rax
  __int64 i; // rbx

  if ( ControlCode == 2 && MatchAnyKeyword == 32 )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&qword_14038DDF0, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14038DDF0, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_14038DDF0, (unsigned __int64)v4);
    }
    else
    {
      if ( v4 )
        BYTE2(v4[1].Left) |= 1u;
      for ( i = qword_1403A3038; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038DDF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038DDF0);
      KeAbPostRelease((ULONG_PTR)&qword_14038DDF0);
    }
  }
}

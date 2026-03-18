/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14048BF00
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     LookUpTableFlushComplete @ 0x14052D76C (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  _KLOCK_ENTRY *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 i; // rbx

  if ( ControlCode == 2 && MatchAnyKeyword == 32 )
  {
    v4 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&qword_1403D1C30, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1403D1C30, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_1403D1C30, v4);
    }
    else
    {
      if ( v4 )
        v4->AcquiredByte |= 1u;
      for ( i = qword_1403E95F8; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i, v5, v6);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403D1C30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403D1C30, v5, v6, v7);
      KeAbPostRelease((ULONG_PTR)&qword_1403D1C30);
    }
  }
}

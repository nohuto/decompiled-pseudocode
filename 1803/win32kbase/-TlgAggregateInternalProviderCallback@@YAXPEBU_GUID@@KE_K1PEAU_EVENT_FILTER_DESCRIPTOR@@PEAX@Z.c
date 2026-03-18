/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01D7070
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C01D7D00 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 i; // rbx

  if ( ControlCode == 2
    && MatchAnyKeyword == 32
    && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_1C01A2048, 0LL, Level) )
  {
    for ( i = qword_1C01A6500; i; i = *(_QWORD *)(i + 352) )
      LookUpTableFlushComplete(i);
    ExReleasePushLockExclusiveEx(&unk_1C01A2048, 0LL);
  }
}

/*
 * XREFs of TlgAggregateInternalProviderCallback @ 0x1C006D7D0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C006D860 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 i; // rbx

  if ( ControlCode == 2
    && MatchAnyKeyword == 32
    && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_1C003C520, 0LL) )
  {
    for ( i = qword_1C003C6C8; i; i = *(_QWORD *)(i + 408) )
      LookUpTableFlushComplete(i);
    ExReleasePushLockExclusiveEx(&unk_1C003C520, 0LL);
  }
}

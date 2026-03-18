/*
 * XREFs of TlgAggregateInternalProviderCallback @ 0x1C00735B0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C00812E4 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 i; // rbx

  if ( ControlCode == 2
    && MatchAnyKeyword == 32
    && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_1C00406D0, 0LL) )
  {
    for ( i = qword_1C0040740; i; i = *(_QWORD *)(i + 352) )
      LookUpTableFlushComplete(i, v4, v5, v6);
    ExReleasePushLockExclusiveEx(&unk_1C00406D0, 0LL);
  }
}

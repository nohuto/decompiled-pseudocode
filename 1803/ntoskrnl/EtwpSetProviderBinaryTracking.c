/*
 * XREFs of EtwpSetProviderBinaryTracking @ 0x1407B2290
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x14058F080 (EtwpGetNextGuidEntry.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407B2700 (EtwpTrackGuidEntryRegistrations.c)
 */

__int64 __fastcall EtwpSetProviderBinaryTracking(__int64 a1, unsigned int a2, char a3)
{
  unsigned int *v5; // rax
  unsigned int *v6; // rdi
  signed __int64 *i; // rdx
  signed __int64 *NextGuidEntry; // rax
  signed __int64 *v9; // rbx
  signed __int64 *j; // rdx
  signed __int64 *v11; // rax
  __int64 v12; // r8
  signed __int64 *v13; // rbx

  v5 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v6 = v5;
  if ( a3 )
  {
    _InterlockedOr((volatile signed __int32 *)v5 + 208, 0x2000000u);
    for ( i = 0LL; ; i = v9 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(a1, i, 0);
      v9 = NextGuidEntry;
      if ( !NextGuidEntry )
        break;
      EtwpTrackGuidEntryRegistrations(v6, NextGuidEntry, 0LL);
    }
    for ( j = 0LL; ; j = v13 )
    {
      v11 = EtwpGetNextGuidEntry(a1, j, 2);
      v13 = v11;
      if ( !v11 )
        break;
      LOBYTE(v12) = 2;
      EtwpTrackGuidEntryRegistrations(v6, v11, v12);
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)v5 + 208, 0xFDFFFFFF);
  }
  EtwpReleaseLoggerContext(v6, 0);
  return 0LL;
}

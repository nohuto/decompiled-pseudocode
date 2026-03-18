/*
 * XREFs of AddDecodeGuidToSessions @ 0x1407B2F50
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x140591004 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1407B25C8 (EtwpTrackDecodeGuidForSession.c)
 */

bool __fastcall AddDecodeGuidToSessions(__int64 a1)
{
  unsigned __int8 v1; // si
  bool v3; // di
  unsigned int v5; // edx
  unsigned int *v6; // rbx

  v1 = *(_BYTE *)(a1 + 100);
  v3 = 1;
  do
  {
    if ( !_BitScanForward(&v5, v1) )
      break;
    v1 &= v1 - 1;
    v6 = EtwpAcquireLoggerContextByLoggerId(
           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 376LL),
           *(unsigned __int16 *)(32LL * v5 + *(_QWORD *)(a1 + 32) + 118),
           0);
    v3 = EtwpTrackDecodeGuidForSession((__int64)v6, a1);
    EtwpReleaseLoggerContext(v6, 0);
  }
  while ( v3 );
  return v3;
}

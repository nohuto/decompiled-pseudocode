/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x14054F2BC
 * Callers:
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(__int64 a1, const UNICODE_STRING *a2, unsigned int *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int *v8; // rax
  unsigned int *v9; // rdi

  v6 = -1073741162;
  v7 = 0;
  while ( 1 )
  {
    v8 = EtwpAcquireLoggerContextByLoggerId(a1, v7, 0);
    v9 = v8;
    if ( v8 )
      break;
LABEL_3:
    if ( ++v7 >= 0x40 )
      return v6;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 34), a2, 1u) )
  {
    EtwpReleaseLoggerContext(v9, 0);
    goto LABEL_3;
  }
  EtwpReleaseLoggerContext(v9, 0);
  v6 = 0;
  *a3 = v7;
  return v6;
}

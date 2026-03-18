/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x140551A2C
 * Callers:
 *     EtwQueryTraceHandleByLoggerName @ 0x140467800 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x140551674 (EtwpAcquireLoggerContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerName(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  unsigned int v6; // edi
  unsigned int *v7; // rax
  unsigned int *v8; // rbx
  char v9; // dl

  if ( !a2 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(a1, v6, 0);
    v8 = v7;
    if ( v7 )
      break;
LABEL_7:
    if ( ++v6 >= 0x40 )
      return 0LL;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 34), a2, 1u) )
  {
    v9 = 0;
LABEL_6:
    EtwpReleaseLoggerContext(v8, v9);
    goto LABEL_7;
  }
  if ( a3 == 1 )
    KeWaitForSingleObject(v8 + 158, Executive, 0, 0, 0LL);
  if ( !v8[80] )
  {
    v9 = a3;
    goto LABEL_6;
  }
  return v8;
}

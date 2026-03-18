/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x1404ED968
 * Callers:
 *     EtwpAcquireLoggerContext @ 0x1404ED888 (EtwpAcquireLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1405ABA5C (EtwQueryTraceHandleByLoggerName.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerName(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int *v8; // rbx
  char v10; // dl

  if ( !a2 )
    return 0LL;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 8) )
    return 0LL;
  while ( 1 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(a1, v6, 0);
    v8 = (unsigned int *)v7;
    if ( v7 )
      break;
LABEL_4:
    if ( ++v6 >= *(_DWORD *)(a1 + 8) )
      return 0LL;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 152), a2, 1u) )
  {
    v10 = 0;
LABEL_8:
    EtwpReleaseLoggerContext(v8, v10);
    goto LABEL_4;
  }
  if ( a3 == 1 )
    KeWaitForSingleObject(v8 + 162, Executive, 0, 0, 0LL);
  if ( !v8[84] )
  {
    v10 = a3;
    goto LABEL_8;
  }
  return v8;
}

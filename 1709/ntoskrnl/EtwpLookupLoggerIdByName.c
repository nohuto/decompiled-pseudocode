/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x14058B484
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(__int64 a1, const UNICODE_STRING *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int i; // esi
  __int64 v8; // rax
  unsigned int *v9; // rdi

  v3 = 0;
  for ( i = -1073741162; v3 < *(_DWORD *)(a1 + 8); ++v3 )
  {
    v8 = EtwpAcquireLoggerContextByLoggerId(a1, v3, 0);
    v9 = (unsigned int *)v8;
    if ( v8 )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 152), a2, 1u) )
      {
        EtwpReleaseLoggerContext(v9, 0);
        i = 0;
        *a3 = v3;
        return i;
      }
      EtwpReleaseLoggerContext(v9, 0);
    }
  }
  return i;
}

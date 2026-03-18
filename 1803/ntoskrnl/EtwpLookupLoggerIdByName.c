/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x14058DBC4
 * Callers:
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(__int64 a1, const UNICODE_STRING *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // r14
  BOOLEAN v11; // bl

  v3 = 0;
  v7 = -1073741162;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v8 = EtwpAcquireLoggerContextByLoggerId(a1, v3, 0LL);
      v9 = v8;
      if ( v8 )
      {
        v11 = RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 152), a2, 1u);
        EtwpReleaseLoggerContext(v9, 0LL);
        if ( v11 )
          break;
      }
      if ( ++v3 >= *(_DWORD *)(a1 + 16) )
        return v7;
    }
    *a3 = v3;
    return 0;
  }
  return v7;
}

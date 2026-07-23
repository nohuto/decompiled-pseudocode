/*
 * XREFs of EtwpGetPrivateLoggerContextByName @ 0x180065798
 * Callers:
 *     EtwpGetPrivateLoggerContext @ 0x180062A00 (EtwpGetPrivateLoggerContext.c)
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 *     EtwpDemuxUmTraceHandle @ 0x180109AB0 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContextByName(PUNICODE_STRING String2, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !String2 )
    return 4201LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = v4 & 0xFFFF7FFF;
    LODWORD(v9) = v4 & 0xFFFF7FFF;
    if ( EtwpLoggerArray )
      break;
LABEL_4:
    if ( ++v4 >= 0x40 )
      return 4201LL;
  }
  if ( v5 >= 0x40 )
  {
    if ( (unsigned int)EtwpDemuxUmTraceHandle(v4, &v9) )
      goto LABEL_4;
    v5 = v9;
  }
  v7 = 2LL * v5;
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v5 + 8));
  if ( (*(_BYTE *)(EtwpLoggerArray + 16LL * v5) & 1) != 0 )
  {
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 8));
    goto LABEL_4;
  }
  v8 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v8 + 152), String2, 1u) )
  {
    v7 = 2LL * v4;
    goto LABEL_8;
  }
  *a2 = v8;
  return 0LL;
}

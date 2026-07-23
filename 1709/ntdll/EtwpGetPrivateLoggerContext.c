/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x180062A00
 * Callers:
 *     EtwpFlushUmLogger @ 0x180060D00 (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x180062764 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x1800628CC (EtwpQueryUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x180109CFC (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180065798 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpDemuxUmTraceHandle @ 0x180109AB0 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContext(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 result; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 176));
    return EtwpGetPrivateLoggerContextByName(&DestinationString);
  }
  v3 = *(unsigned __int16 *)(a1 + 8);
  v4 = EtwpLoggerArray;
  v5 = v3 & 0xFFFF7FFF;
  v8 = v3 & 0xFFFF7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( v5 < 0x40 )
  {
LABEL_4:
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 16LL * v5 + 8));
    if ( (*(_BYTE *)(EtwpLoggerArray + 16LL * v5) & 1) == 0 )
    {
      *a2 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v5 + 8));
    return 4201LL;
  }
  result = EtwpDemuxUmTraceHandle(v3, &v8);
  if ( !(_DWORD)result )
  {
    v5 = v8;
    v4 = EtwpLoggerArray;
    goto LABEL_4;
  }
  return result;
}

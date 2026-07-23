/*
 * XREFs of EtwpAcquireLoggerContext @ 0x14058BB5C
 * Callers:
 *     EtwpFlushTrace @ 0x140580054 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14058B85C (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x14058BA4C (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14058E3AC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int8 v3; // r9
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_BYTE *)(a1 + 4172);
  *a3 = 0LL;
  v7 = 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v8 )
    v7 = v3;
  v9 = v3;
  if ( (_DWORD)v7 == v3 || !*(_WORD *)(a2 + 144) )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v7 = v3;
      if ( *(unsigned __int16 *)(a2 + 8) != 0xFFFF )
        v7 = *(unsigned __int16 *)(a2 + 8);
      if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 16) )
        return 3221225480LL;
    }
    LOBYTE(v9) = 1;
    v12 = EtwpAcquireLoggerContextByLoggerId(a1, v7, v9);
    *a3 = v12;
  }
  else
  {
    result = EtwpCaptureString((unsigned __int16 *)(a2 + 144), &UnicodeString);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v11) = 1;
    *a3 = EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, v11);
    RtlFreeAnsiString(&UnicodeString);
    v12 = *a3;
  }
  return v12 == 0 ? 0xC0000296 : 0;
}

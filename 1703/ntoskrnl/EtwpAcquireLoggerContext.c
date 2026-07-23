/*
 * XREFs of EtwpAcquireLoggerContext @ 0x140551674
 * Callers:
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 *     EtwpQueryTrace @ 0x1405515A4 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140551A2C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpCaptureString @ 0x140551AE8 (EtwpCaptureString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, unsigned int **a3)
{
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned int *v8; // rax
  __int64 result; // rax
  __int64 v10; // r8
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v6 = -1;
  v7 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  *a3 = 0LL;
  if ( !v7 )
    v7 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v7 )
    v6 = (unsigned __int8)EtwpSystemLogger[0];
  if ( v6 == (unsigned __int8)EtwpSystemLogger[0] || !*(_WORD *)(a2 + 144) )
  {
    if ( v6 == -1 )
    {
      v6 = *(unsigned __int16 *)(a2 + 8);
      if ( v6 == 0xFFFF )
        v6 = (unsigned __int8)EtwpSystemLogger[0];
      if ( v6 >= 0x40 )
        return 3221225480LL;
    }
    v8 = EtwpAcquireLoggerContextByLoggerId(a1, v6, 1);
    *a3 = v8;
    return v8 == 0LL ? 0xC0000296 : 0;
  }
  result = EtwpCaptureString(a2 + 144, &UnicodeString);
  if ( (int)result >= 0 )
  {
    LOBYTE(v10) = 1;
    *a3 = (unsigned int *)EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, v10);
    RtlFreeUnicodeString(&UnicodeString);
    v8 = *a3;
    return v8 == 0LL ? 0xC0000296 : 0;
  }
  return result;
}

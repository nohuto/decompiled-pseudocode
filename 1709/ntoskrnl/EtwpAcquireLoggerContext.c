/*
 * XREFs of EtwpAcquireLoggerContext @ 0x1404ED888
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpQueryTrace @ 0x1404ED7B8 (EtwpQueryTrace.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x1405959E0 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404ED968 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpCaptureString @ 0x1404EDA2C (EtwpCaptureString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  v6 = -1;
  v7 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v7 )
    v6 = *(unsigned __int8 *)(a1 + 4156);
  if ( v6 == *(unsigned __int8 *)(a1 + 4156) || !*(_WORD *)(a2 + 144) )
  {
    if ( v6 == -1 )
    {
      v6 = *(unsigned __int8 *)(a1 + 4156);
      if ( *(unsigned __int16 *)(a2 + 8) != 0xFFFF )
        v6 = *(unsigned __int16 *)(a2 + 8);
      if ( v6 >= *(_DWORD *)(a1 + 8) )
        return 3221225480LL;
    }
    v10 = EtwpAcquireLoggerContextByLoggerId(a1, v6, 1);
    *a3 = v10;
  }
  else
  {
    result = EtwpCaptureString(a2 + 144, &UnicodeString);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v9) = 1;
    *a3 = EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, v9);
    RtlFreeUnicodeString(&UnicodeString);
    v10 = *a3;
  }
  return v10 == 0 ? 0xC0000296 : 0;
}

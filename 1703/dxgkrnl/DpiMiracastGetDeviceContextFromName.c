/*
 * XREFs of DpiMiracastGetDeviceContextFromName @ 0x1C01C77A0
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C004112C (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C01C8CE4 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C003E19C (DpiMiracastAddRefMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastGetDeviceContextFromName(PCWSTR SourceString)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&String1, SourceString);
  AcquireMiniportListMutex();
  v1 = qword_1C006FD60;
  if ( (__int64 *)qword_1C006FD60 == &qword_1C006FD60 )
    goto LABEL_6;
  do
  {
    v2 = v1;
    if ( !RtlCompareUnicodeString(&String1, (PCUNICODE_STRING)(v1 + 160), 1u) )
      break;
    v1 = *(_QWORD *)v1;
  }
  while ( (__int64 *)v1 != &qword_1C006FD60 );
  if ( (__int64 *)v1 == &qword_1C006FD60 )
LABEL_6:
    v2 = 0LL;
  else
    DpiMiracastAddRefMiracastDeviceContext(v2, v2);
  _InterlockedExchange64(&qword_1C006FA08, 0LL);
  KeReleaseMutex(Mutex, 0);
  return v2;
}

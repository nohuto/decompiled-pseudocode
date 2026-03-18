/*
 * XREFs of DpiMiracastGetDeviceContextFromName @ 0x1C01E1908
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0031BFC (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C01E2E28 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C002ED1C (DpiMiracastAddRefMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastGetDeviceContextFromName(PCWSTR SourceString)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&String1, SourceString);
  AcquireMiniportListMutex();
  v1 = qword_1C0060BE0;
  if ( (__int64 *)qword_1C0060BE0 == &qword_1C0060BE0 )
    goto LABEL_6;
  do
  {
    v2 = v1;
    if ( !RtlCompareUnicodeString(&String1, (PCUNICODE_STRING)(v1 + 160), 1u) )
      break;
    v1 = *(_QWORD *)v1;
  }
  while ( (__int64 *)v1 != &qword_1C0060BE0 );
  if ( (__int64 *)v1 == &qword_1C0060BE0 )
LABEL_6:
    v2 = 0LL;
  else
    DpiMiracastAddRefMiracastDeviceContext(v2, v2);
  _InterlockedExchange64(&qword_1C0060888, 0LL);
  KeReleaseMutex(Mutex, 0);
  return v2;
}

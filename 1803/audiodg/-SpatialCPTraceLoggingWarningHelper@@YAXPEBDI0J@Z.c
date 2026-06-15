/*
 * XREFs of ?SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z @ 0x14005AF6C
 * Callers:
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005B220 (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x140034D80 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

void __fastcall SpatialCPTraceLoggingWarningHelper(const char *a1, __int64 a2, const char *a3, int a4)
{
  LPCGUID v4; // r9
  int v5; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v8; // [rsp+70h] [rbp+17h]
  int v9; // [rsp+78h] [rbp+1Fh]
  int v10; // [rsp+7Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+80h] [rbp+27h] BYREF
  int *v12; // [rsp+90h] [rbp+37h]
  int v13; // [rsp+98h] [rbp+3Fh]
  int v14; // [rsp+9Ch] [rbp+43h]
  int v15; // [rsp+D8h] [rbp+7Fh] BYREF

  v15 = a4;
  v5 = 21;
  if ( (unsigned int)dword_140087130 > 3 )
  {
    TlgCreateSz(&pDesc, "MapSectionHandleToMemory");
    v10 = 0;
    v8 = &v5;
    v9 = 4;
    TlgCreateSz(&v11, "Failed to lock Server CrossProcess memory.  This is non-fatal - we may page fault more often.");
    v14 = 0;
    v12 = &v15;
    v13 = (int)v4;
    TlgWrite((TraceLoggingHProvider)&dword_140087130, &unk_140070C26, 0LL, v4, 6u, &pData);
  }
}

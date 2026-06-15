/*
 * XREFs of ?SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z @ 0x14005DAFC
 * Callers:
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005DDC8 (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 * Callees:
 *     _TlgCreateSz @ 0x14001BF44 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

void __fastcall SpatialCPTraceLoggingWarningHelper(const char *a1, __int64 a2, const char *a3, int a4)
{
  LPCGUID v4; // r9
  LPCGUID v5; // r8
  int v6; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v9; // [rsp+70h] [rbp+17h]
  int v10; // [rsp+78h] [rbp+1Fh]
  int v11; // [rsp+7Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+80h] [rbp+27h] BYREF
  int *v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]
  int v16; // [rsp+D8h] [rbp+7Fh] BYREF

  v16 = a4;
  v6 = 21;
  if ( (unsigned int)dword_1400890A0 > 3 )
  {
    TlgCreateSz(&pDesc, "MapSectionHandleToMemory");
    v11 = 0;
    v9 = &v6;
    v10 = 4;
    TlgCreateSz(&v12, "Failed to lock Server CrossProcess memory.  This is non-fatal - we may page fault more often.");
    v15 = 0;
    v13 = &v16;
    v14 = (int)v4;
    TlgWrite((TraceLoggingHProvider)&dword_1400890A0, &unk_14007316E, v5, v4, 6u, &pData);
  }
}

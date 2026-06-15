/*
 * XREFs of ?SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z @ 0x14005ACB0
 * Callers:
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005AF7C (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall SpatialCPTraceLoggingWarningHelper(const char *a1, __int64 a2, const char *a3, int a4)
{
  LPCGUID v4; // r9
  LPCGUID v5; // r8
  int v6; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v9; // [rsp+70h] [rbp+7h]
  int v10; // [rsp+78h] [rbp+Fh]
  int v11; // [rsp+7Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+80h] [rbp+17h] BYREF
  int *v13; // [rsp+90h] [rbp+27h]
  int v14; // [rsp+98h] [rbp+2Fh]
  int v15; // [rsp+9Ch] [rbp+33h]
  int v16; // [rsp+E8h] [rbp+7Fh] BYREF

  v16 = a4;
  v6 = 21;
  if ( (unsigned int)dword_1400850A0 > 3 )
  {
    TlgCreateSz(&pDesc, "MapSectionHandleToMemory");
    v11 = 0;
    v9 = &v6;
    v10 = 4;
    TlgCreateSz(&v12, "Failed to lock Server CrossProcess memory.  This is non-fatal - we may page fault more often.");
    v15 = 0;
    v13 = &v16;
    v14 = (int)v4;
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FFA5, v5, v4, 6u, &pData);
  }
}

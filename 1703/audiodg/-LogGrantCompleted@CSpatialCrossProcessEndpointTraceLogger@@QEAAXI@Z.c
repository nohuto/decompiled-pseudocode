/*
 * XREFs of ?LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005A020
 * Callers:
 *     ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14005B588 (-CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGrantCompleted(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-68h] BYREF
  char *v5; // [rsp+50h] [rbp-48h]
  int v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+5Ch] [rbp-3Ch]
  int *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  int v11; // [rsp+A8h] [rbp+10h] BYREF

  v11 = a2;
  if ( (unsigned int)dword_1400850A0 > 5 )
  {
    v5 = (char *)this + 8;
    v7 = 0;
    v6 = 16;
    v8 = &v11;
    v10 = 0;
    v9 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FCEF, a3, a4, 4u, &v4);
  }
}

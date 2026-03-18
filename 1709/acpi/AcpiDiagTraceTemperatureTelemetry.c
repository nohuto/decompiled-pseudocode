/*
 * XREFs of AcpiDiagTraceTemperatureTelemetry @ 0x1C0025294
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C002408C (ACPIThermalLoopEx.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C002503C (ACPIAmliBuildObjectPathnameUnicode.c)
 *     _TlgWrite @ 0x1C00253BC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceTemperatureTelemetry(__int64 a1)
{
  __int64 v1; // rdi
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v8; // [rsp+70h] [rbp-9h]
  __int64 v9; // [rsp+78h] [rbp-1h]
  _DWORD *v10; // [rsp+80h] [rbp+7h]
  __int64 v11; // [rsp+88h] [rbp+Fh]
  wchar_t *Buffer; // [rsp+90h] [rbp+17h]
  _DWORD v13[2]; // [rsp+98h] [rbp+1Fh] BYREF
  _DWORD *v14; // [rsp+A0h] [rbp+27h]
  __int64 v15; // [rsp+A8h] [rbp+2Fh]
  __int64 v16; // [rsp+B0h] [rbp+37h]
  _DWORD v17[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(__int64 **)(a1 + 712), (__int64)&DestinationString, 1) >= 0
    && hProvider > 5u )
  {
    v5 = *(_DWORD *)(v1 + 328);
    v8 = &v5;
    v10 = v13;
    Buffer = DestinationString.Buffer;
    v13[0] = DestinationString.Length;
    v14 = v17;
    v16 = *(_QWORD *)(v1 + 312);
    v17[0] = *(unsigned __int16 *)(v1 + 304);
    v9 = 4LL;
    v11 = 2LL;
    v13[1] = 0;
    v15 = 2LL;
    v17[1] = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0069FB1, v3, v4, 7u, &pData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}

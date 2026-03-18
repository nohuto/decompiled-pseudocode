/*
 * XREFs of AcpiDiagTraceTemperatureTelemetry @ 0x1C0022938
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0021610 (ACPIThermalLoopEx.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00226DC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     _TlgWrite @ 0x1C0022A7C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceTemperatureTelemetry(__int64 a1)
{
  __int64 v1; // rdi
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  UINT32 v6; // [rsp+20h] [rbp-69h]
  int v7; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+78h] [rbp-11h]
  _DWORD *v12; // [rsp+80h] [rbp-9h]
  __int64 v13; // [rsp+88h] [rbp-1h]
  wchar_t *Buffer; // [rsp+90h] [rbp+7h]
  _DWORD v15[2]; // [rsp+98h] [rbp+Fh] BYREF
  _DWORD *v16; // [rsp+A0h] [rbp+17h]
  __int64 v17; // [rsp+A8h] [rbp+1Fh]
  __int64 v18; // [rsp+B0h] [rbp+27h]
  _DWORD v19[6]; // [rsp+B8h] [rbp+2Fh] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), (__int64)&DestinationString, 1) >= 0
    && (unsigned int)dword_1C00740F0 > 5
    && (qword_1C0074100 & 0x400000000000LL) != 0
    && (qword_1C0074108 & 0x400000000000LL) == qword_1C0074108 )
  {
    v7 = *(_DWORD *)(v1 + 328);
    v10 = &v7;
    v12 = v15;
    Buffer = DestinationString.Buffer;
    v15[0] = DestinationString.Length;
    v16 = v19;
    v18 = *(_QWORD *)(v1 + 312);
    v19[0] = *(unsigned __int16 *)(v1 + 304);
    v11 = 4LL;
    v13 = 2LL;
    v15[1] = 0;
    v17 = 2LL;
    v19[1] = 0;
    TlgWrite(v3, &unk_1C00688F9, v4, v5, v6, &pData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}

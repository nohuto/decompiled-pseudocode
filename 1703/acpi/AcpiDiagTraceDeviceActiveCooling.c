/*
 * XREFs of AcpiDiagTraceDeviceActiveCooling @ 0x1C00417D8
 * Callers:
 *     ACPIThermalReevaluateConstraintsWorker @ 0x1C00290E0 (ACPIThermalReevaluateConstraintsWorker.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00226DC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceDeviceActiveCooling(__int64 a1, char a2)
{
  __int16 v4; // [rsp+38h] [rbp-9h] BYREF
  __int16 v5; // [rsp+3Ch] [rbp-5h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+Fh] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp+1Fh]
  int v9; // [rsp+68h] [rbp+27h]
  int v10; // [rsp+6Ch] [rbp+2Bh]
  __int16 *v11; // [rsp+70h] [rbp+2Fh]
  __int64 v12; // [rsp+78h] [rbp+37h]

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_ACTIVE_COOLING)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), (__int64)&DestinationString, 1) >= 0 )
  {
    UserData.Ptr = (unsigned __int64)&v5;
    Buffer = DestinationString.Buffer;
    v5 = DestinationString.Length >> 1;
    *(_QWORD *)&UserData.Size = 2LL;
    v9 = 2 * (DestinationString.Length >> 1);
    v10 = 0;
    v4 = a2 != 0;
    v11 = &v4;
    v12 = 2LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_ACTIVE_COOLING, 0LL, 3u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}

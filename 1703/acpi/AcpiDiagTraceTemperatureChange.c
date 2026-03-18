/*
 * XREFs of AcpiDiagTraceTemperatureChange @ 0x1C0022B1C
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0021610 (ACPIThermalLoopEx.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00226DC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceTemperatureChange(__int64 a1, __int64 a2)
{
  __int16 v4; // [rsp+30h] [rbp-9h] BYREF
  int v5; // [rsp+34h] [rbp-5h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+Fh] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+64h] [rbp+2Bh]
  int *v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+74h] [rbp+3Bh]

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_TEMPERATURE_CHANGE)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a2 + 712), (__int64)&DestinationString, 1) >= 0 )
  {
    UserData.Reserved = 0;
    v10 = 0;
    v13 = 0;
    UserData.Ptr = (unsigned __int64)&v4;
    Buffer = DestinationString.Buffer;
    v4 = DestinationString.Length >> 1;
    v9 = 2 * (DestinationString.Length >> 1);
    v5 = *(_DWORD *)(a1 + 16);
    v11 = &v5;
    UserData.Size = 2;
    v12 = 4;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_TEMPERATURE_CHANGE, 0LL, 3u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}

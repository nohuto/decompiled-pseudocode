/*
 * XREFs of AcpiDiagTraceDevicePassiveCooling @ 0x1C0041A34
 * Callers:
 *     ACPIThermalReevaluateConstraintsWorker @ 0x1C00290E0 (ACPIThermalReevaluateConstraintsWorker.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00226DC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceDevicePassiveCooling(__int64 a1, char a2)
{
  __int16 v3; // [rsp+30h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+Fh] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp+1Fh]
  int v7; // [rsp+60h] [rbp+27h]
  int v8; // [rsp+64h] [rbp+2Bh]
  char *v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+70h] [rbp+37h]
  int v11; // [rsp+74h] [rbp+3Bh]
  char v12; // [rsp+A8h] [rbp+6Fh] BYREF

  v12 = a2;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_PASSIVE_COOLING)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), (__int64)&DestinationString, 1) >= 0 )
  {
    UserData.Reserved = 0;
    v8 = 0;
    v11 = 0;
    UserData.Ptr = (unsigned __int64)&v3;
    Buffer = DestinationString.Buffer;
    v3 = DestinationString.Length >> 1;
    v7 = 2 * (DestinationString.Length >> 1);
    v9 = &v12;
    UserData.Size = 2;
    v10 = 1;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_PASSIVE_COOLING, 0LL, 3u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}

/*
 * XREFs of AcpiDiagTraceDevicePassiveCooling @ 0x1C00415F0
 * Callers:
 *     ACPIThermalReevaluateConstraintsWorker @ 0x1C0029D80 (ACPIThermalReevaluateConstraintsWorker.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C002503C (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceDevicePassiveCooling(__int64 a1, char a2)
{
  __int16 v3; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  char *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]
  char v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = a2;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_PASSIVE_COOLING)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(__int64 **)(a1 + 712), (__int64)&DestinationString, 1) >= 0 )
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

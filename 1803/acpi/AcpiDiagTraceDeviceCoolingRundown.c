/*
 * XREFs of AcpiDiagTraceDeviceCoolingRundown @ 0x1C00070CC
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x1C0006EC0 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0009528 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceDeviceCoolingRundown(__int64 a1, char a2, char a3)
{
  __int16 v5; // [rsp+38h] [rbp-19h] BYREF
  __int16 v6; // [rsp+3Ch] [rbp-15h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  wchar_t *Buffer; // [rsp+68h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+74h] [rbp+23h]
  __int16 *v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  char *v15; // [rsp+88h] [rbp+37h]
  int v16; // [rsp+90h] [rbp+3Fh]
  int v17; // [rsp+94h] [rbp+43h]
  char v18; // [rsp+C8h] [rbp+77h] BYREF

  v18 = a3;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_COOLING_RUNDOWN)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), &DestinationString, 1LL) >= 0 )
  {
    UserData.Reserved = 0;
    v11 = 0;
    UserData.Ptr = (unsigned __int64)&v5;
    Buffer = DestinationString.Buffer;
    v5 = DestinationString.Length >> 1;
    UserData.Size = 2;
    v10 = 2 * (DestinationString.Length >> 1);
    v14 = 0;
    v17 = 0;
    v6 = a2 != 0;
    v12 = &v6;
    v15 = &v18;
    v13 = 2;
    v16 = 1;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_COOLING_RUNDOWN, 0LL, 4u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}

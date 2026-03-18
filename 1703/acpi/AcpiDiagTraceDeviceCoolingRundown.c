/*
 * XREFs of AcpiDiagTraceDeviceCoolingRundown @ 0x1C0041904
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x1C00416F0 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00226DC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceDeviceCoolingRundown(__int64 a1, char a2, char a3)
{
  __int16 v5; // [rsp+30h] [rbp-39h] BYREF
  __int16 v6; // [rsp+34h] [rbp-35h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+68h] [rbp-1h]
  int v11; // [rsp+6Ch] [rbp+3h]
  __int16 *v12; // [rsp+70h] [rbp+7h]
  __int64 v13; // [rsp+78h] [rbp+Fh]
  char *v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  char v16; // [rsp+E0h] [rbp+77h] BYREF

  v16 = a3;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_COOLING_RUNDOWN)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), (__int64)&DestinationString, 1) >= 0 )
  {
    UserData.Ptr = (unsigned __int64)&v6;
    Buffer = DestinationString.Buffer;
    v6 = DestinationString.Length >> 1;
    *(_QWORD *)&UserData.Size = 2LL;
    v10 = 2 * (DestinationString.Length >> 1);
    v11 = 0;
    v5 = a2 != 0;
    v12 = &v5;
    v13 = 2LL;
    v14 = &v16;
    v15 = 1LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_COOLING_RUNDOWN, 0LL, 4u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}

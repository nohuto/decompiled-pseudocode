/*
 * XREFs of AcpiDiagTraceActiveCoolingDevicePower @ 0x1C00412EC
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x1C0022328 (ACPIThermalUpdateConstraints.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00226DC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceActiveCoolingDevicePower(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v7; // rcx
  unsigned __int16 v8; // [rsp+30h] [rbp-91h] BYREF
  __int16 v9; // [rsp+34h] [rbp-8Dh] BYREF
  __int16 v10; // [rsp+38h] [rbp-89h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-81h] BYREF
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-61h] BYREF
  wchar_t *Buffer; // [rsp+70h] [rbp-51h]
  int v15; // [rsp+78h] [rbp-49h]
  int v16; // [rsp+7Ch] [rbp-45h]
  int *v17; // [rsp+80h] [rbp-41h]
  __int64 v18; // [rsp+88h] [rbp-39h]
  int *v19; // [rsp+90h] [rbp-31h]
  __int64 v20; // [rsp+98h] [rbp-29h]
  __int16 *v21; // [rsp+A0h] [rbp-21h]
  __int64 v22; // [rsp+A8h] [rbp-19h]
  wchar_t *v23; // [rsp+B0h] [rbp-11h]
  int v24; // [rsp+B8h] [rbp-9h]
  int v25; // [rsp+BCh] [rbp-5h]
  __int16 *v26; // [rsp+C0h] [rbp-1h]
  __int64 v27; // [rsp+C8h] [rbp+7h]
  int v28; // [rsp+130h] [rbp+6Fh] BYREF
  int v29; // [rsp+138h] [rbp+77h] BYREF

  v29 = a4;
  v28 = a3;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v12, 0LL);
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_ACTIVE_COOLING_DEVICE_POWER) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), (__int64)&DestinationString, 1) >= 0 )
      {
        v7 = *(_QWORD *)(a2 + 712);
        v8 = DestinationString.Length >> 1;
        if ( (int)ACPIAmliBuildObjectPathnameUnicode(v7, (__int64)&v12, 1) >= 0 )
        {
          UserData.Ptr = (unsigned __int64)&v8;
          Buffer = DestinationString.Buffer;
          v15 = 2 * v8;
          v17 = &v28;
          v19 = &v29;
          v21 = &v10;
          v23 = v12.Buffer;
          v10 = v12.Length >> 1;
          *(_QWORD *)&UserData.Size = 2LL;
          v16 = 0;
          v18 = 4LL;
          v20 = 4LL;
          v22 = 2LL;
          v24 = 2 * (v12.Length >> 1);
          v25 = 0;
          v9 = a5 != 0;
          v26 = &v9;
          v27 = 2LL;
          EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_ACTIVE_COOLING_DEVICE_POWER, 0LL, 7u, &UserData);
        }
      }
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v12.Buffer )
    ExFreePoolWithTag(v12.Buffer, 0);
}

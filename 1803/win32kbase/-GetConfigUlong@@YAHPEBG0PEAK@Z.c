/*
 * XREFs of ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C00A2518
 * Callers:
 *     PowerIsDimTimeOutManual @ 0x1C00A4754 (PowerIsDimTimeOutManual.c)
 *     InitializePowerRequestList @ 0x1C01F1078 (InitializePowerRequestList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall GetConfigUlong(const unsigned __int16 *a1, const unsigned __int16 *a2, unsigned int *a3)
{
  NTSTATUS v5; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v13; // [rsp+94h] [rbp+3Bh]
  int v14; // [rsp+98h] [rbp+3Fh]
  unsigned int v15; // [rsp+9Ch] [rbp+43h]

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
    && (RtlInitUnicodeString(&ValueName, a2),
        v5 = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x10u,
               &ResultLength),
        ZwClose(KeyHandle),
        v5 >= 0)
    && v13 == 4
    && v14 == 4 )
  {
    *a3 = v15;
    return 1LL;
  }
  else
  {
    *a3 = 0;
    return 0LL;
  }
}

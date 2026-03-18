/*
 * XREFs of EtwpQueryPartitionRegistryInformation @ 0x14017EEF0
 * Callers:
 *     EtwpContainerResumeWnfCallback @ 0x1402B1170 (EtwpContainerResumeWnfCallback.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     StringToGuidNoBrackets @ 0x14017F0EC (StringToGuidNoBrackets.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlQueryRegistryValuesEx @ 0x14057ECE0 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall EtwpQueryPartitionRegistryInformation(GUID *a1, _DWORD *a2, _QWORD *a3, GUID *a4)
{
  NTSTATUS RegistryValues; // ebx
  __int16 v10; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v16; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v17; // [rsp+A8h] [rbp-58h]
  int v18; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+B8h] [rbp-48h]
  int v20; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING *v21; // [rsp+C8h] [rbp-38h]
  _QWORD v22[28]; // [rsp+E0h] [rbp-20h] BYREF

  *a2 = 0;
  v10 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    memset(v22, 0, sizeof(v22));
    v17 = a2;
    LODWORD(v22[11]) = 1;
    v22[0] = &EtwpQueryRegistryCallback;
    v22[3] = &v16;
    v22[7] = &EtwpQueryRegistryCallback;
    v22[2] = L"ContainerType";
    v18 = 1;
    LODWORD(v22[4]) = 4;
    v16 = 4;
    v22[10] = &v18;
    v22[9] = L"ContainerId";
    v22[12] = &v10;
    p_UnicodeString = &UnicodeString;
    v22[17] = &v20;
    v22[16] = L"ContainerCorrelationId";
    v22[19] = &v10;
    v22[14] = &EtwpQueryRegistryCallback;
    LODWORD(v22[18]) = 1;
    v20 = 1;
    v21 = &v13;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v22, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      *a3 = 0LL;
      if ( (unsigned int)StringToGuidNoBrackets(&UnicodeString, a1) )
        *a1 = NullGuid;
      RegistryValues = StringToGuidNoBrackets(&v13, a4);
      if ( RegistryValues )
      {
        RegistryValues = 0;
        *a4 = NullGuid;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v13);
  return (unsigned int)RegistryValues;
}

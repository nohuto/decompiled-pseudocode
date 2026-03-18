/*
 * XREFs of ExpHwidGetDeviceProperties @ 0x1405D4308
 * Callers:
 *     sub_1405D49A0 @ 0x1405D49A0 (sub_1405D49A0.c)
 *     ExpHwidProcessInterface @ 0x1405E34B0 (ExpHwidProcessInterface.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x1405E3818 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x1401A9A20 (ZwPlugPlayControl.c)
 *     ExpHwidGetDevicePropertyDataFixed @ 0x1405D444C (ExpHwidGetDevicePropertyDataFixed.c)
 *     ExpHwidGetDevicePropertyData @ 0x1405D44D0 (ExpHwidGetDevicePropertyData.c)
 *     sub_1405D472C @ 0x1405D472C (sub_1405D472C.c)
 */

__int64 __fastcall ExpHwidGetDeviceProperties(PDEVICE_OBJECT Pdo, __int64 a2)
{
  NTSTATUS DevicePropertyData; // r8d
  const WCHAR *v5; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+68h] [rbp+10h] BYREF

  sub_1405D472C(a2);
  DevicePropertyData = ExpHwidGetDevicePropertyData(Pdo, a2);
  if ( DevicePropertyData >= 0 )
  {
    if ( (int)ExpHwidGetDevicePropertyDataFixed(Pdo, 0LL, &DEVPKEY_Device_ClassGuid, 13LL, 16, a2 + 16) < 0 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 24) = 0LL;
    }
    DevicePropertyData = ExpHwidGetDevicePropertyDataFixed(Pdo, 0LL, &DEVPKEY_Device_RemovalPolicy, 7LL, 4, &v9);
    if ( DevicePropertyData >= 0 )
    {
      v5 = *(const WCHAR **)(a2 + 8);
      *(_BYTE *)(a2 + 34) = v9;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      v8 = 0LL;
      RtlInitUnicodeString(&DestinationString, v5);
      DevicePropertyData = ZwPlugPlayControl(PlugPlayControlGetDeviceDepth, &DestinationString, 0x18u);
      if ( DevicePropertyData >= 0 )
      {
        *(_DWORD *)(a2 + 36) = v8;
        DevicePropertyData = ExpHwidGetDevicePropertyData(Pdo, (int)a2 + 56);
        if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741772 )
          return 0;
      }
    }
  }
  return (unsigned int)DevicePropertyData;
}

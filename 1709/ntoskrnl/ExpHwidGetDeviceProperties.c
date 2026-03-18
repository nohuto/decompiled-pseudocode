/*
 * XREFs of ExpHwidGetDeviceProperties @ 0x14054F0F0
 * Callers:
 *     sub_14054EB00 @ 0x14054EB00 (sub_14054EB00.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14055F790 (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidProcessInterface @ 0x14055F97C (ExpHwidProcessInterface.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x14017FDE0 (ZwPlugPlayControl.c)
 *     ExpHwidGetDevicePropertyDataFixed @ 0x14054F234 (ExpHwidGetDevicePropertyDataFixed.c)
 *     ExpHwidGetDevicePropertyData @ 0x14054F2B8 (ExpHwidGetDevicePropertyData.c)
 *     sub_14054F900 @ 0x14054F900 (sub_14054F900.c)
 */

__int64 __fastcall ExpHwidGetDeviceProperties(PDEVICE_OBJECT Pdo, __int64 a2)
{
  NTSTATUS DevicePropertyData; // r8d
  const WCHAR *v5; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+68h] [rbp+10h] BYREF

  sub_14054F900(a2);
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

/*
 * XREFs of RaidUnitGetDeviceParameters @ 0x1C0060E2C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006110C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     WPP_SF_q @ 0x1C0030A44 (WPP_SF_q.c)
 *     WPP_SF_qddd @ 0x1C0030EDC (WPP_SF_qddd.c)
 */

int __fastcall RaidUnitGetDeviceParameters(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  int *v3; // rdi
  PDEVICE_OBJECT *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-E0h]
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+30h] [rbp-D0h]
  void *DeviceRegKey; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v13[50]; // [rsp+90h] [rbp-70h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.Length = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x49u,
      (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      a1);
  }
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v3 = (int *)(a1 + 1548);
  *(_DWORD *)(a1 + 1544) = 20;
  *(_DWORD *)(a1 + 1548) = 25;
  *(_DWORD *)(a1 + 1552) = 250;
  *(_DWORD *)(a1 + 1556) = 0;
  *(_DWORD *)(a1 + 1564) = -1;
  LODWORD(v4) = IoOpenDeviceRegistryKey(v2, 1u, 0x20019u, &DeviceRegKey);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Storport");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v4) = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( (int)v4 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Au,
          (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
          a1);
      }
      memset(v13, 0, 0x188uLL);
      v13[2] = L"QueueFullWaitIoPercentage";
      LODWORD(v13[4]) = 67108868;
      LODWORD(v13[1]) = 288;
      LODWORD(v13[6]) = 4;
      v13[9] = L"BusyPauseTime";
      LODWORD(v13[8]) = 288;
      v13[16] = L"BusyRetryCount";
      v13[23] = L"EnableLogoETW";
      v13[30] = L"DisableIdlePowerManagement";
      v13[31] = a1 + 1560;
      v13[33] = a1 + 1560;
      LODWORD(v13[11]) = 67108868;
      LODWORD(v13[13]) = 4;
      LODWORD(v13[15]) = 288;
      LODWORD(v13[18]) = 67108868;
      LODWORD(v13[20]) = 4;
      LODWORD(v13[22]) = 288;
      LODWORD(v13[25]) = 67108868;
      LODWORD(v13[27]) = 4;
      LODWORD(v13[29]) = 288;
      LODWORD(v13[32]) = 67108868;
      LODWORD(v13[34]) = 4;
      LODWORD(v13[36]) = 288;
      LODWORD(v13[39]) = 67108868;
      LODWORD(v13[41]) = 4;
      v13[37] = L"MinimumIdleTimeoutInMS";
      v13[3] = a1 + 1548;
      v13[5] = a1 + 1548;
      v13[10] = a1 + 1552;
      v13[12] = a1 + 1552;
      v13[17] = a1 + 1544;
      v13[19] = a1 + 1544;
      v13[24] = a1 + 1556;
      v13[26] = a1 + 1556;
      v13[38] = a1 + 1564;
      v13[40] = a1 + 1564;
      RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v13, 0LL, 0LL);
      if ( (unsigned int)*v3 > 0x64 )
        *v3 = 25;
      v4 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(v4) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( ((unsigned __int8)v4 & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v8 = *v3;
          v7 = *(_DWORD *)(a1 + 1552);
          LODWORD(v6) = *(_DWORD *)(a1 + 1544);
          LODWORD(v4) = WPP_SF_qddd(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          0x4Bu,
                          (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
                          a1,
                          v6,
                          v7,
                          v8);
        }
      }
    }
  }
  if ( DeviceRegKey )
    LODWORD(v4) = ZwClose(DeviceRegKey);
  if ( KeyHandle )
    LODWORD(v4) = ZwClose(KeyHandle);
  return (int)v4;
}

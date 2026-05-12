/*
 * XREFs of RaidUnitGetDeviceParameters @ 0x1C005FE64
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     WPP_SF_q @ 0x1C002C118 (WPP_SF_q.c)
 *     WPP_SF_qddd @ 0x1C002C5AC (WPP_SF_qddd.c)
 */

int __fastcall RaidUnitGetDeviceParameters(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  int *v3; // rdi
  PDEVICE_OBJECT *v4; // rax
  int v5; // r8d
  __int64 v7; // [rsp+20h] [rbp-E0h]
  int v8; // [rsp+28h] [rbp-D8h]
  int v9; // [rsp+30h] [rbp-D0h]
  void *DeviceRegKey; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v14[50]; // [rsp+90h] [rbp-70h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x49u,
      (__int64)&WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
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
          (__int64)&WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
          a1);
      }
      memset(v14, 0, 0x188uLL);
      v14[2] = L"QueueFullWaitIoPercentage";
      LODWORD(v14[4]) = 67108868;
      LODWORD(v14[1]) = 288;
      LODWORD(v14[6]) = 4;
      v14[9] = L"BusyPauseTime";
      LODWORD(v14[8]) = 288;
      v14[16] = L"BusyRetryCount";
      v14[23] = L"EnableLogoETW";
      v14[30] = L"DisableIdlePowerManagement";
      v14[31] = a1 + 1560;
      v14[33] = a1 + 1560;
      LODWORD(v14[11]) = 67108868;
      LODWORD(v14[13]) = 4;
      LODWORD(v14[15]) = 288;
      LODWORD(v14[18]) = 67108868;
      LODWORD(v14[20]) = 4;
      LODWORD(v14[22]) = 288;
      LODWORD(v14[25]) = 67108868;
      LODWORD(v14[27]) = 4;
      LODWORD(v14[29]) = 288;
      LODWORD(v14[32]) = 67108868;
      LODWORD(v14[34]) = 4;
      LODWORD(v14[36]) = 288;
      LODWORD(v14[39]) = 67108868;
      LODWORD(v14[41]) = 4;
      v14[37] = L"MinimumIdleTimeoutInMS";
      v14[3] = a1 + 1548;
      v14[5] = a1 + 1548;
      v14[10] = a1 + 1552;
      v14[12] = a1 + 1552;
      v14[17] = a1 + 1544;
      v14[19] = a1 + 1544;
      v14[24] = a1 + 1556;
      v14[26] = a1 + 1556;
      v14[38] = a1 + 1564;
      v14[40] = a1 + 1564;
      RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v14, 0LL, 0LL);
      v5 = *v3;
      if ( (unsigned int)*v3 > 0x64 )
      {
        v5 = 25;
        *v3 = 25;
      }
      v4 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(v4) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( ((unsigned __int8)v4 & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v9 = v5;
          v8 = *(_DWORD *)(a1 + 1552);
          LODWORD(v7) = *(_DWORD *)(a1 + 1544);
          LODWORD(v4) = WPP_SF_qddd(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          0x4Bu,
                          (__int64)&WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
                          a1,
                          v7,
                          v8,
                          v9);
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

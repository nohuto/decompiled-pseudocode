/*
 * XREFs of ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18006D070
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x18005EE60 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x18006D38C (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x18006D3F0 (-UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18007548C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnInputReport(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int *a4)
{
  unsigned int v5; // r12d
  int DeviceId; // edx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r13
  struct _HIDP_CAPS *v10; // rbx
  int HIDCapabilities; // eax
  unsigned int InputReportByteLength; // edi
  NTSTATUS v13; // edx
  NTSTATUS v14; // edx
  NTSTATUS Usages; // edx
  USHORT v16; // ax
  USHORT *v17; // rdx
  unsigned int v18; // edi
  struct _HIDP_CAPS **v19; // r8
  __int64 v20; // rax
  struct _HIDP_CAPS *v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h]
  ULONG UsageValue; // [rsp+50h] [rbp-B0h] BYREF
  ULONG UsageLength[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _HIDP_CAPS *v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+68h] [rbp-98h]
  struct _HIDP_CAPS *v28; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+78h] [rbp-88h]
  _BYTE v30[24]; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+98h] [rbp-68h]
  char v32; // [rsp+4F8h] [rbp+3F8h]
  float v33; // [rsp+4FCh] [rbp+3FCh]
  float v34; // [rsp+500h] [rbp+400h]
  USHORT UsageList[20]; // [rsp+750h] [rbp+650h] BYREF

  *(_QWORD *)UsageLength = 0LL;
  v22 = 0LL;
  v5 = (unsigned int)a4;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, (struct RIMDevice **)UsageLength, a4);
  if ( DeviceId >= 0 )
  {
    PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)UsageLength + 48LL);
    v10 = (struct _HIDP_CAPS *)(*(_QWORD *)UsageLength + 60LL);
    if ( *(_WORD *)(*(_QWORD *)UsageLength + 60LL) )
    {
      DeviceId = 0;
    }
    else
    {
      HIDCapabilities = HIDDevice::GetHIDCapabilities(*(HIDDevice **)UsageLength, &v22);
      v10 = v22;
      DeviceId = HIDCapabilities;
    }
    if ( DeviceId >= 0 )
    {
      UsageValue = 0;
      InputReportByteLength = v10->InputReportByteLength;
      if ( v5 >= InputReportByteLength )
      {
        while ( 1 )
        {
          memset_0(v30, 0, 0x6C8uLL);
          v31 = 1736;
          v13 = HidP_GetUsageValue(
                  HidP_Input,
                  1u,
                  0,
                  0x33u,
                  &UsageValue,
                  PreparsedData,
                  Report,
                  (unsigned __int16)InputReportByteLength);
          if ( v13 < 0 )
          {
            DeviceId = v13 | 0x10000000;
            if ( DeviceId < 0 )
              return (unsigned int)DeviceId;
          }
          v33 = (float)(__int16)UsageValue / 10.0;
          v14 = HidP_GetUsageValue(
                  HidP_Input,
                  1u,
                  0,
                  0x34u,
                  &UsageValue,
                  PreparsedData,
                  Report,
                  v10->InputReportByteLength);
          if ( v14 < 0 )
          {
            DeviceId = v14 | 0x10000000;
            if ( DeviceId < 0 )
              return (unsigned int)DeviceId;
          }
          v32 = 0;
          UsageLength[0] = 20;
          v34 = (float)(__int16)UsageValue / 10.0;
          Usages = HidP_GetUsages(
                     HidP_Input,
                     9u,
                     0,
                     UsageList,
                     UsageLength,
                     PreparsedData,
                     Report,
                     v10->InputReportByteLength);
          if ( Usages < 0 )
          {
            DeviceId = Usages | 0x10000000;
            if ( DeviceId < 0 )
              return (unsigned int)DeviceId;
          }
          v16 = UsageList[0];
          v17 = UsageList;
          while ( v16 )
          {
            if ( v16 == 1 )
              v32 = 1;
            v16 = *++v17;
          }
          v22 = 0LL;
          v23 = 0;
          DeviceId = AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
                       this,
                       a2,
                       (struct AugmentedInputCacheState *)&v22);
          if ( DeviceId < 0 )
            return (unsigned int)DeviceId;
          if ( v32 )
            break;
          if ( BYTE4(v22) )
          {
            v19 = &v28;
            BYTE4(v22) = 0;
            v18 = 4;
            v28 = v22;
            v29 = v23;
            goto LABEL_25;
          }
LABEL_27:
          v20 = v10->InputReportByteLength;
          v5 -= v20;
          Report += v20;
          LOWORD(InputReportByteLength) = v10->InputReportByteLength;
          if ( v5 < (unsigned __int16)InputReportByteLength )
            return (unsigned int)DeviceId;
        }
        if ( BYTE4(v22) )
        {
          v18 = 3;
        }
        else
        {
          v19 = &v26;
          BYTE4(v22) = 1;
          v18 = 2;
          v26 = v22;
          v27 = v23;
LABEL_25:
          DeviceId = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, a2, v19);
          if ( DeviceId < 0 )
            return (unsigned int)DeviceId;
        }
        MPCInputInfoHelper::PopulateAugmentedInput(v18, a2, (int)v22, SHIWORD(v22), v23, SHIWORD(v22), (__int64)v30);
        DeviceId = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v30);
        if ( DeviceId < 0 )
          return (unsigned int)DeviceId;
        goto LABEL_27;
      }
    }
  }
  return (unsigned int)DeviceId;
}

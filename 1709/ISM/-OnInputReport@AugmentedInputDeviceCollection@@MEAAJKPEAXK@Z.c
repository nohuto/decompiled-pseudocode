/*
 * XREFs of ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008C1B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180067A9C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x18008C5A4 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x18008C5FC (-UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CFDC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnInputReport(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int *a4)
{
  unsigned int v5; // r14d
  int DeviceId; // eax
  __int64 v9; // rcx
  ULONG v10; // r11d
  unsigned int v11; // ebx
  int v12; // r9d
  __int64 v13; // rcx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  struct _HIDP_CAPS *v15; // rdi
  unsigned int HIDCapabilities; // eax
  __int64 v17; // rcx
  NTSTATUS v18; // ebx
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  NTSTATUS Usages; // ebx
  USHORT v22; // ax
  USHORT *v23; // rdx
  __int64 v24; // rdx
  char v25; // r11
  unsigned int v26; // r10d
  __int64 v27; // rcx
  __int64 InputReportByteLength; // rax
  struct _HIDP_CAPS *v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+48h] [rbp-B8h]
  ULONG UsageValue; // [rsp+50h] [rbp-B0h] BYREF
  ULONG UsageLength[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _HIDP_CAPS *v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  struct _HIDP_CAPS *v36; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+78h] [rbp-88h]
  float v38[712]; // [rsp+80h] [rbp-80h] BYREF
  USHORT UsageList[20]; // [rsp+BA0h] [rbp+AA0h] BYREF

  *(_QWORD *)UsageLength = 0LL;
  v30 = 0LL;
  v5 = (unsigned int)a4;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, (struct RIMDevice **)UsageLength, a4);
  v11 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v13 = *(_QWORD *)UsageLength;
    PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)UsageLength + 48LL);
    v15 = (struct _HIDP_CAPS *)(*(_QWORD *)UsageLength + 60LL);
    if ( *(_WORD *)(*(_QWORD *)UsageLength + 60LL) == (_WORD)v10 )
    {
      HIDCapabilities = HIDDevice::GetHIDCapabilities(*(HIDDevice **)UsageLength, &v30);
      v15 = v30;
      v11 = HIDCapabilities;
      v10 = 0;
    }
    else
    {
      v11 = v10;
    }
    if ( (v11 & 0x80000000) != 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 175, v11);
      return v11;
    }
    UsageValue = v10;
    while ( 1 )
    {
      if ( v5 < v15->InputReportByteLength )
        return v11;
      memset(v38, 0, sizeof(v38));
      v18 = HidP_GetUsageValue(HidP_Input, 1u, 0, 0x33u, &UsageValue, PreparsedData, Report, v15->InputReportByteLength);
      if ( v18 < 0 )
      {
        v11 = v18 | 0x10000000;
        if ( (v11 & 0x80000000) != 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 197, v11);
          return v11;
        }
      }
      v38[331] = (float)(__int16)UsageValue / 10.0;
      v19 = HidP_GetUsageValue(HidP_Input, 1u, 0, 0x34u, &UsageValue, PreparsedData, Report, v15->InputReportByteLength);
      if ( v19 < 0 )
      {
        v11 = v19 | 0x10000000;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 212, v19);
        return v11;
      }
      LOBYTE(v38[330]) = 0;
      UsageLength[0] = 20;
      v38[332] = (float)(__int16)UsageValue / 10.0;
      Usages = HidP_GetUsages(
                 HidP_Input,
                 9u,
                 0,
                 UsageList,
                 UsageLength,
                 PreparsedData,
                 Report,
                 v15->InputReportByteLength);
      if ( Usages < 0 )
      {
        v11 = Usages | 0x10000000;
        if ( (v11 & 0x80000000) != 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, 231, v11);
          return v11;
        }
      }
      v22 = UsageList[0];
      v23 = UsageList;
      while ( v22 )
      {
        if ( v22 == 1 )
          LOBYTE(v38[330]) = 1;
        v22 = *++v23;
      }
      v30 = 0LL;
      v31 = 0;
      DeviceId = AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
                   this,
                   a2,
                   (struct AugmentedInputCacheState *)&v30);
      v11 = DeviceId;
      if ( DeviceId < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v11;
        v12 = 246;
        goto LABEL_46;
      }
      if ( LOBYTE(v38[330]) == v25 )
      {
        if ( BYTE4(v30) == v25 )
          goto LABEL_33;
        BYTE4(v30) = v25;
        v36 = v30;
        v37 = v31;
        DeviceId = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, v24, &v36);
        v11 = DeviceId;
        if ( DeviceId < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v11;
          v12 = 267;
          goto LABEL_46;
        }
      }
      else if ( BYTE4(v30) == v25 )
      {
        BYTE4(v30) = 1;
        v34 = v30;
        v35 = v31;
        DeviceId = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, v24, &v34);
        v11 = DeviceId;
        if ( DeviceId < 0 )
        {
          if ( ((unsigned __int8)v26 & (unsigned __int8)Microsoft_OneCore_MinInputEnableBits) == 0 )
            return v11;
          v12 = 258;
          goto LABEL_46;
        }
      }
      else
      {
        v26 = 3;
      }
      MPCInputInfoHelper::PopulateAugmentedInput(v26, a2, (int)v30, SHIWORD(v30), v31, SHIWORD(v30), (__int64)v38);
      v11 = (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v38);
      if ( (v11 & 0x80000000) != 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 274, v11);
        return v11;
      }
LABEL_33:
      InputReportByteLength = v15->InputReportByteLength;
      v5 -= InputReportByteLength;
      Report += InputReportByteLength;
    }
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v12 = 173;
LABEL_46:
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, v12, DeviceId);
  }
  return v11;
}

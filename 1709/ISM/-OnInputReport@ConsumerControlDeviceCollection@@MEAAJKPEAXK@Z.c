/*
 * XREFs of ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009A950
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A448 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?GetValueForKey@?$FixedSizeMap@KUUsageList@MobileButtonDeviceCollection@@$0BAA@@@QEAAJAEBKPEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x18009A34C (-GetValueForKey@-$FixedSizeMap@KUUsageList@MobileButtonDeviceCollection@@$0BAA@@@QEAAJAEBKPEAUUs.c)
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x18009AD38 (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CFDC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnInputReport(
        ConsumerControlDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int a4)
{
  unsigned int *v8; // r9
  int DeviceInfo; // eax
  __int64 v10; // rcx
  unsigned int *v11; // r9
  unsigned int v12; // ebx
  int v13; // r9d
  HIDDevice *v14; // rcx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  struct _HIDP_CAPS *v16; // rsi
  unsigned int HIDCapabilities; // eax
  __int64 v18; // rcx
  NTSTATUS Usages; // ebx
  __int64 v20; // rdi
  NTSTATUS v21; // eax
  unsigned __int16 *i; // rdi
  DWORD TickCount; // ebx
  unsigned __int16 *j; // rdi
  DWORD v25; // ebx
  __int64 InputReportByteLength; // rax
  PHIDP_PREPARSED_DATA v28; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UsageLength; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_CAPS *v31; // [rsp+58h] [rbp-A8h] BYREF
  __int128 PreviousUsageList; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[2848]; // [rsp+70h] [rbp-90h] BYREF
  USHORT UsageList[20]; // [rsp+B90h] [rbp+A90h] BYREF
  USHORT BreakUsageList[20]; // [rsp+BB8h] [rbp+AB8h] BYREF
  USHORT MakeUsageList[20]; // [rsp+BE0h] [rbp+AE0h] BYREF
  unsigned int v37; // [rsp+C58h] [rbp+B58h] BYREF

  v37 = a2;
  v28 = 0LL;
  v31 = 0LL;
  memset(UsageList, 0, sizeof(UsageList));
  UsageLength = 20;
  memset(MakeUsageList, 0, sizeof(MakeUsageList));
  memset(BreakUsageList, 0, sizeof(BreakUsageList));
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, (struct DeviceInfo **)&PreviousUsageList, v8);
  v12 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v13 = 209;
      goto LABEL_44;
    }
    return v12;
  }
  DeviceInfo = RIMDeviceCollection::FindDeviceId(this, a2, &v28, v11);
  v12 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v13 = 213;
      goto LABEL_44;
    }
    return v12;
  }
  v14 = v28;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)v28 + 6);
  v16 = (struct _HIDP_CAPS *)((char *)v28 + 60);
  v28 = PreparsedData;
  if ( v16->Usage )
  {
    v12 = 0;
  }
  else
  {
    HIDCapabilities = HIDDevice::GetHIDCapabilities(v14, &v31);
    PreparsedData = v28;
    v12 = HIDCapabilities;
    v16 = v31;
  }
  if ( (v12 & 0x80000000) != 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)v14, &MinInput_Warning_CheckResult, 0, 215, v12);
    return v12;
  }
  if ( a4 < v16->InputReportByteLength )
    return v12;
  while ( 1 )
  {
    Usages = HidP_GetUsages(
               HidP_Input,
               0xCu,
               0,
               UsageList,
               &UsageLength,
               PreparsedData,
               Report,
               v16->InputReportByteLength);
    if ( Usages < 0 )
    {
      v12 = Usages | 0x10000000;
      if ( (v12 & 0x80000000) != 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 243, v12);
        return v12;
      }
    }
    DeviceInfo = FixedSizeMap<unsigned long,MobileButtonDeviceCollection::UsageList,256>::GetValueForKey(
                   (_DWORD *)this + 690,
                   &v37,
                   &PreviousUsageList);
    v12 = DeviceInfo;
    if ( DeviceInfo < 0 )
      break;
    if ( DWORD2(PreviousUsageList) > 0x14 )
    {
      v12 = -2147467259;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 255, 5);
      return v12;
    }
    v20 = PreviousUsageList;
    v21 = HidP_UsageListDifference(
            (PUSAGE)PreviousUsageList,
            UsageList,
            BreakUsageList,
            MakeUsageList,
            DWORD2(PreviousUsageList));
    if ( v21 < 0 )
    {
      v12 = v21 | 0x10000000;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 263, v21);
      return v12;
    }
    *(_OWORD *)v20 = *(_OWORD *)UsageList;
    *(_OWORD *)(v20 + 16) = *(_OWORD *)&UsageList[8];
    *(_QWORD *)(v20 + 32) = *(_QWORD *)&UsageList[16];
    for ( i = BreakUsageList; *i; ++i )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      if ( (int)ConsumerControlDeviceCollection::CreateButtonInfo(
                  (ConsumerControlDeviceCollection *)*i,
                  a2,
                  TickCount,
                  PerformanceCount,
                  *i,
                  0,
                  (struct InputInfo *)v33) < 0 )
      {
        v12 = 0;
      }
      else
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v33);
        v10 = 0LL;
        v12 = DeviceInfo;
        if ( DeviceInfo < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v13 = 299;
            goto LABEL_44;
          }
          return v12;
        }
      }
    }
    for ( j = MakeUsageList; *j; ++j )
    {
      v25 = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      if ( (int)ConsumerControlDeviceCollection::CreateButtonInfo(
                  (ConsumerControlDeviceCollection *)*j,
                  a2,
                  v25,
                  PerformanceCount,
                  *j,
                  1,
                  (struct InputInfo *)v33) < 0 )
      {
        v12 = 0;
      }
      else
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v33);
        v10 = 0LL;
        v12 = DeviceInfo;
        if ( DeviceInfo < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v13 = 340;
            goto LABEL_44;
          }
          return v12;
        }
      }
    }
    InputReportByteLength = v16->InputReportByteLength;
    a4 -= InputReportByteLength;
    Report += InputReportByteLength;
    if ( a4 < (unsigned int)InputReportByteLength )
      return v12;
    PreparsedData = v28;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v13 = 247;
LABEL_44:
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, v13, DeviceInfo);
  }
  return v12;
}

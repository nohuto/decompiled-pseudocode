/*
 * XREFs of ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180099BF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A448 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x18009A1C4 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetValueForKey@?$FixedSizeMap@KUUsageList@MobileButtonDeviceCollection@@$0BAA@@@QEAAJAEBKPEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x18009A34C (-GetValueForKey@-$FixedSizeMap@KUUsageList@MobileButtonDeviceCollection@@$0BAA@@@QEAAJAEBKPEAUUs.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CFDC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnInputReport(
        MobileButtonDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int a4)
{
  unsigned int *v8; // r9
  int DeviceInfo; // eax
  __int64 v10; // rcx
  unsigned int *v11; // r9
  unsigned int ButtonInfo; // ebx
  int v13; // r9d
  HIDDevice *v14; // rcx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  struct _HIDP_CAPS *v16; // rsi
  unsigned int HIDCapabilities; // eax
  __int64 v18; // rcx
  NTSTATUS Usages; // ebx
  PUSAGE v20; // rdi
  NTSTATUS v21; // eax
  unsigned __int16 *v22; // rdi
  DWORD TickCount; // ebx
  unsigned __int16 *v24; // rdi
  DWORD v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 InputReportByteLength; // rax
  PHIDP_PREPARSED_DATA v30; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UsageLength; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_CAPS *v33; // [rsp+58h] [rbp-A8h] BYREF
  PUSAGE PreviousUsageList; // [rsp+60h] [rbp-A0h] BYREF
  ULONG UsageListLength; // [rsp+68h] [rbp-98h]
  _BYTE v36[2848]; // [rsp+70h] [rbp-90h] BYREF
  USHORT UsageList[20]; // [rsp+B90h] [rbp+A90h] BYREF
  USHORT BreakUsageList[20]; // [rsp+BB8h] [rbp+AB8h] BYREF
  USHORT MakeUsageList[20]; // [rsp+BE0h] [rbp+AE0h] BYREF
  unsigned int v40; // [rsp+C58h] [rbp+B58h] BYREF

  v40 = a2;
  v30 = 0LL;
  v33 = 0LL;
  memset(UsageList, 0, sizeof(UsageList));
  UsageLength = 20;
  memset(MakeUsageList, 0, sizeof(MakeUsageList));
  memset(BreakUsageList, 0, sizeof(BreakUsageList));
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, (struct DeviceInfo **)&PreviousUsageList, v8);
  ButtonInfo = DeviceInfo;
  if ( DeviceInfo >= 0 )
  {
    DeviceInfo = RIMDeviceCollection::FindDeviceId(this, a2, &v30, v11);
    ButtonInfo = DeviceInfo;
    if ( DeviceInfo >= 0 )
    {
      v14 = v30;
      PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)v30 + 6);
      v16 = (struct _HIDP_CAPS *)((char *)v30 + 60);
      v30 = PreparsedData;
      if ( v16->Usage )
      {
        ButtonInfo = 0;
      }
      else
      {
        HIDCapabilities = HIDDevice::GetHIDCapabilities(v14, &v33);
        PreparsedData = v30;
        ButtonInfo = HIDCapabilities;
        v16 = v33;
      }
      if ( (ButtonInfo & 0x80000000) == 0 )
      {
        if ( a4 >= v16->InputReportByteLength )
        {
          while ( 1 )
          {
            Usages = HidP_GetUsages(
                       HidP_Input,
                       7u,
                       0,
                       UsageList,
                       &UsageLength,
                       PreparsedData,
                       Report,
                       v16->InputReportByteLength);
            if ( Usages < 0 )
            {
              ButtonInfo = Usages | 0x10000000;
              if ( (ButtonInfo & 0x80000000) != 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                  McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 253, ButtonInfo);
                return ButtonInfo;
              }
            }
            DeviceInfo = FixedSizeMap<unsigned long,MobileButtonDeviceCollection::UsageList,256>::GetValueForKey(
                           (char *)this + 2760,
                           &v40,
                           &PreviousUsageList);
            ButtonInfo = DeviceInfo;
            if ( DeviceInfo < 0 )
              break;
            if ( UsageListLength > 0x14 )
            {
              ButtonInfo = -2147467259;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 265, 5);
              return ButtonInfo;
            }
            v20 = PreviousUsageList;
            v21 = HidP_UsageListDifference(PreviousUsageList, UsageList, BreakUsageList, MakeUsageList, UsageListLength);
            if ( v21 < 0 )
            {
              ButtonInfo = v21 | 0x10000000;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 273, v21);
              return ButtonInfo;
            }
            *(_OWORD *)v20 = *(_OWORD *)UsageList;
            *((_OWORD *)v20 + 1) = *(_OWORD *)&UsageList[8];
            *((_QWORD *)v20 + 4) = *(_QWORD *)&UsageList[16];
            v22 = BreakUsageList;
            if ( BreakUsageList[0] )
            {
              while ( 1 )
              {
                TickCount = GetTickCount();
                QueryPerformanceCounter(&PerformanceCount);
                DeviceInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                               (MobileButtonDeviceCollection *)*v22,
                               a2,
                               TickCount,
                               PerformanceCount,
                               *v22,
                               0,
                               (struct InputInfo *)v36);
                ButtonInfo = DeviceInfo;
                if ( DeviceInfo < 0 )
                  break;
                DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                               *((_QWORD *)this + 2),
                               v36);
                v10 = 0LL;
                ButtonInfo = DeviceInfo;
                if ( DeviceInfo < 0 )
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                    return ButtonInfo;
                  v13 = 308;
                  goto LABEL_46;
                }
                if ( !*++v22 )
                  goto LABEL_24;
              }
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return ButtonInfo;
              v13 = 301;
              goto LABEL_46;
            }
LABEL_24:
            v24 = MakeUsageList;
            if ( MakeUsageList[0] )
            {
              while ( 1 )
              {
                v25 = GetTickCount();
                QueryPerformanceCounter(&PerformanceCount);
                ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                               (MobileButtonDeviceCollection *)*v24,
                               a2,
                               v25,
                               PerformanceCount,
                               *v24,
                               1,
                               (struct InputInfo *)v36);
                if ( (ButtonInfo & 0x80000000) != 0 )
                  break;
                ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                               *((_QWORD *)this + 2),
                               v36);
                if ( (ButtonInfo & 0x80000000) != 0 )
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                    McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 339, ButtonInfo);
                  return ButtonInfo;
                }
                if ( !*++v24 )
                  goto LABEL_28;
              }
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(v26, &MinInput_Warning_CheckResult, 0, 332, ButtonInfo);
              return ButtonInfo;
            }
LABEL_28:
            InputReportByteLength = v16->InputReportByteLength;
            a4 -= InputReportByteLength;
            Report += InputReportByteLength;
            if ( a4 < (unsigned int)InputReportByteLength )
              return ButtonInfo;
            PreparsedData = v30;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return ButtonInfo;
          v13 = 257;
          goto LABEL_46;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq((__int64)v14, &MinInput_Warning_CheckResult, 0, 225, ButtonInfo);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v13 = 223;
      goto LABEL_46;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v13 = 219;
LABEL_46:
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, v13, DeviceInfo);
  }
  return ButtonInfo;
}

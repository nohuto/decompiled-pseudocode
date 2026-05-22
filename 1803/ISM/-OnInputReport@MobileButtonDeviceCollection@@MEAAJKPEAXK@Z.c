/*
 * XREFs of ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180072D90
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800730DC (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18007548C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnInputReport(
        MobileButtonDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int a4)
{
  unsigned int *v8; // r9
  int v9; // edx
  int DeviceId; // ebx
  unsigned int *v11; // r9
  HIDDevice *v12; // rcx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  struct _HIDP_CAPS *v14; // r14
  int HIDCapabilities; // eax
  __int64 InputReportByteLength; // rax
  NTSTATUS Usages; // ebx
  _DWORD *v18; // rcx
  __int64 v19; // rax
  ULONG v20; // eax
  PUSAGE v21; // rdi
  NTSTATUS v22; // eax
  unsigned __int16 *v23; // rdi
  DWORD TickCount; // ebx
  unsigned __int16 *v25; // rdi
  DWORD v26; // ebx
  PHIDP_PREPARSED_DATA v28; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UsageLength; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_CAPS *v31; // [rsp+58h] [rbp-A8h] BYREF
  PUSAGE PreviousUsageList[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[24]; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+88h] [rbp-78h]
  USHORT UsageList[8]; // [rsp+740h] [rbp+640h] BYREF
  __int128 v36; // [rsp+750h] [rbp+650h]
  __int64 v37; // [rsp+760h] [rbp+660h]
  USHORT BreakUsageList[20]; // [rsp+768h] [rbp+668h] BYREF
  USHORT MakeUsageList[20]; // [rsp+790h] [rbp+690h] BYREF

  v28 = 0LL;
  v31 = 0LL;
  memset_0(UsageList, 0, 0x28uLL);
  UsageLength = 20;
  memset_0(MakeUsageList, 0, sizeof(MakeUsageList));
  memset_0(BreakUsageList, 0, sizeof(BreakUsageList));
  memset_0(v33, 0, 0x6C8uLL);
  v34 = 1736;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, (struct RIMDevice **)PreviousUsageList, v8);
  if ( DeviceId >= 0 )
  {
    DeviceId = RIMDeviceCollection::FindDeviceId(this, v9, &v28, v11);
    if ( DeviceId >= 0 )
    {
      v12 = v28;
      PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)v28 + 6);
      v14 = (struct _HIDP_CAPS *)((char *)v28 + 60);
      v28 = PreparsedData;
      if ( v14->Usage )
      {
        DeviceId = 0;
      }
      else
      {
        HIDCapabilities = HIDDevice::GetHIDCapabilities(v12, &v31);
        PreparsedData = v28;
        DeviceId = HIDCapabilities;
        v14 = v31;
      }
      if ( DeviceId >= 0 )
      {
        LODWORD(InputReportByteLength) = v14->InputReportByteLength;
        if ( a4 >= (unsigned int)InputReportByteLength )
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
                       (unsigned __int16)InputReportByteLength);
            if ( Usages < 0 )
            {
              DeviceId = Usages | 0x10000000;
              if ( DeviceId < 0 )
                break;
            }
            v18 = (_DWORD *)((char *)this + 2760);
            if ( a2 == *((_DWORD *)this + 2226) )
              return (unsigned int)-2147024809;
            v19 = 0LL;
            while ( *v18 != a2 )
            {
              v19 = (unsigned int)(v19 + 1);
              v18 += 6;
              if ( (unsigned int)v19 >= 0x100 )
                return (unsigned int)-2147467259;
            }
            DeviceId = 0;
            *(_OWORD *)PreviousUsageList = *(_OWORD *)((char *)this + 24 * v19 + 2768);
            v20 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)PreviousUsageList, 8));
            if ( v20 > 0x14 )
              return (unsigned int)-2147467259;
            v21 = PreviousUsageList[0];
            v22 = HidP_UsageListDifference(PreviousUsageList[0], UsageList, BreakUsageList, MakeUsageList, v20);
            if ( v22 < 0 )
              return (unsigned int)(v22 | 0x10000000);
            *(_OWORD *)v21 = *(_OWORD *)UsageList;
            *((_OWORD *)v21 + 1) = v36;
            *((_QWORD *)v21 + 4) = v37;
            v23 = BreakUsageList;
            if ( BreakUsageList[0] )
            {
              while ( 1 )
              {
                TickCount = GetTickCount();
                QueryPerformanceCounter(&PerformanceCount);
                DeviceId = MobileButtonDeviceCollection::CreateButtonInfo(
                             (MobileButtonDeviceCollection *)*v23,
                             a2,
                             TickCount,
                             PerformanceCount,
                             *v23,
                             0,
                             (struct InputInfo *)v33);
                if ( DeviceId < 0 )
                  break;
                DeviceId = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                             *((_QWORD *)this + 2),
                             v33);
                if ( DeviceId < 0 )
                  break;
                if ( !*++v23 )
                  goto LABEL_22;
              }
              return (unsigned int)DeviceId;
            }
LABEL_22:
            v25 = MakeUsageList;
            if ( MakeUsageList[0] )
            {
              while ( 1 )
              {
                v26 = GetTickCount();
                QueryPerformanceCounter(&PerformanceCount);
                DeviceId = MobileButtonDeviceCollection::CreateButtonInfo(
                             (MobileButtonDeviceCollection *)*v25,
                             a2,
                             v26,
                             PerformanceCount,
                             *v25,
                             1,
                             (struct InputInfo *)v33);
                if ( DeviceId < 0 )
                  break;
                DeviceId = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                             *((_QWORD *)this + 2),
                             v33);
                if ( DeviceId < 0 )
                  break;
                if ( !*++v25 )
                  goto LABEL_26;
              }
              return (unsigned int)DeviceId;
            }
LABEL_26:
            InputReportByteLength = v14->InputReportByteLength;
            a4 -= InputReportByteLength;
            Report += InputReportByteLength;
            if ( a4 < (unsigned int)InputReportByteLength )
              return (unsigned int)DeviceId;
            PreparsedData = v28;
          }
        }
      }
    }
  }
  return (unsigned int)DeviceId;
}

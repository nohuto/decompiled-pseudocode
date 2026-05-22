/*
 * XREFs of ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009BA70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z @ 0x18009BFD0 (-UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CFDC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800C845C (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeDeviceCollection::OnInputReport(
        GazeDeviceCollection *this,
        unsigned int a2,
        char *a3,
        unsigned int a4)
{
  __int64 *v4; // rax
  __int64 *v9; // r9
  __int64 *v10; // r8
  int DeviceId; // eax
  __int64 v12; // rcx
  unsigned int v13; // r11d
  unsigned int v14; // ebx
  int v15; // r9d
  struct RIMDevice *v16; // rsi
  struct _HIDP_CAPS *v17; // rdi
  unsigned int HIDCapabilities; // eax
  __int64 v19; // rsi
  __int64 v20; // rbx
  char v21; // al
  BOOL v22; // eax
  LARGE_INTEGER v23; // rcx
  __int64 InputReportByteLength; // rax
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  struct RIMDevice *v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _HIDP_CAPS *v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v31[356]; // [rsp+68h] [rbp-98h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 345);
  v27 = 0LL;
  v28 = 0LL;
  v9 = (__int64 *)v4[1];
  v10 = v4;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( *((_DWORD *)v9 + 8) >= a2 )
    {
      v10 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  if ( v10 == v4 || a2 < *((_DWORD *)v10 + 8) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    JUMPOUT(0x18009BD80LL);
  }
  v29 = v10[5];
  v26 = 0;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v27, (unsigned int *)v9);
  v14 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v16 = v27;
    v17 = (struct _HIDP_CAPS *)((char *)v27 + 60);
    if ( *((_WORD *)v27 + 30) == (_WORD)v13 )
    {
      HIDCapabilities = HIDDevice::GetHIDCapabilities(v27, &v28);
      v17 = v28;
      v14 = HIDCapabilities;
    }
    else
    {
      v14 = v13;
    }
    if ( (v14 & 0x80000000) == 0 )
    {
      v19 = *((_QWORD *)v16 + 4);
      while ( a4 >= v17->InputReportByteLength )
      {
        memset(v31, 0, sizeof(v31));
        v20 = v29;
        if ( (int)GazeHidParser::GetPropertyValue(v29, 2LL, a3, v17->InputReportByteLength, 0, &v26, 4) >= 0 )
        {
          v21 = v26;
          if ( v26 )
          {
            DeviceId = GazeDeviceCollection::UpdateCalibrationInfo(this, (struct DeviceInfo *)v19);
            v14 = DeviceId;
            if ( DeviceId < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return v14;
              v15 = 206;
              goto LABEL_38;
            }
            v21 = v26;
            v20 = v29;
          }
          *(_BYTE *)(v19 + 960) = v21;
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), v19);
        }
        v31[4] = *(_QWORD *)(v19 + 16);
        HIDWORD(v31[0]) = a2;
        v27 = 0LL;
        LODWORD(v31[0]) = 0x4000;
        LODWORD(v31[5]) = 2848;
        DeviceId = GazeHidParser::GetPropertyValue(v20, 6LL, a3, v17->InputReportByteLength, 0, &v27, 8);
        v14 = DeviceId;
        if ( DeviceId < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v14;
          v15 = 226;
          goto LABEL_38;
        }
        v28 = 0LL;
        v31[87] = v27;
        if ( (int)GazeHidParser::GetPropertyValue(v29, 5LL, a3, v17->InputReportByteLength, 0, &v28, 8) < 0 )
        {
          v22 = QueryPerformanceCounter(&PerformanceCount);
          v23 = (LARGE_INTEGER)v31[2];
          if ( v22 )
            v23 = PerformanceCount;
          v31[2] = v23.QuadPart;
        }
        else
        {
          v31[2] = v28;
        }
        DeviceId = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v31);
        v14 = DeviceId;
        if ( DeviceId < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v14;
          v15 = 247;
          goto LABEL_38;
        }
        InputReportByteLength = v17->InputReportByteLength;
        a4 -= InputReportByteLength;
        a3 += InputReportByteLength;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 183, v14);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v15 = 182;
LABEL_38:
    McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, v15, DeviceId);
  }
  return v14;
}

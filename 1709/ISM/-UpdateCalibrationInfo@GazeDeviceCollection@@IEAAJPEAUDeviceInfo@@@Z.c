/*
 * XREFs of ?UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z @ 0x18009BFD0
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B740 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009BA70 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800C82A0 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800C845C (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     ?FindMonitorForEdid@GazeHidParser@@SAJUMonitorEdid@@PEAPEAUHMONITOR__@@@Z @ 0x1800C8888 (-FindMonitorForEdid@GazeHidParser@@SAJUMonitorEdid@@PEAPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GazeDeviceCollection::UpdateCalibrationInfo(
        GazeDeviceCollection *this,
        struct DeviceInfo *a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // edi
  int DeviceId; // eax
  __int64 v12; // rcx
  int v13; // eax
  void *v14; // r14
  unsigned int v15; // r12d
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int PropertyValue; // r15d
  __int64 v20; // rdx
  void *Block; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-11h] BYREF
  int v24; // [rsp+5Ch] [rbp-Dh] BYREF
  struct RIMDevice *v25; // [rsp+60h] [rbp-9h] BYREF
  int v26; // [rsp+68h] [rbp-1h]
  __int64 v27; // [rsp+70h] [rbp+7h] BYREF
  struct RIMDevice *v28; // [rsp+78h] [rbp+Fh] BYREF
  int v29; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *((_QWORD *)a2 + 2) = 0LL;
  *(_QWORD *)((char *)a2 + 964) = 0LL;
  v6 = *((_QWORD *)this + 345);
  v24 = 0;
  v7 = v6;
  v25 = 0LL;
  Block = 0LL;
  v8 = *(_QWORD *)(v6 + 8);
  v23 = 0;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = *(_DWORD *)a2;
    do
    {
      if ( *(_DWORD *)(v8 + 32) >= v9 )
      {
        v7 = v8;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( v7 == v6 || (v8 = *(unsigned int *)(v7 + 32), *(_DWORD *)a2 < (unsigned int)v8) )
    v7 = v6;
  if ( v7 != v6 )
  {
    DeviceId = RIMDeviceCollection::FindDeviceId(this, *(_DWORD *)a2, &v25, a4);
    v10 = DeviceId;
    if ( DeviceId < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 337, DeviceId);
      return v10;
    }
    v13 = GazeHidParser::CreateReportForProperty(*(_QWORD *)(v7 + 40), 3LL, &Block, &v23);
    v14 = Block;
    if ( v13 >= 0 )
    {
      v15 = v23;
      v16 = *((_QWORD *)this + 10);
      Block = 0LL;
      v28 = 0LL;
      v29 = 0;
      v27 = 0LL;
      v17 = RIMDeviceIoControl(v16, *((_QWORD *)v25 + 2), 721298LL, 0LL, 0, v14, v23, &v24, 0);
      if ( v17 >= 0 )
      {
        PropertyValue = GazeHidParser::GetPropertyValue(*(_QWORD *)(v7 + 40), 3LL, v14, v15, 2, &v28, 12);
        if ( PropertyValue >= 0 )
        {
          v25 = v28;
          v26 = v29;
          PropertyValue = GazeHidParser::FindMonitorForEdid(&v25, &v27);
          if ( PropertyValue >= 0 )
          {
            *((_QWORD *)a2 + 2) = v27;
            if ( (int)GazeHidParser::GetPropertyValue(*(_QWORD *)(v7 + 40), 4LL, v14, v15, 2, &Block, 8) >= 0 )
              *(_QWORD *)((char *)a2 + 964) = Block;
            goto LABEL_28;
          }
          v20 = 368LL;
        }
        else
        {
          v20 = 364LL;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v20,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
          (const char *)(unsigned int)PropertyValue);
        return (unsigned int)PropertyValue;
      }
      v10 = v17 | 0x10000000;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 356, v17);
    }
LABEL_28:
    if ( v14 )
      operator delete(v14);
    return v10;
  }
  v10 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 331, 5);
  return v10;
}

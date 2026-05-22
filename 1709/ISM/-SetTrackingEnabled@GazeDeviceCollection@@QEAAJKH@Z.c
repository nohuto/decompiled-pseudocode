/*
 * XREFs of ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x18009BD84
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180088920 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B740 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007BCE4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800C82A0 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GazeDeviceCollection::SetTrackingEnabled(GazeDeviceCollection *this, unsigned int a2, int a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // r9
  unsigned int v8; // edi
  int DeviceId; // eax
  __int64 v10; // rcx
  int v11; // eax
  PCHAR v12; // rsi
  __int64 v13; // r11
  ULONG UsageValue; // r10d
  __int64 *v15; // rax
  __int64 *v16; // r8
  int *v17; // rcx
  ULONG v18; // r14d
  NTSTATUS v19; // eax
  int v20; // ebx
  int v22; // eax
  __int64 v23; // rcx
  PCHAR Report; // [rsp+50h] [rbp-28h] BYREF
  struct RIMDevice *v25; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ULONG ReportLength; // [rsp+80h] [rbp+8h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  v25 = 0LL;
  Report = 0LL;
  ReportLength = 0;
  v28 = 0;
  v5 = (__int64 *)*((_QWORD *)this + 345);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( *((_DWORD *)v7 + 8) >= a2 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( v6 == v5 || a2 < *((_DWORD *)v6 + 8) )
    v6 = (__int64 *)*((_QWORD *)this + 345);
  if ( v6 == v5 )
  {
    v8 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 271, 5);
  }
  else
  {
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v25, (unsigned int *)v7);
    v8 = DeviceId;
    if ( DeviceId >= 0 )
    {
      v11 = GazeHidParser::CreateReportForProperty(v6[5], 1LL, &Report, &ReportLength);
      v12 = Report;
      if ( v11 >= 0 )
      {
        v13 = v6[5];
        UsageValue = a3 != 0;
        v15 = *(__int64 **)(v13 + 72);
        v16 = v15;
        v17 = (int *)v15[1];
        while ( !*((_BYTE *)v17 + 25) )
        {
          if ( v17[7] >= 1 )
          {
            v16 = (__int64 *)v17;
            v17 = *(int **)v17;
          }
          else
          {
            v17 = (int *)*((_QWORD *)v17 + 2);
          }
        }
        if ( v16 == v15 || *((int *)v16 + 7) > 1 )
        {
          std::_Xout_of_range("invalid map<K, T> key");
          JUMPOUT(0x18009BFCELL);
        }
        v18 = ReportLength;
        v19 = HidP_SetUsageValue(
                HidP_Feature,
                0x12u,
                *((_WORD *)v16 + 16),
                0x400u,
                UsageValue,
                *(PHIDP_PREPARSED_DATA *)(v13 + 64),
                Report,
                ReportLength);
        if ( v19 >= 0 )
          v20 = 0;
        else
          v20 = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x1DE,
                  (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
                  (const char *)(unsigned int)v19);
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x123,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
            (const char *)(unsigned int)v20);
          return (unsigned int)v20;
        }
        v22 = RIMDeviceIoControl(*((_QWORD *)this + 10), *((_QWORD *)v25 + 2), 721297LL, v12, v18, 0LL, 0, &v28, 0);
        if ( v22 < 0 )
        {
          v8 = v22 | 0x10000000;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v23, &MinInput_Warning_CheckResult, 0, 301, v22);
        }
      }
      if ( v12 )
        operator delete(v12);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 277, DeviceId);
    }
  }
  return v8;
}

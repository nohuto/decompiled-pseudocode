/*
 * XREFs of ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x180076180
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18006C910 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180075AF4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1800AE8B0 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800AE8F4 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TrySetTrackingEnabled(GazeHidDevice *this)
{
  char *v2; // rdi
  int v3; // ebx
  int v4; // r11d
  __int64 *v5; // rcx
  __int64 *v6; // rax
  __int64 *v7; // r8
  __int64 *v8; // r9
  int v9; // edx
  ULONG UsageValue; // ecx
  ULONG v11; // r14d
  NTSTATUS v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  ULONG ReportLength; // [rsp+A0h] [rbp+30h] BYREF
  int v17; // [rsp+B0h] [rbp+40h] BYREF
  PCHAR Report; // [rsp+B8h] [rbp+48h] BYREF

  Report = 0LL;
  ReportLength = 0;
  v2 = (char *)this + 128;
  v3 = GazeHidParser::CreateReportForProperty((char *)this + 128, 1LL, &Report, &ReportLength);
  if ( v3 >= 0 )
  {
    if ( !(unsigned __int8)GazeHidParser::IsPropertySupported(v2, 1LL) )
    {
      v3 = -2147023728;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x109,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
        (const char *)(unsigned int)v3);
      goto LABEL_23;
    }
    v5 = (__int64 *)*((_QWORD *)v2 + 9);
    v6 = (__int64 *)v5[1];
    v7 = v5;
    if ( *((_BYTE *)v6 + 25) )
      goto LABEL_26;
    do
    {
      v8 = v6;
      v9 = *((_DWORD *)v6 + 7);
      if ( v9 >= 1 )
        v6 = (__int64 *)*v6;
      else
        v6 = (__int64 *)v6[2];
      if ( v9 >= 1 )
        v7 = v8;
    }
    while ( !*((_BYTE *)v6 + 25) );
    if ( v7 == v5 || *((int *)v7 + 7) > 1 )
    {
LABEL_26:
      std::_Xout_of_range("invalid map<K, T> key");
      JUMPOUT(0x18007635ALL);
    }
    UsageValue = 255;
    if ( v4 != 1 )
      UsageValue = 0;
    v11 = ReportLength;
    v12 = HidP_SetUsageValue(
            HidP_Feature,
            0x12u,
            *((_WORD *)v7 + 16),
            0x400u,
            UsageValue,
            *((PHIDP_PREPARSED_DATA *)v2 + 8),
            Report,
            ReportLength);
    if ( v12 >= 0 )
      v3 = 0;
    else
      v3 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x1DA,
             (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
             (const char *)(unsigned int)v12);
    if ( v3 < 0 )
      goto LABEL_19;
    v17 = 0;
    v13 = RIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721297LL, Report, v11, 0LL, 0, &v17, 0);
    if ( v13 >= 0 )
      v3 = 0;
    else
      v3 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x114,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
             (const char *)(unsigned int)v13);
  }
LABEL_23:
  if ( Report )
    operator delete(Report);
  return (unsigned int)v3;
}

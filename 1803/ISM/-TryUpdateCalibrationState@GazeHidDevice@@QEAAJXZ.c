/*
 * XREFs of ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18007635C
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180075AF4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800AE8F4 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800AEAD4 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateCalibrationState(GazeHidDevice *this)
{
  __int64 v2; // rsi
  char *v3; // r14
  int v4; // ebx
  unsigned int v5; // ebx
  int v6; // eax
  int PropertyValue; // eax
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v10; // [rsp+A0h] [rbp+30h] BYREF
  int v11; // [rsp+A8h] [rbp+38h] BYREF
  int v12; // [rsp+B0h] [rbp+40h] BYREF
  void *Block; // [rsp+B8h] [rbp+48h] BYREF

  Block = 0LL;
  v10 = 0;
  v2 = *((_QWORD *)this + 4);
  *(_BYTE *)(v2 + 984) = 2;
  v3 = (char *)this + 128;
  v4 = GazeHidParser::CreateReportForProperty((char *)this + 128, 2LL, &Block, &v10);
  if ( v4 >= 0 )
  {
    v12 = 0;
    v5 = v10;
    v6 = RIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, Block, v10, &v12, 0);
    if ( v6 >= 0 )
    {
      v11 = 0;
      PropertyValue = GazeHidParser::GetPropertyValue(v3, 2LL, Block, v5, 2, &v11, 4);
      if ( PropertyValue < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x142,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)PropertyValue);
      *(_BYTE *)(v2 + 984) = v11;
      v4 = 0;
    }
    else
    {
      v4 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x138,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
             (const char *)(unsigned int)v6);
    }
  }
  if ( Block )
    operator delete(Block);
  return (unsigned int)v4;
}

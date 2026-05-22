/*
 * XREFs of ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x180075F54
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180075AF4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x180075D80 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x18009A8A4 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z @ 0x18009AA28 (-GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800AE8F4 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800AEAD4 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1800AEED8 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateDisplayMapping(GazeHidDevice *this)
{
  __int64 v2; // rdi
  GazeHidParser *v3; // r14
  int CalibratedRegion; // eax
  int v5; // ebx
  unsigned int v6; // ebx
  int v7; // eax
  int PropertyValue; // eax
  HMONITOR *v9; // r8
  int HMonitorFromEdid; // eax
  unsigned int *v11; // r9
  int AdapterAndTargetFromEdid; // eax
  int v13; // eax
  void *Block; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+Fh] BYREF
  int v17; // [rsp+64h] [rbp+13h] BYREF
  __int64 v18; // [rsp+68h] [rbp+17h]
  void **p_Block; // [rsp+70h] [rbp+1Fh]
  char v20; // [rsp+78h] [rbp+27h]
  __int64 v21; // [rsp+80h] [rbp+2Fh] BYREF
  __int16 v22; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v18 = -2LL;
  Block = 0LL;
  v16 = 0;
  p_Block = &Block;
  v20 = 1;
  v2 = *((_QWORD *)this + 4);
  v3 = (GazeHidDevice *)((char *)this + 128);
  CalibratedRegion = GazeHidParser::GetCalibratedRegion(
                       (GazeHidDevice *)((char *)this + 128),
                       0LL,
                       0,
                       (struct tagRECT *)(v2 + 988));
  v5 = CalibratedRegion;
  if ( CalibratedRegion >= 0 )
  {
    v5 = GazeHidParser::CreateReportForProperty(v3, 3LL, &Block, &v16);
    if ( v5 >= 0 )
    {
      v17 = 0;
      v6 = v16;
      v7 = RIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, Block, v16, &v17, 0);
      if ( v7 >= 0 )
      {
        v21 = 0LL;
        v22 = 0;
        PropertyValue = GazeHidParser::GetPropertyValue(v3, 3LL, Block, v6, 2, &v21, 10);
        if ( PropertyValue < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xDC,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)PropertyValue);
        HMonitorFromEdid = DisplayEdidHelpers::GetHMonitorFromEdid(
                             (DisplayEdidHelpers *)&v21,
                             (const struct EdidIdentificationBlock *)(v2 + 16),
                             v9);
        if ( HMonitorFromEdid < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xDF,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)HMonitorFromEdid);
        AdapterAndTargetFromEdid = DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
                                     (DisplayEdidHelpers *)&v21,
                                     (const struct EdidIdentificationBlock *)(v2 + 1008),
                                     (struct _LUID *)(v2 + 1016),
                                     v11);
        if ( AdapterAndTargetFromEdid < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)AdapterAndTargetFromEdid);
        v13 = GazeHidParser::GetCalibratedRegion(v3, (char *)Block, v6, (struct tagRECT *)(v2 + 988));
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xEA,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)v13);
        v5 = 0;
      }
      else
      {
        v5 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xD2,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)v7);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)CalibratedRegion);
  }
  if ( Block )
    operator delete(Block);
  return (unsigned int)v5;
}

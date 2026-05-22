/*
 * XREFs of ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x18009A7C8
 * Callers:
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x18009A8A4 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z @ 0x18009AA28 (-GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180044E10 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall DisplayEdidHelpers::GetRawEdidIdentificationBlock(
        DisplayEdidHelpers *this,
        struct _LUID a2,
        __int64 a3,
        struct EdidIdentificationBlock *a4)
{
  DWORD LowPart; // edi
  unsigned int DeviceInfo; // eax
  __int16 v9; // ax
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+20h] [rbp-248h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-234h]
  __int64 v12; // [rsp+40h] [rbp-228h]
  __int16 v13; // [rsp+48h] [rbp-220h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  LowPart = a2.LowPart;
  memset_0(&requestPacket, 0, 0x218uLL);
  requestPacket.type = -8;
  requestPacket.size = 536;
  requestPacket.adapterId = (LUID)this;
  requestPacket.id = LowPart;
  DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
  if ( DeviceInfo )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x20,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
             (const char *)DeviceInfo);
  if ( v11 >= 0x12 )
  {
    v9 = v13;
    *(_QWORD *)a3 = v12;
    *(_WORD *)(a3 + 8) = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}

/*
 * XREFs of HUBFDO_CompleteGetDescriptorRequest @ 0x1C000BF50
 * Callers:
 *     HUBSM_FindAndSetTargetState @ 0x1C0008E7C (HUBSM_FindAndSetTargetState.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C0025E70 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C0025FA4 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0068728 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_CompleteGetDescriptorRequest(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF

  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1 + 2512),
    4u,
    3u,
    0x2Au,
    (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
    a4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a3);
    v10 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, _BYTE *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v9, v14)
        : -1073741275;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      LODWORD(v13) = a4;
      LODWORD(v12) = a2;
      McTemplateK0pqq(
        v9,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_COMPLETE,
        (const GUID *)((unsigned __int64)v14 & -(__int64)(v10 >= 0)),
        *(_QWORD *)(a1 + 240),
        v12,
        v13);
    }
  }
  if ( a4 >= 0 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4,
             a5 + 12LL);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4);
}

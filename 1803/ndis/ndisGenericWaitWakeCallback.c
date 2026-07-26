/*
 * XREFs of ndisGenericWaitWakeCallback @ 0x1C0010690
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C000FCCC (ndisRequestDevicePowerD0.c)
 *     ndisCompleteWaitWake @ 0x1C0010704 (ndisCompleteWaitWake.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi

  Status = IoStatus->Status;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qqd(26LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, Context[162], IoStatus->Status);
  if ( Status >= 0 )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(27LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, Context);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxq(
        (_DWORD)DeviceObject,
        (unsigned int)&WaitWakeComplete,
        (_DWORD)Context + 4032,
        (_DWORD)Context + 4032,
        *((_DWORD *)Context + 1020),
        Context[506],
        230);
    if ( (*((_DWORD *)Context + 31) & 0x800) != 0 || (unsigned int)(*((_DWORD *)Context + 973) - 2) > 2 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_q(29LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, Context);
      if ( Microsoft_Windows_NDISEnableBits < 0 )
        McTemplateK0jqxq(
          (_DWORD)DeviceObject,
          (unsigned int)&WakeByMiniport,
          (_DWORD)Context + 4032,
          (_DWORD)Context + 4032,
          *((_DWORD *)Context + 1020),
          Context[506],
          9);
    }
    else
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_q(28LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, Context);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxq(
          (_DWORD)DeviceObject,
          (unsigned int)&MiniportPoweringUp,
          (_DWORD)Context + 4032,
          (_DWORD)Context + 4032,
          *((_DWORD *)Context + 1020),
          Context[506],
          243);
      ndisRequestDevicePowerD0((__int64)Context, 0xAu);
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_qD(30LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, (unsigned int)Status);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      McTemplateK0jqxqqq(
        (_DWORD)DeviceObject,
        (unsigned int)&WaitWakeIrpFailed,
        (_DWORD)Context + 4032,
        (_DWORD)Context + 4032,
        *((_DWORD *)Context + 1020),
        Context[506],
        Status,
        26,
        0);
  }
  ndisCompleteWaitWake(Context, MinorFunction, PowerState);
}

/*
 * XREFs of ndisGenericWaitWakeCallback @ 0x1C001F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCompleteWaitWake @ 0x1C001F254 (ndisCompleteWaitWake.c)
 *     ndisRequestDevicePowerD0 @ 0x1C001FE9C (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
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
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qqd(26LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, Context, Context[162], IoStatus->Status);
  if ( Status >= 0 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(27LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, Context);
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
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_q(29LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, Context);
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
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_q(28LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, Context);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxq(
          (_DWORD)DeviceObject,
          (unsigned int)&MiniportPoweringUp,
          (_DWORD)Context + 4032,
          (_DWORD)Context + 4032,
          *((_DWORD *)Context + 1020),
          Context[506],
          243);
      ndisRequestDevicePowerD0(Context, 10LL, PowerState);
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_qD(30LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, Context, (unsigned int)Status);
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

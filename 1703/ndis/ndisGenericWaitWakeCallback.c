/*
 * XREFs of ndisGenericWaitWakeCallback @ 0x1C00238B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C001267C (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  char v7; // cl

  Status = IoStatus->Status;
  v7 = byte_1C0092615;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
  {
    WPP_SF_qqd(26LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context, Context[162], IoStatus->Status);
    v7 = byte_1C0092615;
  }
  if ( Status >= 0 )
  {
    if ( (unsigned __int8)v7 >= 4u )
    {
      WPP_SF_q(27LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context);
      v7 = byte_1C0092615;
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    {
      Template_jqxq(
        v7,
        (unsigned int)&WaitWakeComplete,
        (_DWORD)Context + 4032,
        (_DWORD)Context + 4032,
        *((_DWORD *)Context + 1020),
        Context[506],
        238);
      v7 = byte_1C0092615;
    }
    if ( (*((_DWORD *)Context + 31) & 0x800) != 0 || (unsigned int)(*((_DWORD *)Context + 973) - 2) > 2 )
    {
      if ( (unsigned __int8)v7 >= 4u )
        WPP_SF_q(29LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context);
      if ( (int)Microsoft_Windows_NDISEnableBits < 0 )
        Template_jqxq(
          v7,
          (unsigned int)&WakeByMiniport,
          (_DWORD)Context + 4032,
          (_DWORD)Context + 4032,
          *((_DWORD *)Context + 1020),
          Context[506],
          17);
    }
    else
    {
      if ( (unsigned __int8)v7 >= 4u )
        WPP_SF_q(28LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          v7,
          (unsigned int)&MiniportPoweringUp,
          (_DWORD)Context + 4032,
          (_DWORD)Context + 4032,
          *((_DWORD *)Context + 1020),
          Context[506],
          251);
      ndisRequestDevicePowerD0((__int64)Context, 0xAu);
    }
  }
  else
  {
    if ( (unsigned __int8)v7 >= 4u )
      WPP_SF_qD(30LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context, (unsigned int)Status);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_jqxqqq(
        v7,
        (unsigned int)&WaitWakeIrpFailed,
        (_DWORD)Context + 4032,
        (_DWORD)Context + 4032,
        *((_DWORD *)Context + 1020),
        Context[506],
        Status,
        34,
        0);
  }
  ndisCompleteWaitWake(Context, MinorFunction, PowerState);
}

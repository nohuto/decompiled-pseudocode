/*
 * XREFs of UsbhGetMaxPowerPerPort @ 0x1C00269E0
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001AE40 (UsbhConfigureUsbHub.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetHubPowerStatus @ 0x1C001AC50 (UsbhGetHubPowerStatus.c)
 *     UsbhGetStatus @ 0x1C0026B60 (UsbhGetStatus.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetMaxPowerPerPort(__int64 a1)
{
  _DWORD *v2; // rbx
  _WORD *PoolWithTag; // rdi
  __int64 result; // rax
  unsigned int v5; // ecx

  v2 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      34,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    if ( (int)UsbhGetStatus(a1, (_DWORD)PoolWithTag) >= 0 )
    {
      if ( (*(_BYTE *)PoolWithTag & 1) != 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            35,
            (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
        v2[761] = 500;
      }
      else
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            36,
            (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
        v2[761] = 100;
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  UsbhGetHubPowerStatus(a1);
  if ( v2[759] )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        37,
        (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
        v2[759]);
    return (unsigned int)v2[759];
  }
  else
  {
    result = (unsigned int)v2[761];
    if ( !(_DWORD)result )
    {
      v5 = v2[760];
      result = 500LL;
      if ( v5 )
        return v5;
    }
  }
  return result;
}

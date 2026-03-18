/*
 * XREFs of UsbdHubArmBusForWake @ 0x1C0046804
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbdHubArmBusForWake(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = FdoExt(a1);
  result = 0LL;
  if ( *((_QWORD *)v1 + 552) )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xAu,
        (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids);
    result = (*((__int64 (__fastcall **)(_QWORD, __int64))v1 + 552))(*((_QWORD *)v1 + 529), 1LL);
    v1[640] |= 0x40000u;
  }
  return result;
}

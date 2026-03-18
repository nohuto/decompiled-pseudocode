/*
 * XREFs of UsbdHubArmBusForWake @ 0x1C0045954
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
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
        (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids);
    result = (*((__int64 (__fastcall **)(_QWORD, __int64))v1 + 552))(*((_QWORD *)v1 + 529), 1LL);
    v1[640] |= 0x40000u;
  }
  return result;
}

/*
 * XREFs of WPP_SF_qqDD @ 0x1C00305E4
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0005500 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitPowerIrp @ 0x1C000E39C (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000E478 (RaidUnitSetPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0011B28 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0012708 (RaidAdapterPnpIrp.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C002C9D4 (RaidAdapterMiniportProcessServiceRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqDD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v6; // [rsp+A0h] [rbp+28h] BYREF
  va_list va1; // [rsp+A0h] [rbp+28h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va2; // [rsp+A8h] [rbp+30h]
  va_list va3; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v8 = va_arg(va3, _QWORD);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           4LL,
           va3,
           4LL,
           0LL);
}

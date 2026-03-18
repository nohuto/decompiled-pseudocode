/*
 * XREFs of UsbhHubSSH_PnpStart @ 0x1C001E330
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     UsbhSshBusBusy @ 0x1C001E468 (UsbhSshBusBusy.c)
 *     UsbhSshEnableDisable @ 0x1C001E4F0 (UsbhSshEnableDisable.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhHubSSH_PnpStart(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rax
  int v6; // eax
  unsigned int v8; // [rsp+44h] [rbp-34h] BYREF
  int v9; // [rsp+48h] [rbp-30h] BYREF

  Log(a1, 0x10000, 1936937844, 0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v4 = FdoExt(*(_QWORD *)(a2 + 8));
  *((_BYTE *)v4 + 3409) = 1;
  if ( v4[820] == 5 )
    UsbhSshEnableDisable(a1);
  v8 = 0;
  v9 = 0;
  v5 = FdoExt(a1);
  if ( *((_QWORD *)v5 + 539) )
  {
    v6 = (*((__int64 (__fastcall **)(_QWORD, int *, __int64, unsigned int *))v5 + 539))(
           *((_QWORD *)v5 + 529),
           &v9,
           10LL,
           &v8);
    if ( v6 >= 0 )
    {
      if ( v8 < 0xA )
        v6 = -1073741811;
      if ( v6 >= 0 )
        UsbhSshEnableDisable(a1);
    }
  }
  UsbhSshBusBusy(a1, a2);
  *((_BYTE *)v4 + 3408) = 1;
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), (__int64)(v4 + 800), 2000, 0, a2, 0x77485353u);
  return 0LL;
}

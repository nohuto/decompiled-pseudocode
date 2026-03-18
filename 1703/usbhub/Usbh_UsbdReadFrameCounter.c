/*
 * XREFs of Usbh_UsbdReadFrameCounter @ 0x1C0018B28
 * Callers:
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     UsbhResetPort @ 0x1C001ED40 (UsbhResetPort.c)
 *     UsbhReset1Complete @ 0x1C0021170 (UsbhReset1Complete.c)
 *     Usbh_PcLogEntry @ 0x1C00423C4 (Usbh_PcLogEntry.c)
 *     UsbhResetPortTimerDpc @ 0x1C0043DF0 (UsbhResetPortTimerDpc.c)
 *     UsbhReset1Timeout @ 0x1C00517A0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051D40 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_UsbdReadFrameCounter(__int64 a1)
{
  _DWORD *v1; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = FdoExt(a1);
  if ( !*((_QWORD *)v1 + 574) )
    return 0LL;
  (*((void (__fastcall **)(_QWORD, unsigned int *))v1 + 574))(*((_QWORD *)v1 + 570), &v3);
  return v3;
}

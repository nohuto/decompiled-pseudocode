/*
 * XREFs of Usbh_UsbdReadFrameCounter @ 0x1C0009A64
 * Callers:
 *     UsbhReset1Complete @ 0x1C00092A0 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     Usbh_PcLogEntry @ 0x1C00431B8 (Usbh_PcLogEntry.c)
 *     UsbhResetPortTimerDpc @ 0x1C0044C20 (UsbhResetPortTimerDpc.c)
 *     UsbhReset1Timeout @ 0x1C0052560 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0052B00 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_UsbdReadFrameCounter(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = FdoExt(a1);
  if ( !*(_QWORD *)(v1 + 4592) )
    return 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(v1 + 4592))(*(_QWORD *)(v1 + 4560), &v3);
  return v3;
}

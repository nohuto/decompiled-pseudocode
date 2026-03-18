/*
 * XREFs of UsbhIncrementConcurrentResetCounter @ 0x1C00479C4
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C00141E0 (UsbhDispatch_HardResetEvent.c)
 *     Usbh_HRS_Queued @ 0x1C0047DC4 (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall UsbhIncrementConcurrentResetCounter(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 result; // rax

  v1 = FdoExt(a1);
  result = (unsigned int)++v1[1316];
  if ( (int)result > 20 )
    KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 1uLL, 0LL);
  return result;
}

/*
 * XREFs of UsbhPdoSuccess @ 0x1C0056280
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C0020EE8 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoSuccess(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int v4; // edi

  v4 = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1346654035, 0);
  BugCheckParameter4->IoStatus.Status = v4;
  IofCompleteRequest(BugCheckParameter4, 0);
  if ( (v4 & 0xC0000000) != 0xC0000000 )
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return v4;
}

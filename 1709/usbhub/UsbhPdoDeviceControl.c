/*
 * XREFs of UsbhPdoDeviceControl @ 0x1C0028F30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C000A1B0 (UsbhIncPdoIoCount.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     KsPropertyHandleDrmSetContentId @ 0x1C007375C (KsPropertyHandleDrmSetContentId.c)
 */

__int64 __fastcall UsbhPdoDeviceControl(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  int LowPart; // esi
  int Status; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // rbp

  LowPart = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Status = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1145655107, LowPart);
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    v6 = PdoExt(BugCheckParameter3);
    v7 = v6;
    if ( LowPart == 2952208 )
    {
      Status = -1073741637;
      Log(*((_QWORD *)v6 + 147), 256, 1885957938, (__int64)BugCheckParameter4, 0LL);
    }
    else if ( LowPart == 3080195 )
    {
      Status = KsPropertyHandleDrmSetContentId(BugCheckParameter4);
      Log(*((_QWORD *)v7 + 147), 256, 1885957937, (__int64)BugCheckParameter4, Status);
    }
    else
    {
      Log(*((_QWORD *)v6 + 147), 256, 1885957939, (__int64)BugCheckParameter4, BugCheckParameter4->IoStatus.Status);
      Status = BugCheckParameter4->IoStatus.Status;
    }
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  return (unsigned int)Status;
}

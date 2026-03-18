/*
 * XREFs of UsbhPdoPower @ 0x1C001E2F0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhPdoPowerWorkerInternal @ 0x1C001E220 (UsbhPdoPowerWorkerInternal.c)
 *     Usbh_HubDeferIrpProcessing @ 0x1C0046FC8 (Usbh_HubDeferIrpProcessing.c)
 */

__int64 __fastcall UsbhPdoPower(ULONG_PTR a1, IRP *a2)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rax
  int v7; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v6 = PdoExt(a1);
    v7 = Usbh_HubDeferIrpProcessing(*((_QWORD *)v6 + 147), a1, UsbhPdoPowerWorker, a2);
    v4 = v7;
    if ( v7 >= 0 )
    {
      return 259;
    }
    else
    {
      a2->IoStatus.Status = v7;
      IofCompleteRequest(a2, 0);
    }
  }
  else
  {
    return (unsigned int)UsbhPdoPowerWorkerInternal(a1, a2);
  }
  return v4;
}

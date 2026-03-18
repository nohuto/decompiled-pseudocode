/*
 * XREFs of IopPoHandleIrp @ 0x140145518
 * Callers:
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopfCallDriver @ 0x14014696C (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x140145564 (PoHandleIrp.c)
 */

__int64 __fastcall IopPoHandleIrp(IRP *a1)
{
  unsigned int v3; // [rsp+38h] [rbp+10h]

  if ( (unsigned __int8)PoHandleIrp(a1) )
    return v3;
  else
    return ((__int64 (__fastcall *)(PDEVICE_OBJECT, IRP *))a1->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[a1->Tail.Overlay.CurrentStackLocation->MajorFunction])(
             a1->Tail.Overlay.CurrentStackLocation->DeviceObject,
             a1);
}

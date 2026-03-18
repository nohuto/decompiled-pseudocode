/*
 * XREFs of IovUtilIsWdmStack @ 0x140772F40
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x14077E290 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14077E420 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PpvUtilIsPdo @ 0x140763C38 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObject @ 0x140772CB8 (IovUtilGetBottomDeviceObject.c)
 */

_BOOL8 __fastcall IovUtilIsWdmStack(_QWORD *a1)
{
  PVOID BottomDeviceObject; // rax
  BOOL IsPdo; // ebx
  PVOID v3; // rdx

  BottomDeviceObject = IovUtilGetBottomDeviceObject(a1);
  IsPdo = PpvUtilIsPdo((__int64)BottomDeviceObject);
  ObfDereferenceObject(v3);
  return IsPdo;
}

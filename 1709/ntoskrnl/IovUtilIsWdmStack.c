/*
 * XREFs of IovUtilIsWdmStack @ 0x1407B4D00
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x1407C0260 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1407C03F0 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PpvUtilIsPdo @ 0x1407A5994 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObject @ 0x1407B4A78 (IovUtilGetBottomDeviceObject.c)
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

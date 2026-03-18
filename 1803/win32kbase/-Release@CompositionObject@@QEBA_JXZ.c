/*
 * XREFs of ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0005D80
 * Callers:
 *     HMFreeObject @ 0x1C005F1D0 (HMFreeObject.c)
 *     RIMDeviceIoControl @ 0x1C00E0E20 (RIMDeviceIoControl.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall CompositionObject::Release(CompositionObject *this)
{
  return ObfDereferenceObject(this);
}

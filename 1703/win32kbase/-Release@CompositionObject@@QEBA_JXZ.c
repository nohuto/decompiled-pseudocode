/*
 * XREFs of ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00276B0
 * Callers:
 *     RIMDeviceIoControl @ 0x1C006E8B0 (RIMDeviceIoControl.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C010F970 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall CompositionObject::Release(PVOID Object)
{
  return ObfDereferenceObject(Object);
}

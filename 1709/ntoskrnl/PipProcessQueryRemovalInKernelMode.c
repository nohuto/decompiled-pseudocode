/*
 * XREFs of PipProcessQueryRemovalInKernelMode @ 0x14055BBFC
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x14055BA6C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14055BB28 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14055BC8C (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1406D5448 (PiSendTargetDeviceRemoveCanceledNotification.c)
 */

__int64 __fastcall PipProcessQueryRemovalInKernelMode(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD **a5,
        _DWORD *a6)
{
  int v10; // ebx

  if ( (int)PipSendTargetDeviceQueryRemoveNotification(a2, a5, a4, a6) < 0 )
  {
    return (unsigned int)-2147483608;
  }
  else
  {
    v10 = PipSendQueryRemoveIrpAndCheckOpenHandles(a1, a2, a3, a4, a5, a6);
    if ( v10 < 0 )
      PiSendTargetDeviceRemoveCanceledNotification(a5, a4);
  }
  return (unsigned int)v10;
}

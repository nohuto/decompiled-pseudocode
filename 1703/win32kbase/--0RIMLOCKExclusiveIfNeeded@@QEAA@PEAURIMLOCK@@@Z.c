/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0090700
 * Callers:
 *     RIMFreeHidTLCInfo @ 0x1C00088A0 (RIMFreeHidTLCInfo.c)
 *     RIMDeviceIoControl @ 0x1C006E8B0 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C00885AC (RawInputManagerObjectDelete.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00960DC (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00961CC (RIMSearchHidTLCInfo.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0108360 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0108420 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    RIMLockExclusive((__int64)a2);
  }
  return this;
}

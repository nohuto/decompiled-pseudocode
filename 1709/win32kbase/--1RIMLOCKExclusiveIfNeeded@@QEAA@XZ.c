/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000C7E8
 * Callers:
 *     RIMDeviceIoControl @ 0x1C000AC40 (RIMDeviceIoControl.c)
 *     RIMFreeHidTLCInfo @ 0x1C000B170 (RIMFreeHidTLCInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C000B420 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C000C774 (RIMSearchHidTLCInfo.c)
 *     RawInputManagerObjectDelete @ 0x1C008CB2C (RawInputManagerObjectDelete.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0106590 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0106650 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)this = 0LL;
  }
}

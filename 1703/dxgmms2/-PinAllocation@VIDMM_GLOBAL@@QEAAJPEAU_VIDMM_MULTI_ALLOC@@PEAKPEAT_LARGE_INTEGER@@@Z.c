/*
 * XREFs of ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C006E0FC
 * Callers:
 *     VidMmPinAllocation @ 0x1C0013A10 (VidMmPinAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::PinAllocation(
        VIDMM_GLOBAL *this,
        VIDMM_DEVICE **a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4)
{
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    a4->QuadPart = 0LL;
  return VIDMM_GLOBAL::PinOneAllocation(this, a2);
}

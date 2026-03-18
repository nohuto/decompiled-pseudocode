/*
 * XREFs of VfUtilEqualUnicodeString @ 0x1407A6DE8
 * Callers:
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407A21FC (VfXdvDriverCaptureIoCallbacks.c)
 *     ViFaultsIsAppTarget @ 0x1407B82E4 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}

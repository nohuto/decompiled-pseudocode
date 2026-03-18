/*
 * XREFs of VfUtilEqualUnicodeString @ 0x140765218
 * Callers:
 *     VfXdvDriverCaptureIoCallbacks @ 0x140761D60 (VfXdvDriverCaptureIoCallbacks.c)
 *     ViFaultsIsAppTarget @ 0x1407764E8 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}

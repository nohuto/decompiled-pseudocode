/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14006C874
 * Callers:
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140754540 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}

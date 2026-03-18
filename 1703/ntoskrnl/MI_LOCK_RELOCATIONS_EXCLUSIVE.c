/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14005EC2C
 * Callers:
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1406BD988 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}

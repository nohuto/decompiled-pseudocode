/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400BB478
 * Callers:
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140504210 (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1406EA7A4 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}

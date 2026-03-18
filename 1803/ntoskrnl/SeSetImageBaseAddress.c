/*
 * XREFs of SeSetImageBaseAddress @ 0x14078C364
 * Callers:
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140754540 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 SeSetImageBaseAddress()
{
  if ( qword_1403A5D00 )
    return qword_1403A5D00();
  else
    return 3221225659LL;
}

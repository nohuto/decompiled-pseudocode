/*
 * XREFs of SeSetImageBaseAddress @ 0x140727F4C
 * Callers:
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140504210 (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1406EA7A4 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 SeSetImageBaseAddress()
{
  if ( qword_1403626A0 )
    return qword_1403626A0();
  else
    return 3221225659LL;
}

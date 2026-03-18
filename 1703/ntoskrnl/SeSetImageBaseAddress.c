/*
 * XREFs of SeSetImageBaseAddress @ 0x1406F04F4
 * Callers:
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1406BD988 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     <none>
 */

__int64 SeSetImageBaseAddress()
{
  if ( qword_140348C00 )
    return qword_140348C00();
  else
    return 3221225659LL;
}

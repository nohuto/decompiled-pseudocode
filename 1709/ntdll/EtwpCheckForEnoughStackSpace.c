/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x180109A48
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18001A218 (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800DDA78 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}

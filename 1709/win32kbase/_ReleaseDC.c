/*
 * XREFs of _ReleaseDC @ 0x1C0057860
 * Callers:
 *     UserGetMonitorDC @ 0x1C005A800 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
}

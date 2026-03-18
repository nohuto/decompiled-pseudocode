/*
 * XREFs of _wcstoi64 @ 0x14016C578
 * Callers:
 *     PiNormalizeDeviceText @ 0x1404DAC60 (PiNormalizeDeviceText.c)
 * Callees:
 *     wcstoxq @ 0x14016C5A8 (wcstoxq.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)Str, (_DWORD)EndPtr, Radix, 0, 0LL);
}

/*
 * XREFs of SdbpMatchDeviceString @ 0x14072CC54
 * Callers:
 *     SdbpMatchAcpi @ 0x1405DAC34 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1405DAC88 (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1405DACDC (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1405DAD30 (SdbpMatchCpu.c)
 * Callees:
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpMatchDeviceString(__int64 a1, const wchar_t *a2, unsigned int a3, __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax

  v6 = 0;
  FirstTag = SdbFindFirstTag(a1, a3, a4);
  if ( FirstTag )
  {
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( StringTagPtr && a2 )
      return wcsicmp(StringTagPtr, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}

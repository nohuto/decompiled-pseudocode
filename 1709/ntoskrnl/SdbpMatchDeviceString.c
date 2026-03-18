/*
 * XREFs of SdbpMatchDeviceString @ 0x14076FCD8
 * Callers:
 *     SdbpMatchAcpi @ 0x14076FA1C (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x14076FAF8 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x14076FB90 (SdbpMatchCpu.c)
 *     SdbpMatchOem @ 0x14076FD48 (SdbpMatchOem.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
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

/*
 * XREFs of SdbpMatchDeviceString @ 0x1407D7084
 * Callers:
 *     SdbpMatchCpu @ 0x14061FE88 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x14061FEDC (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x14061FF30 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x14061FF84 (SdbpMatchAcpi.c)
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
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

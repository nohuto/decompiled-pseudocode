/*
 * XREFs of SdbpMatchOem @ 0x14076FD48
 * Callers:
 *     SdbpCheckKObject @ 0x140541718 (SdbpCheckKObject.c)
 * Callees:
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     SdbpMatchDeviceDWORD @ 0x14076FC50 (SdbpMatchDeviceDWORD.c)
 *     SdbpMatchDeviceString @ 0x14076FCD8 (SdbpMatchDeviceString.c)
 */

__int64 __fastcall SdbpMatchOem(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  unsigned int v7; // esi

  v5 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 28706);
  v7 = FirstTag;
  if ( FirstTag )
  {
    if ( (unsigned int)SdbpMatchDeviceString(a1, *(const wchar_t **)a3, FirstTag, 24613)
      && (unsigned int)SdbpMatchDeviceString(a1, *(const wchar_t **)(a3 + 8), v7, 24614) )
    {
      return (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 44), v7, 0x4034u, 0x4035u, 0x4036u) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}

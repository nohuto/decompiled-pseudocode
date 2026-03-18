/*
 * XREFs of SdbpMatchBios @ 0x14076FAF8
 * Callers:
 *     SdbpCheckKObject @ 0x140541718 (SdbpCheckKObject.c)
 * Callees:
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     SdbpMatchDeviceDWORD @ 0x14076FC50 (SdbpMatchDeviceDWORD.c)
 *     SdbpMatchDeviceString @ 0x14076FCD8 (SdbpMatchDeviceString.c)
 */

__int64 __fastcall SdbpMatchBios(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  unsigned int v7; // esi
  int v8; // r9d

  v5 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 28704);
  v7 = FirstTag;
  if ( FirstTag )
  {
    if ( (unsigned int)SdbpMatchDeviceString(a1, *(_QWORD *)a3, FirstTag, 24613LL) )
    {
      LOWORD(v8) = 16439;
      return (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 40), v7, v8, 16440, 16441) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}

/*
 * XREFs of SdbpMatchBios @ 0x1405DACDC
 * Callers:
 *     SdbpCheckKObject @ 0x1405BB128 (SdbpCheckKObject.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     SdbpMatchDeviceDWORD @ 0x14072CBCC (SdbpMatchDeviceDWORD.c)
 *     SdbpMatchDeviceString @ 0x14072CC54 (SdbpMatchDeviceString.c)
 */

__int64 __fastcall SdbpMatchBios(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  unsigned int v7; // esi
  int v9; // r9d

  v5 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 28704);
  v7 = FirstTag;
  if ( FirstTag )
  {
    if ( (unsigned int)SdbpMatchDeviceString(a1, *(_QWORD *)a3, FirstTag, 24613LL) )
    {
      LOWORD(v9) = 16439;
      return (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 40), v7, v9, 16440, 16441) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}

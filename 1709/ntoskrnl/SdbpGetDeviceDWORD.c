/*
 * XREFs of SdbpGetDeviceDWORD @ 0x14076F34C
 * Callers:
 *     SdbpMatchDeviceDWORD @ 0x14076FC50 (SdbpMatchDeviceDWORD.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x1404F5C54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpGetDeviceDWORD(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax

  v5 = -1;
  FirstTag = SdbFindFirstTag(a1, a2, a3);
  if ( FirstTag )
    return (unsigned int)SdbReadDWORDTag(a1, FirstTag, a3);
  return v5;
}

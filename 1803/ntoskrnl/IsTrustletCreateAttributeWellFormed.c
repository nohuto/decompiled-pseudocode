/*
 * XREFs of IsTrustletCreateAttributeWellFormed @ 0x140284FA0
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

char __fastcall IsTrustletCreateAttributeWellFormed(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax

  if ( a2 == 8 )
    return 1;
  if ( (a2 & 7) != 0 || a2 < 0x18 || a2 > 0x88 || !*a1 )
    return 0;
  v4 = 0LL;
  v5 = (unsigned int)(a2 - 8) >> 3;
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = HIDWORD(a1[v4 + 1]);
      if ( (_BYTE)v7 || v7 >= 0x100 || (a1[v4 + 1] & 0xF0000000LL) != 0 )
        break;
      ++v6;
      v4 = (unsigned int)BYTE1(a1[v4 + 1]) + (_DWORD)v4 + 1;
      if ( (unsigned int)v4 >= v5 )
      {
        if ( v6 > 4 )
          return 0;
        return (_DWORD)v4 == v5;
      }
    }
    return 0;
  }
  return (_DWORD)v4 == v5;
}

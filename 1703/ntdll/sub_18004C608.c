/*
 * XREFs of sub_18004C608 @ 0x18004C608
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 * Callees:
 *     RtlMapGenericMask @ 0x18004A040 (RtlMapGenericMask.c)
 */

void __fastcall sub_18004C608(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // edi
  unsigned __int8 *i; // rbx
  int v6; // ecx
  int v7; // eax

  if ( a1 )
  {
    v2 = 0;
    for ( i = (unsigned __int8 *)(a1 + 8); v2 < *(unsigned __int16 *)(a1 + 4); i += *((unsigned __int16 *)i + 1) )
    {
      if ( (*i <= 0xAu || (unsigned __int8)(*i - 13) <= 1u) && (i[1] & 8) == 0 )
      {
        RtlMapGenericMask((_DWORD *)i + 1, a2);
        if ( *i <= 0xAu && (v6 = 1651, _bittest(&v6, *i)) )
          v7 = a2[3];
        else
          v7 = a2[3] | 0x1000000;
        *((_DWORD *)i + 1) &= v7;
      }
      ++v2;
    }
  }
}

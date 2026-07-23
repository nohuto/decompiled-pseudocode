/*
 * XREFs of sub_180078B08 @ 0x180078B08
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 * Callees:
 *     RtlMapGenericMask @ 0x180037EF0 (RtlMapGenericMask.c)
 */

void __fastcall sub_180078B08(__int64 a1, GENERIC_MAPPING *a2)
{
  unsigned int v2; // edi
  ACCESS_MASK *i; // rbx
  int v6; // ecx
  int GenericAll; // eax

  if ( a1 )
  {
    v2 = 0;
    for ( i = (ACCESS_MASK *)(a1 + 8);
          v2 < *(unsigned __int16 *)(a1 + 4);
          i = (ACCESS_MASK *)((char *)i + *((unsigned __int16 *)i + 1)) )
    {
      if ( (*(_BYTE *)i < 0xBu || (unsigned __int8)(*(_BYTE *)i - 13) <= 1u) && (*((_BYTE *)i + 1) & 8) == 0 )
      {
        RtlMapGenericMask(i + 1, a2);
        if ( *(_BYTE *)i <= 0xAu && (v6 = 1651, _bittest(&v6, *(unsigned __int8 *)i)) )
          GenericAll = a2->GenericAll;
        else
          GenericAll = a2->GenericAll | 0x1000000;
        i[1] &= GenericAll;
      }
      ++v2;
    }
  }
}

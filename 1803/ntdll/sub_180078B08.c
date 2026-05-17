/*
 * XREFs of sub_180078B08 @ 0x180078B08
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 * Callees:
 *     RtlMapGenericMask @ 0x180037EF0 (RtlMapGenericMask.c)
 */

void __fastcall sub_180078B08(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // edi
  int *i; // rbx
  int v6; // ecx
  int v7; // eax

  if ( a1 )
  {
    v2 = 0;
    for ( i = (int *)(a1 + 8); v2 < *(unsigned __int16 *)(a1 + 4); i = (int *)((char *)i + *((unsigned __int16 *)i + 1)) )
    {
      if ( (*(_BYTE *)i < 0xBu || (unsigned __int8)(*(_BYTE *)i - 13) <= 1u) && (*((_BYTE *)i + 1) & 8) == 0 )
      {
        RtlMapGenericMask(i + 1, a2);
        if ( *(_BYTE *)i <= 0xAu && (v6 = 1651, _bittest(&v6, *(unsigned __int8 *)i)) )
          v7 = a2[3];
        else
          v7 = a2[3] | 0x1000000;
        i[1] &= v7;
      }
      ++v2;
    }
  }
}

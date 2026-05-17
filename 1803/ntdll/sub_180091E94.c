/*
 * XREFs of sub_180091E94 @ 0x180091E94
 * Callers:
 *     sub_180091650 @ 0x180091650 (sub_180091650.c)
 *     sub_180091EDC @ 0x180091EDC (sub_180091EDC.c)
 *     sub_180091F30 @ 0x180091F30 (sub_180091F30.c)
 * Callees:
 *     sub_18009A104 @ 0x18009A104 (sub_18009A104.c)
 */

void __fastcall sub_180091E94(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax

  if ( (*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( --*(_DWORD *)(a2 + 8) < 0 )
    {
      v5 = sub_18009A104((unsigned int)(char)a1, a2);
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)a2)++ = a1;
      v5 = a1;
    }
    if ( v5 == -1 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
}

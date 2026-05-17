/*
 * XREFs of sub_18009CC60 @ 0x18009CC60
 * Callers:
 *     sub_18009C40C @ 0x18009C40C (sub_18009C40C.c)
 *     sub_18009CCA8 @ 0x18009CCA8 (sub_18009CCA8.c)
 *     sub_18009CCFC @ 0x18009CCFC (sub_18009CCFC.c)
 * Callees:
 *     sub_18009C404 @ 0x18009C404 (sub_18009C404.c)
 */

void __fastcall sub_18009CC60(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax

  if ( (*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( --*(_DWORD *)(a2 + 8) < 0 )
    {
      v5 = sub_18009C404((unsigned int)(char)a1, a2);
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

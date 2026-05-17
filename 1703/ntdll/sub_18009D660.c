/*
 * XREFs of sub_18009D660 @ 0x18009D660
 * Callers:
 *     sub_18009CD80 @ 0x18009CD80 (sub_18009CD80.c)
 *     sub_18009D6AC @ 0x18009D6AC (sub_18009D6AC.c)
 *     sub_18009D700 @ 0x18009D700 (sub_18009D700.c)
 * Callees:
 *     sub_18009FC28 @ 0x18009FC28 (sub_18009FC28.c)
 */

void __fastcall sub_18009D660(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( (*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( (unsigned __int16)sub_18009FC28() == 0xFFFF && (*(_BYTE *)(a2 + 24) & 0x20) != 0 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
}

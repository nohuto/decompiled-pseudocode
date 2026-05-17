/*
 * XREFs of sub_18009ED7C @ 0x18009ED7C
 * Callers:
 *     fabs @ 0x180099340 (fabs.c)
 *     sub_18009DBEC @ 0x18009DBEC (sub_18009DBEC.c)
 *     sub_18009DD10 @ 0x18009DD10 (sub_18009DD10.c)
 *     sub_18009E460 @ 0x18009E460 (sub_18009E460.c)
 *     sub_18009E7B8 @ 0x18009E7B8 (sub_18009E7B8.c)
 *     sub_18009EAE4 @ 0x18009EAE4 (sub_18009EAE4.c)
 * Callees:
 *     sub_18009FCD0 @ 0x18009FCD0 (sub_18009FCD0.c)
 *     sub_1800ABA50 @ 0x1800ABA50 (sub_1800ABA50.c)
 */

__int64 __fastcall sub_18009ED7C(int a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx

  v4 = sub_1800ABA50();
  v5 = a2 & a1 | v4 & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_180155E80 && (((unsigned __int8)(a2 & a1) | v4 & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    sub_18009FCD0(v5);
  else
    sub_18009FCD0((unsigned int)v5 & 0xFFFFFFBF);
  return v4;
}

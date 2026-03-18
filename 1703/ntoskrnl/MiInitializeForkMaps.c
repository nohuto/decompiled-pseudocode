/*
 * XREFs of MiInitializeForkMaps @ 0x140003028
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 * Callees:
 *     MiMapSinglePage @ 0x140025508 (MiMapSinglePage.c)
 *     memset @ 0x140192D80 (memset.c)
 */

_BOOL8 __fastcall MiInitializeForkMaps(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax

  memset(a2, 0, 0x48uLL);
  a2[1] = -1LL;
  a2[2] = -1LL;
  a2[3] = -1LL;
  *a2 = a1;
  v4 = MiMapSinglePage(0LL, 0LL, 1073741856LL, 2LL);
  a2[7] = v4;
  return v4 != 0;
}

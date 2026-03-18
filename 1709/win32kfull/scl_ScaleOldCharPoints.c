/*
 * XREFs of scl_ScaleOldCharPoints @ 0x1C02B97EC
 * Callers:
 *     fsg_SimpleInnerGridFit @ 0x1C02C24D0 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     scl_Scale @ 0x1C02B90AC (scl_Scale.c)
 */

__int64 __fastcall scl_ScaleOldCharPoints(__int64 a1, __int64 a2)
{
  int v2; // eax
  int *v5; // rcx
  int v6; // eax
  int v7; // edx

  v2 = *(__int16 *)(a1 + 80) - 1;
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_Scale(
      (int *)(a2 + 264),
      *(_DWORD *)(a2 + 184),
      *(_QWORD *)(a1 + 32),
      *(int **)(a1 + 16),
      (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * v2) + 1));
    v5 = (int *)(a2 + 280);
    v6 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
    v7 = *(_DWORD *)(a2 + 188);
  }
  else
  {
    scl_Scale(
      (int *)(a2 + 232),
      *(_DWORD *)(a2 + 176),
      *(_QWORD *)(a1 + 32),
      *(int **)(a1 + 16),
      (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * v2) + 1));
    v5 = (int *)(a2 + 248);
    v6 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
    v7 = *(_DWORD *)(a2 + 180);
  }
  return scl_Scale(v5, v7, *(_QWORD *)(a1 + 40), *(int **)(a1 + 24), v6);
}

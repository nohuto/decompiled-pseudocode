/*
 * XREFs of ??$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z @ 0x1C01532A4
 * Callers:
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0154764 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C01554E4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpBitmapMerge@@YAXPEAU_CIT_BITMAP@@PEBU1@@Z @ 0x1C0153BB4 (-CitpBitmapMerge@@YAXPEAU_CIT_BITMAP@@PEBU1@@Z.c)
 */

void __fastcall CitpBaseUseDataMerge<_CIT_USE_DATA>(struct _CIT_BITMAP *a1, const struct _CIT_BITMAP *a2)
{
  __int64 v3; // r11
  int *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rdi
  int v8; // eax
  int v9; // r8d
  int v10; // edx
  __int16 *v11; // r9
  unsigned __int16 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10

  CitpBitmapMerge(a1, a2);
  v4 = (int *)(v3 + 20);
  v6 = v5 - v3;
  v7 = 6LL;
  do
  {
    v8 = -1;
    v9 = *(int *)((char *)v4 + v6);
    if ( *(v4 - 1) + *(int *)((char *)v4 + v6 - 4) >= (unsigned int)*(v4 - 1) )
      v8 = *(v4 - 1) + *(int *)((char *)v4 + v6 - 4);
    v10 = -1;
    *(v4 - 1) = v8;
    if ( *v4 + v9 >= (unsigned int)*v4 )
      v10 = *v4 + v9;
    *v4 = v10;
    v4 += 2;
    --v7;
  }
  while ( v7 );
  v11 = (__int16 *)((char *)a2 + 64);
  v12 = (unsigned __int16 *)(v3 + 64);
  do
  {
    CitpStatIncrement(v12, *v11);
    v12 = (unsigned __int16 *)(v13 + 2);
    v11 = (__int16 *)(v14 + 2);
  }
  while ( v15 != 1 );
}

/*
 * XREFs of ??$CitpBaseUseDataMerge@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_SYSTEM_DATA@@PEBU0@@Z @ 0x1C01531DC
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C01554E4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpBitmapMerge@@YAXPEAU_CIT_BITMAP@@PEBU1@@Z @ 0x1C0153BB4 (-CitpBitmapMerge@@YAXPEAU_CIT_BITMAP@@PEBU1@@Z.c)
 */

void __fastcall CitpBaseUseDataMerge<_CIT_SYSTEM_DATA>(struct _CIT_BITMAP *a1, __int64 a2)
{
  __int64 v3; // rdi
  struct _CIT_BITMAP *v5; // r11
  __int64 v6; // rsi
  __int64 v7; // r11
  int *v8; // r9
  __int64 v9; // r10
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  __int16 *v13; // r9
  unsigned __int16 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r10

  v3 = a2 - (_QWORD)a1;
  v5 = a1;
  v6 = 6LL;
  do
  {
    CitpBitmapMerge(v5, (struct _CIT_BITMAP *)((char *)v5 + v3));
    v5 = (struct _CIT_BITMAP *)(v7 + 16);
    --v6;
  }
  while ( v6 );
  v8 = (int *)((char *)a1 + 100);
  v9 = 11LL;
  do
  {
    v10 = -1;
    v11 = -1;
    v12 = *(int *)((char *)v8 + v3);
    if ( *(v8 - 1) + *(int *)((char *)v8 + v3 - 4) >= (unsigned int)*(v8 - 1) )
      v10 = *(v8 - 1) + *(int *)((char *)v8 + v3 - 4);
    *(v8 - 1) = v10;
    if ( *v8 + v12 >= (unsigned int)*v8 )
      v11 = *v8 + v12;
    *v8 = v11;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  v13 = (__int16 *)(a2 + 184);
  v14 = (unsigned __int16 *)((char *)a1 + 184);
  do
  {
    CitpStatIncrement(v14, *v13);
    v14 = (unsigned __int16 *)(v15 + 2);
    v13 = (__int16 *)(v16 + 2);
  }
  while ( v17 != 1 );
}

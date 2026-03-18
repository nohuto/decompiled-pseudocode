/*
 * XREFs of scl_CalcComponentOffset @ 0x1C02BE090
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C02C7F5C (fsg_MergeGlyphData.c)
 * Callees:
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 *     InvokeGlobalGSScale @ 0x1C02BDD44 (InvokeGlobalGSScale.c)
 *     scl_ScaleBack @ 0x1C02BF488 (scl_ScaleBack.c)
 */

__int64 __fastcall scl_CalcComponentOffset(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        int a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        int *a9,
        int *a10)
{
  int v13; // eax
  int *v14; // rsi
  int *v15; // rdx
  int v16; // ecx
  int v17; // eax
  __int64 result; // rax
  int v19; // edx
  int v20; // eax
  int v21; // r10d
  int v22; // eax
  int v23; // r10d
  __int16 v24; // cx
  unsigned int v25; // eax
  __int16 v26; // cx
  int v27; // edx

  if ( a5 )
  {
    v13 = InvokeGlobalGSScale(*(_DWORD *)(a1 + 184), (int *)(a1 + 264), a2);
    v14 = a9;
    v15 = (int *)(a1 + 280);
    *a9 = v13;
    v16 = *(_DWORD *)(a1 + 188);
  }
  else
  {
    v17 = InvokeGlobalGSScale(*(_DWORD *)(a1 + 176), (int *)(a1 + 232), a2);
    v14 = a9;
    v15 = (int *)(a1 + 248);
    *a9 = v17;
    v16 = *(_DWORD *)(a1 + 180);
  }
  result = InvokeGlobalGSScale(v16, v15, a3);
  *a10 = result;
  if ( a6 )
  {
    v20 = *a7;
    v19 = a7[1];
    if ( *a7 < 0 )
      v20 = -v20;
    if ( v19 < 0 )
      v19 = -v19;
    v21 = a7[4];
    if ( v20 > v19 )
      v19 = v20;
    v22 = a7[3];
    if ( v22 < 0 )
      v22 = -v22;
    if ( v21 < 0 )
      v21 = -v21;
    if ( v22 > v21 )
      v21 = v22;
    result = 0x10000LL;
    if ( v19 != 0x10000 || v21 != 0x10000 )
    {
      *v14 = FixMul(*v14, v19);
      result = FixMul(*a10, v23);
      *a10 = result;
    }
  }
  if ( a4 )
  {
    v24 = *(_WORD *)(a1 + 452);
    v19 = a8;
    if ( (v24 & 1) != 0 && (a8 == 2 || (a8 == 0) != (v24 & 4)) )
      v25 = (*v14 + 2) & 0xFFFFFFFC;
    else
      v25 = (*v14 + 32) & 0xFFFFFFC0;
    *v14 = v25;
    v26 = *(_WORD *)(a1 + 452);
    if ( (v26 & 1) != 0 && (a8 == 2 || (a8 == 0) == (v26 & 4)) )
      result = (*a10 + 2) & 0xFFFFFFFC;
    else
      result = (*a10 + 32) & 0xFFFFFFC0;
    *a10 = result;
  }
  if ( !a5 )
  {
    scl_ScaleBack(a1 + 232, v19, (_DWORD)v14, (_DWORD)v14, 1);
    return scl_ScaleBack((int)a1 + 248, v27, (_DWORD)a10, (_DWORD)a10, 1);
  }
  return result;
}

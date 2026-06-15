/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800116F8
 * Callers:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180012248 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 * Callees:
 *     memset @ 0x1800275FE (memset.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  int v4; // ebx
  __int16 *v6; // r11
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r10
  signed __int64 v10; // r11
  unsigned __int16 *v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // rdx

  v4 = 0;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
    v4 = -2147024809;
  if ( v4 < 0 )
    goto LABEL_8;
  if ( a4 >= 0x7FFFFFFF )
  {
    v4 = -2147024809;
LABEL_8:
    if ( a2 )
      *(_WORD *)a1 = 0;
    return (unsigned int)v4;
  }
  v6 = &word_18002D708;
  v4 = 0;
  v7 = a4 & -(__int64)(a3 != 0LL);
  if ( a3 )
    v6 = (__int16 *)a3;
  if ( a2 )
  {
    v8 = v7 - a2;
    v9 = a2;
    v10 = (char *)v6 - a1;
    v11 = (unsigned __int16 *)a1;
    v12 = 0LL;
    do
    {
      if ( !(v8 + v9) )
        break;
      v13 = *(unsigned __int16 *)((char *)v11 + v10);
      if ( !v13 )
        break;
      *v11 = v13;
      ++v12;
      ++v11;
      --v9;
    }
    while ( v9 );
    if ( !v9 )
    {
      --v11;
      v4 = -2147024774;
      --v12;
    }
    v14 = a2 - v12;
    *v11 = 0;
    if ( v4 >= 0 && v14 > 1 && 2 * v14 > 2 )
      memset(&a1[2 * v12 + 2], 0, 2 * v14 - 2);
  }
  else if ( v7 && *v6 )
  {
    return (unsigned int)(a1 != 0LL ? -2147024774 : -2147024809);
  }
  return (unsigned int)v4;
}

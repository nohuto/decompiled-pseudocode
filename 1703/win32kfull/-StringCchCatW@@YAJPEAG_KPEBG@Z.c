/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C002BA68
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C000B910 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C002B8C0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v4; // r9
  unsigned __int16 *v5; // rax
  __int64 result; // rax
  __int64 v7; // r8
  unsigned __int16 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  char *v11; // r10
  unsigned __int16 v12; // r8

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    v7 = 260 - v4;
  else
    v7 = 0LL;
  if ( v4 )
  {
    v8 = &a1[v7];
    result = 0LL;
    v9 = 260 - v7;
    if ( 260 == v7 )
      goto LABEL_16;
    v10 = 2147483646LL;
    v11 = (char *)(a3 - (char *)v8);
    do
    {
      if ( !v10 )
        break;
      v12 = *(unsigned __int16 *)((char *)v8 + (_QWORD)v11);
      if ( !v12 )
        break;
      *v8 = v12;
      --v10;
      ++v8;
      --v9;
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_16:
      --v8;
      result = 2147942522LL;
    }
    *v8 = 0;
  }
  return result;
}

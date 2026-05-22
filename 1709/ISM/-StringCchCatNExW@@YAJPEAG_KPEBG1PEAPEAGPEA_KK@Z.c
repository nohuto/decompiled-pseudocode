/*
 * XREFs of ?StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18003301C
 * Callers:
 *     ?Describe@PropertyNode@Input@@UEBAKPEAGKK@Z @ 0x180031300 (-Describe@PropertyNode@Input@@UEBAKPEAGKK@Z.c)
 *     ?Describe@Property@Input@@UEBAKPEAGKK@Z @ 0x1800316F0 (-Describe@Property@Input@@UEBAKPEAGKK@Z.c)
 *     ?Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z @ 0x180033B3C (-Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x180033DC4 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatNExW(
        unsigned __int16 *a1,
        __int64 a2,
        char *a3,
        unsigned __int64 a4,
        unsigned __int16 **a5,
        unsigned __int64 *a6)
{
  int v7; // r10d
  __int64 v10; // rcx
  unsigned __int16 *i; // rax
  __int64 v12; // r11
  unsigned __int16 *v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int16 *v15; // r8
  __int64 v16; // rdi
  unsigned __int16 *v17; // r9
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  char *v20; // r14
  unsigned __int16 v21; // ax
  __int64 v22; // rdx

  v7 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v7 = -2147024809;
  if ( v7 < 0 )
    goto LABEL_9;
  v10 = a2;
  for ( i = a1; v10; --v10 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v7 = v10 == 0 ? 0x80070057 : 0;
  if ( v10 )
    v12 = a2 - v10;
  else
LABEL_9:
    v12 = 0LL;
  if ( v7 >= 0 )
  {
    v13 = &a1[v12];
    v14 = a2 - v12;
    v15 = v13;
    if ( a4 < 0x7FFFFFFF )
    {
      v7 = 0;
      if ( v14 > 1 )
      {
        v16 = a2 - v12;
        v17 = &a1[v12];
        v18 = 0LL;
        v19 = a4 - v14;
        v20 = (char *)(a3 - (char *)v13);
        do
        {
          if ( !(v19 + v16) )
            break;
          v21 = *(unsigned __int16 *)((char *)v17 + (_QWORD)v20);
          if ( !v21 )
            break;
          *v17 = v21;
          ++v18;
          ++v17;
          --v16;
        }
        while ( v16 );
        if ( !v16 )
        {
          --v17;
          v7 = -2147024774;
          --v18;
        }
        *v17 = 0;
        v15 = &v13[v18];
        v14 -= v18;
        if ( v7 >= 0 )
          goto LABEL_30;
      }
      else
      {
        if ( !a4 || !*(_WORD *)a3 )
        {
LABEL_30:
          if ( a5 )
            *a5 = v15;
          if ( a6 )
            *a6 = v14;
          return (unsigned int)v7;
        }
        v7 = a1 != 0LL ? -2147024774 : -2147024809;
      }
    }
    else
    {
      v7 = -2147024809;
    }
    if ( a2 )
    {
      v22 = a2 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v22 )
      {
        *v13 = 0;
        v14 = v22 - v12;
        v15 = v13;
      }
    }
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147024774 )
      goto LABEL_30;
  }
  return (unsigned int)v7;
}

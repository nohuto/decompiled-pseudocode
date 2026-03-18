/*
 * XREFs of ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0153C14
 * Callers:
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C00531CC (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01535C0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C0154D8C (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpContextReinitialize(struct _CIT_IMPACT_CONTEXT *a1, unsigned int a2)
{
  char *v2; // rsi
  unsigned __int64 v5; // rax
  char *v6; // rdi
  __int64 v7; // rdx
  char i; // cl
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int j; // ebp
  __int64 v12; // rcx
  char *v13; // rdi
  char **v14; // rax
  struct _CIT_IMPACT_CONTEXT *v15; // rdi
  __int64 v16; // rsi
  bool v17; // zf
  __int16 v18; // ax

  v2 = (char *)a1 + 312;
  *((_QWORD *)a1 + 40) = (char *)a1 + 312;
  *((_QWORD *)a1 + 39) = (char *)a1 + 312;
  *((_QWORD *)a1 + 42) = (char *)a1 + 328;
  *((_QWORD *)a1 + 41) = (char *)a1 + 328;
  *((_DWORD *)a1 + 91) = 0;
  *((_QWORD *)a1 + 44) = (char *)a1 + 344;
  *((_QWORD *)a1 + 43) = (char *)a1 + 344;
  v5 = (unsigned __int64)a1 + 376;
  v6 = (char *)*((_QWORD *)a1 + 49);
  v7 = *((_DWORD *)a1 + 95) >> 5;
  *((_DWORD *)a1 + 92) = 0;
  if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
  {
    for ( i = -1; (_DWORD)v7; LODWORD(v7) = (unsigned int)v7 >> 1 )
      ++i;
    v7 = (unsigned int)(1 << i);
  }
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (unsigned int)v7 > 0x4000000 )
    v7 = 0x4000000LL;
  *(_DWORD *)(v5 + 4) = 32 * v7;
  v9 = v5 | 1;
  v10 = (8 * (unsigned __int64)(unsigned int)v7 + 7) >> 3;
  if ( v6 > &v6[8 * v7] )
    v10 = 0LL;
  if ( v10 )
    memset64(v6, v9, v10);
  for ( j = 0; j < *((_DWORD *)a1 + 90); *((_QWORD *)v2 + 1) = v13 )
  {
    v12 = *((_QWORD *)a1 + 38) + 176LL * j;
    v13 = (char *)(v12 + 16);
    *(_QWORD *)(v12 + 24) = v12 + 16;
    *(_QWORD *)(v12 + 16) = v12 + 16;
    *(_QWORD *)v12 = 0LL;
    CitpProgDataReinitialize((struct _CIT_PROG_DATA *)v12);
    v14 = (char **)*((_QWORD *)v2 + 1);
    if ( *v14 != v2 )
      __fastfail(3u);
    *(_QWORD *)v13 = v2;
    ++j;
    *((_QWORD *)v13 + 1) = v14;
    *v14 = v13;
  }
  memset(*((void **)a1 + 27), 0, *((_QWORD *)a1 + 28));
  memset((char *)a1 + 232, 0, 0x48uLL);
  v15 = a1;
  v16 = 6LL;
  do
  {
    memset(*(void **)v15, 0, *((_QWORD *)v15 + 1));
    v15 = (struct _CIT_IMPACT_CONTEXT *)((char *)v15 + 16);
    --v16;
  }
  while ( v16 );
  memset((char *)a1 + 96, 0, 0x58uLL);
  *((_QWORD *)a1 + 23) = 0LL;
  *((_QWORD *)a1 + 24) = 0LL;
  *((_QWORD *)a1 + 25) = 0LL;
  *((_DWORD *)a1 + 52) = 0;
  v17 = (*((_BYTE *)a1 + 432) & 0x20) == 0;
  v18 = *((_WORD *)a1 + 218);
  *((_WORD *)a1 + 93) = v18;
  *((_WORD *)a1 + 94) = v18;
  *((_WORD *)a1 + 95) = v18;
  *((_WORD *)a1 + 92) = 1;
  if ( !v17 )
    CitpStatIncrement((unsigned __int16 *)a1 + 98, 1);
  CitpContextResetTrackingValues(a1, a2);
}

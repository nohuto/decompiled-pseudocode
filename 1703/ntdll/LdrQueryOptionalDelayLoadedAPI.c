/*
 * XREFs of LdrQueryOptionalDelayLoadedAPI @ 0x1800D5B80
 * Callers:
 *     <none>
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x18003A360 (LdrResolveDelayLoadedAPI.c)
 *     sub_1800D5CA0 @ 0x1800D5CA0 (sub_1800D5CA0.c)
 */

__int64 __fastcall LdrQueryOptionalDelayLoadedAPI(char *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // r8
  char *v10; // rdi
  char *v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // r10
  int v16; // r9d
  int v17; // ecx

  if ( a4 )
    return 3221225485LL;
  v7 = sub_1800D5CA0();
  v8 = (_BYTE *)v7;
  if ( !v7 )
    return 3221225781LL;
  v9 = 0LL;
  v10 = &a1[*(unsigned int *)(v7 + 12)];
  v11 = &a1[*(unsigned int *)(v7 + 16)];
  if ( !*(_QWORD *)v10 )
    return 3221225785LL;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)&v11[v12];
    if ( v13 >= 0 )
    {
      v14 = &a1[v13 + 2];
      v15 = a3 - (_QWORD)v14;
      do
      {
        v16 = (unsigned __int8)v14[v15];
        v17 = (unsigned __int8)*v14 - v16;
        if ( v17 )
          break;
        ++v14;
      }
      while ( v16 );
      if ( !v17 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    v12 = 8LL * (unsigned int)v9;
    if ( !*(_QWORD *)&v10[v12] )
      return 3221225785LL;
  }
  return LdrResolveDelayLoadedAPI(a1, v8, 0LL, 0LL, (__int64 *)&v10[8 * v9], 0) == 0 ? 0xC0000139 : 0;
}

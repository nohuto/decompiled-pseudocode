/*
 * XREFs of sub_18005BD90 @ 0x18005BD90
 * Callers:
 *     sub_18005AD34 @ 0x18005AD34 (sub_18005AD34.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     wcsncmp @ 0x18009BB40 (wcsncmp.c)
 *     sub_1800E2D04 @ 0x1800E2D04 (sub_1800E2D04.c)
 */

__int64 __fastcall sub_18005BD90(
        __int64 a1,
        void *a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        _DWORD *a6,
        __int16 a7,
        int *a8)
{
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  char *v14; // rdi
  int v15; // ecx
  unsigned __int16 v16; // [rsp+20h] [rbp-268h]
  char v17; // [rsp+30h] [rbp-258h] BYREF

  if ( !a5 || !a6 )
    return 3221225485LL;
  v10 = 0;
  if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( *a6 < 0x80000000 )
    {
      if ( (a7 & 0x1000) == 0 || (*a6 & 0xFFFF0000) == 0 )
      {
        *a8 = (_DWORD)a4 - *a6;
        return v10;
      }
      return (unsigned int)-1073741701;
    }
    if ( (a7 & 0x1000) != 0 && (*a6 & 0xFFFF0000) == 0 )
      return (unsigned int)-1073741701;
LABEL_28:
    *a8 = 1;
    return v10;
  }
  v12 = (unsigned int)*a6;
  v13 = -1LL;
  if ( (unsigned int)v12 < 0x80000000 )
  {
    *a8 = -1;
    return v10;
  }
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  if ( (a7 & 0x1000) != 0 )
  {
    if ( a5 + v12 < a5 )
      return (unsigned int)-1073741701;
    v14 = (char *)(a5 + v12);
    if ( a5 + v12 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
      return (unsigned int)-1073741701;
  }
  else
  {
    v14 = (char *)(a5 + v12);
  }
  if ( (a7 & 0x8800) != 0x8800 )
  {
LABEL_15:
    if ( ((unsigned __int64)(v14 + 2) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
    v15 = wcsncmp(a4, (const wchar_t *)v14 + 1, *(unsigned __int16 *)v14);
    if ( v15 )
      goto LABEL_17;
    do
      ++v13;
    while ( a4[v13] );
    if ( v13 == *(unsigned __int16 *)v14 )
    {
LABEL_17:
      *a8 = v15;
      return v10;
    }
    goto LABEL_28;
  }
  result = sub_1800E2D04(a2);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)v16 + 3 > 0x104 )
      return (unsigned int)-1073741701;
    result = sub_1800E2D04(a2);
    v10 = result;
    if ( (int)result >= 0 )
    {
      v14 = &v17;
      goto LABEL_15;
    }
  }
  return result;
}

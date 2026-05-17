/*
 * XREFs of sub_180053118 @ 0x180053118
 * Callers:
 *     sub_1800520D4 @ 0x1800520D4 (sub_1800520D4.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     wcsncmp @ 0x180090D80 (wcsncmp.c)
 *     sub_1800DE154 @ 0x1800DE154 (sub_1800DE154.c)
 */

__int64 __fastcall sub_180053118(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int16 a7,
        int *a8)
{
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int16 *v16; // rdi
  int v17; // ecx
  _WORD v18[8]; // [rsp+20h] [rbp-268h] BYREF
  _BYTE v19[528]; // [rsp+30h] [rbp-258h] BYREF

  if ( !a5 || !a6 )
    return 3221225485LL;
  v11 = *a6;
  v12 = 0;
  if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (int)v11 >= 0 )
    {
      if ( (a7 & 0x1000) == 0 || (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        *a8 = (_DWORD)a4 - v11;
        return v12;
      }
      return (unsigned int)-1073741701;
    }
    if ( (a7 & 0x1000) != 0 && (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
LABEL_27:
    *a8 = 1;
    return v12;
  }
  v14 = -1LL;
  if ( (int)v11 >= 0 )
  {
    *a8 = -1;
    return v12;
  }
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v15 = v11 + a5;
  if ( (a7 & 0x1000) != 0 )
  {
    if ( v15 < a5 )
      return (unsigned int)-1073741701;
    v16 = (unsigned __int16 *)(v11 + a5);
    if ( v15 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
      return (unsigned int)-1073741701;
  }
  else
  {
    v16 = (unsigned __int16 *)(v11 + a5);
  }
  if ( (a7 & 0x8800) != 0x8800 )
  {
LABEL_15:
    if ( ((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
    v17 = wcsncmp(a4, v16 + 1, *v16);
    if ( v17 )
      goto LABEL_19;
    do
      ++v14;
    while ( a4[v14] );
    if ( v14 == *v16 )
    {
LABEL_19:
      *a8 = v17;
      return v12;
    }
    goto LABEL_27;
  }
  result = sub_1800DE154(a2, v16, v18, 2LL);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)v18[0] + 3 > 0x104 )
      return (unsigned int)-1073741701;
    result = sub_1800DE154(a2, v16, v19, 2 * (unsigned int)v18[0] + 2);
    v12 = result;
    if ( (int)result >= 0 )
    {
      v16 = (unsigned __int16 *)v19;
      goto LABEL_15;
    }
  }
  return result;
}

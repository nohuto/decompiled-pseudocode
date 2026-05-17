/*
 * XREFs of sub_18004970C @ 0x18004970C
 * Callers:
 *     sub_180049308 @ 0x180049308 (sub_180049308.c)
 * Callees:
 *     sub_1800498D0 @ 0x1800498D0 (sub_1800498D0.c)
 *     RtlFindAceByType @ 0x18004A2D0 (RtlFindAceByType.c)
 */

__int64 sub_18004970C(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        char a12,
        _DWORD *a13,
        __int64 a14,
        ...)
{
  _BYTE *v14; // r13
  char v16; // r14
  int v17; // edi
  unsigned int v18; // ebx
  unsigned int v19; // r12d
  unsigned __int16 *v20; // rsi
  __int64 result; // rax
  __int64 v22[9]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+8h] BYREF
  char v24; // [rsp+C8h] [rbp+10h]
  char v25; // [rsp+D0h] [rbp+18h]
  __int64 v26; // [rsp+D8h] [rbp+20h]
  _BYTE *v27; // [rsp+130h] [rbp+78h] BYREF
  va_list va; // [rsp+130h] [rbp+78h]
  va_list va1; // [rsp+138h] [rbp+80h] BYREF

  va_start(va1, a14);
  va_start(va, a14);
  v27 = va_arg(va1, _BYTE *);
  v26 = a4;
  v25 = a3;
  v24 = a2;
  v14 = v27;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = (unsigned __int16 *)(a1 + 8);
  *v27 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)v20 == 17 )
      {
        if ( a11 == 3 )
        {
          if ( RtlFindAceByType(a14, 17LL, 0LL) )
          {
LABEL_13:
            if ( !v16 )
              break;
LABEL_20:
            result = 3221225507LL;
            *a13 = v18 + v17;
            return result;
          }
LABEL_4:
          result = sub_1800498D0(v20, a5, a6, a7, a8, a9, a10, (__int64)v22, a14, (__int64)&v23, (__int64)va);
          if ( (_DWORD)result == -1073741789 )
          {
            v16 = 1;
            result = 0LL;
          }
          if ( (int)result < 0 )
            return result;
          if ( (_BYTE)v27 )
            *v14 = 1;
          v17 += LODWORD(v22[0]);
          if ( LODWORD(v22[0]) > v18 || (v18 -= LODWORD(v22[0]), v18 <= (unsigned int)v23) )
            v18 = v23;
        }
      }
      else if ( a11 != 3 )
      {
        goto LABEL_4;
      }
      ++v19;
      v20 = (unsigned __int16 *)((char *)v20 + v20[1]);
      if ( v19 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
  }
  if ( a12 )
    goto LABEL_20;
  *a13 = v17;
  return 0LL;
}

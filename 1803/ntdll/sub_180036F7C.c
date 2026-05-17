/*
 * XREFs of sub_180036F7C @ 0x180036F7C
 * Callers:
 *     sub_1800302AC @ 0x1800302AC (sub_1800302AC.c)
 * Callees:
 *     RtlFindAceByType @ 0x1800306C0 (RtlFindAceByType.c)
 *     sub_18003715C @ 0x18003715C (sub_18003715C.c)
 */

__int64 sub_180036F7C(
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
  _BYTE *v14; // r12
  char v16; // r14
  int v17; // edi
  unsigned int v18; // ebx
  unsigned int v19; // r15d
  unsigned __int16 *v20; // rsi
  __int64 v21; // r13
  __int64 result; // rax
  __int64 v23[11]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+8h] BYREF
  char v25; // [rsp+D8h] [rbp+10h]
  char v26; // [rsp+E0h] [rbp+18h]
  __int64 v27; // [rsp+E8h] [rbp+20h]
  _BYTE *v28; // [rsp+140h] [rbp+78h] BYREF
  va_list va; // [rsp+140h] [rbp+78h]
  va_list va1; // [rsp+148h] [rbp+80h] BYREF

  va_start(va1, a14);
  va_start(va, a14);
  v28 = va_arg(va1, _BYTE *);
  v27 = a4;
  v26 = a3;
  v25 = a2;
  v14 = v28;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = (unsigned __int16 *)(a1 + 8);
  *v28 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v21 = a14;
    while ( 1 )
    {
      if ( *(_BYTE *)v20 == 17 )
      {
        if ( a11 == 3 )
        {
          if ( RtlFindAceByType(v21, 17, 0LL) )
          {
LABEL_14:
            if ( !v16 )
              break;
LABEL_21:
            result = 3221225507LL;
            *a13 = v18 + v17;
            return result;
          }
LABEL_5:
          result = sub_18003715C(v20, a5, a6, a7, a8, a9, a10, (__int64)v23, v21, (__int64)&v24, (__int64)va);
          if ( (_DWORD)result == -1073741789 )
          {
            v16 = 1;
            result = 0LL;
          }
          if ( (int)result < 0 )
            return result;
          if ( (_BYTE)v28 )
            *v14 = 1;
          v17 += LODWORD(v23[0]);
          if ( LODWORD(v23[0]) > v18 || (v18 -= LODWORD(v23[0]), v18 <= (unsigned int)v24) )
            v18 = v24;
        }
      }
      else if ( a11 != 3 )
      {
        goto LABEL_5;
      }
      ++v19;
      v20 = (unsigned __int16 *)((char *)v20 + v20[1]);
      if ( v19 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_14;
    }
  }
  if ( a12 )
    goto LABEL_21;
  *a13 = v17;
  return 0LL;
}

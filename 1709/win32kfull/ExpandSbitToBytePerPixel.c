/*
 * XREFs of ExpandSbitToBytePerPixel @ 0x1C02BB9DC
 * Callers:
 *     GetSbitComponent @ 0x1C02BBC74 (GetSbitComponent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandSbitToBytePerPixel(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned __int16 v9; // r13
  char v14; // r8
  unsigned __int16 v15; // r12
  __int16 v16; // r9
  __int64 v17; // r10
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  _BYTE *v25; // r10
  __int16 v26; // r14
  _BYTE *v27; // rdi
  unsigned __int16 v28; // r8
  bool v29; // zf
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+10h] [rbp-38h]
  __int64 i; // [rsp+18h] [rbp-30h]
  unsigned __int16 v34; // [rsp+50h] [rbp+8h]
  unsigned __int16 v35; // [rsp+70h] [rbp+28h]

  v9 = a1;
  v34 = (1 << a5) - 1;
  if ( !a1 || !a2 )
    return 0LL;
  v14 = 2;
  if ( a5 == 2 )
  {
    v15 = 3;
    v16 = 2 * ((a2 - 1) & 3);
    goto LABEL_9;
  }
  if ( a5 == 4 )
  {
    v15 = 15;
    v14 = 1;
    v16 = 4 * ((a2 - 1) & 1);
    goto LABEL_9;
  }
  if ( a5 != 8 )
    return 0LL;
  v15 = 255;
  v16 = 0;
  v14 = 0;
LABEL_9:
  v31 = a4;
  v17 = (unsigned int)a1 - 1;
  v18 = v17 * a4;
  if ( v18 <= 0xFFFFFFFF )
  {
    v19 = v18 + a2;
    if ( v19 >= (unsigned int)v18 && v19 <= a8 )
    {
      v32 = a3;
      v20 = v17 * a3;
      if ( v20 <= 0xFFFFFFFF && (unsigned int)v20 <= a6 )
      {
        v21 = a9 + (v9 - 1) * a4;
        v22 = a7 + (v9 - 1) * a3;
        v23 = a7 + a6;
        v24 = (a2 - 1LL) >> v14;
        for ( i = v24; ; v24 = i )
        {
          v25 = (_BYTE *)(v24 + v22);
          v26 = v16;
          v27 = (_BYTE *)(a2 - 1LL + v21);
          if ( v24 + v22 >= v23 || (unsigned __int64)v25 < a7 )
            break;
          v35 = a2;
          v28 = a2;
          *v25 >>= 8 - v16 - a5;
          if ( a2 )
          {
            while ( 1 )
            {
              if ( *v27 )
              {
                v28 = v35;
                *v27 = v34 - (v34 - (unsigned __int8)*v27) * (v15 & (v34 - (unsigned __int8)*v25)) / v34;
              }
              else
              {
                *v27 = v15 & *v25;
              }
              if ( (unsigned __int64)v25 >= a7 + a6 || (unsigned __int64)v25 < a7 )
                return 6656LL;
              --v27;
              *v25 >>= a5;
              if ( !v26 )
              {
                v26 = 8;
                --v25;
              }
              v26 -= a5;
              v29 = v28-- == 1;
              v35 = v28;
              if ( v29 )
              {
                v23 = a7 + a6;
                break;
              }
            }
          }
          v21 -= v31;
          v22 -= v32;
          if ( !--v9 )
            return 0LL;
        }
      }
    }
  }
  return 6656LL;
}

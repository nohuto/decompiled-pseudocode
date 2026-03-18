/*
 * XREFs of ExpandSbitToBytePerPixel @ 0x1C02C1BB4
 * Callers:
 *     GetSbitComponent @ 0x1C02C1E60 (GetSbitComponent.c)
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
  unsigned __int16 v10; // r15
  unsigned __int16 v13; // r13
  char v15; // r8
  unsigned __int16 v16; // r12
  __int16 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // rsi
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // rax
  _BYTE *v28; // rbx
  __int16 v29; // r14
  _BYTE *v30; // r10
  unsigned __int16 v31; // r8
  bool v32; // zf
  __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+10h] [rbp-48h]
  __int64 v36; // [rsp+18h] [rbp-40h]
  unsigned __int16 v37; // [rsp+80h] [rbp+28h]

  v10 = a1;
  v13 = (1 << a5) - 1;
  if ( !a1 || !a2 )
    return 0LL;
  v15 = 2;
  if ( a5 != 2 )
  {
    if ( a5 == 4 )
    {
      v16 = 15;
      v15 = 1;
      v17 = 4 * ((a2 - 1) & 1);
      goto LABEL_9;
    }
    if ( a5 == 8 )
    {
      v16 = 255;
      v17 = 0;
      v15 = 0;
      goto LABEL_9;
    }
    return 0LL;
  }
  v16 = 3;
  v17 = 2 * ((a2 - 1) & 3);
LABEL_9:
  v18 = (unsigned int)a1 - 1;
  v19 = a4 * (unsigned __int64)(unsigned int)v18;
  v34 = a4;
  if ( v19 <= 0xFFFFFFFF )
  {
    v20 = a2 + (_DWORD)v19;
    if ( v20 >= (unsigned int)v19 && v20 <= a8 )
    {
      v21 = a3 * v18;
      v35 = a3;
      if ( v21 <= 0xFFFFFFFF && (unsigned int)v21 <= a6 )
      {
        v22 = v10 - 1;
        v23 = a9 + v22 * a4;
        v24 = a7 + v22 * a3;
        v25 = a7 + a6;
        v26 = a2 - 1;
        v27 = v26 >> v15;
        v36 = v26 >> v15;
LABEL_15:
        v28 = (_BYTE *)(v26 + v23);
        v29 = v17;
        v30 = (_BYTE *)(v27 + v24);
        if ( v27 + v24 < v25 && (unsigned __int64)v30 >= a7 )
        {
          v37 = a2;
          v31 = a2;
          *v30 >>= 8 - v17 - a5;
          while ( 1 )
          {
            if ( *v28 )
            {
              v31 = v37;
              *v28 = v13 - (v13 - (unsigned __int8)*v28) * (v16 & (v13 - (unsigned __int8)*v30)) / v13;
            }
            else
            {
              *v28 = v16 & *v30;
            }
            if ( (unsigned __int64)v30 >= a7 + a6 || (unsigned __int64)v30 < a7 )
              break;
            --v28;
            *v30 >>= a5;
            if ( !v29 )
            {
              v29 = 8;
              --v30;
            }
            v29 -= a5;
            v32 = v31-- == 1;
            v37 = v31;
            if ( v32 )
            {
              v25 = a7 + a6;
              v23 -= v34;
              v24 -= v35;
              if ( !--v10 )
                return 0LL;
              v27 = v36;
              v26 = a2 - 1;
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  return 6656LL;
}

/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x14015CB70
 * Callers:
 *     MiGetUltraMapping @ 0x14015C940 (MiGetUltraMapping.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindSetBitsAndClearEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r8
  signed __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  unsigned int v28; // ecx
  _QWORD *v29; // r9
  __int64 v30; // rdx
  unsigned int v31; // r9d
  __int64 v32; // rcx
  bool v33; // sf
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax

  v3 = *a1;
  v5 = a1[1];
  v7 = (__int64)a1;
  v8 = a3 & -(__int64)(a3 < *a1);
  v9 = *a1 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v9 - v8 + 1 < a2 )
        goto LABEL_38;
      v10 = v9 - a2 + 1;
      v11 = v5 + 8 * (v10 >> 6);
      v12 = (_QWORD *)(v5 + 8 * (v8 >> 6));
      v13 = ((1LL << (v8 & 0x3F)) - 1) | ~*v12;
      if ( a2 > 0x7F )
      {
        v26 = v11 + 8;
        if ( (v10 & 0x3F) == 0 )
          v26 = v5 + 8 * (v10 >> 6);
        if ( v13 )
        {
          if ( *++v12 != -1LL )
            goto LABEL_50;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v27, v13);
          if ( v20 )
            v28 = 64;
          else
            v28 = 63 - v27;
        }
        else
        {
          v28 = 0;
        }
        while ( 1 )
        {
          v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) - v28;
          if ( v15 > v10 )
            break;
          v29 = &v12[(a2 - v28) >> 6];
          while ( ++v12 != v29 )
          {
            if ( *v12 != -1LL )
              goto LABEL_50;
          }
          v31 = ((_BYTE)a2 - (_BYTE)v28) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v28) & 0x3F) == 0 )
            goto LABEL_11;
          v20 = !_BitScanForward64((unsigned __int64 *)&v32, ~*v12);
          if ( v20 )
            LODWORD(v32) = 64;
          if ( (unsigned int)v32 >= v31 )
            goto LABEL_11;
          do
          {
LABEL_50:
            if ( (unsigned __int64)v12 > v26 )
            {
LABEL_33:
              v15 = -1LL;
              goto LABEL_34;
            }
            ++v12;
          }
          while ( *v12 != -1LL );
          v20 = !_BitScanReverse64((unsigned __int64 *)&v30, ~*(v12 - 1));
          if ( v20 )
            v28 = 64;
          else
            v28 = 63 - v30;
        }
LABEL_38:
        v15 = -1LL;
        goto LABEL_34;
      }
      if ( a2 >= 0x40 )
      {
        do
        {
LABEL_63:
          v33 = v13 < 0;
          while ( 1 )
          {
            if ( v33 )
            {
              if ( (unsigned __int64)++v12 <= v11 )
              {
                v13 = ~*v12;
                goto LABEL_63;
              }
LABEL_67:
              v15 = -1LL;
              goto LABEL_34;
            }
            v20 = !_BitScanReverse64((unsigned __int64 *)&v34, v13);
            if ( v20 )
              v35 = 64;
            else
              v35 = 63 - v34;
            v15 = ((((__int64)((__int64)v12 - v5) >> 3) + 1) << 6) - v35;
            if ( v15 > v10 )
              goto LABEL_67;
            v36 = a2 - v35;
            if ( a2 == v35 )
              goto LABEL_11;
            v13 = ~*++v12;
            if ( v36 < 0x40 )
              break;
            v33 = v13 < 0;
            if ( *v12 == -1LL )
            {
              v36 -= 64LL;
              if ( !v36 )
                goto LABEL_11;
              v13 = ~*++v12;
              break;
            }
          }
          v20 = !_BitScanForward64(&v37, v13);
          if ( v20 )
            v37 = 64LL;
        }
        while ( v37 < v36 );
      }
      else
      {
        if ( a2 <= 1 )
        {
          while ( 1 )
          {
            if ( v13 != -1 )
            {
              _BitScanForward64(&v14, ~v13);
              v15 = v14 + ((__int64)((__int64)v12 - v5) >> 3 << 6);
              goto LABEL_10;
            }
            if ( (unsigned __int64)++v12 > v11 )
              break;
            v13 = ~*v12;
          }
          v15 = -1LL;
          goto LABEL_34;
        }
        v18 = 0LL;
        v19 = (_QWORD *)(v5 + 8 * (v9 >> 6));
        while ( 1 )
        {
          if ( v13 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v12 > v11 )
                goto LABEL_33;
              v13 = ~*v12;
              if ( *v12 )
              {
                v18 = 0LL;
                break;
              }
            }
          }
          v20 = !_BitScanForward64((unsigned __int64 *)&v21, v13);
          if ( v20 )
            LODWORD(v21) = 64;
          if ( (unsigned int)(v18 + v21) >= a2 )
            break;
          v22 = a2;
          v23 = ~v13;
          while ( 1 )
          {
            v23 &= v23 >> (v22 >> 1);
            if ( !v23 )
              break;
            v22 -= v22 >> 1;
            if ( v22 <= 1 )
            {
              _BitScanForward64(&v23, v23);
              goto LABEL_29;
            }
          }
          if ( v12 == v19 )
            goto LABEL_33;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v24, v13);
          if ( v20 )
            v18 = 64LL;
          else
            v18 = (unsigned int)(63 - v24);
          v13 = ~*++v12;
        }
        v23 = -v18;
LABEL_29:
        v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) + v23;
LABEL_10:
        if ( v15 > v10 )
          goto LABEL_38;
      }
LABEL_11:
      if ( v15 != -1LL )
        goto LABEL_12;
LABEL_34:
      if ( !v8 )
      {
LABEL_12:
        v7 = (__int64)a1;
        v16 = v15;
        goto LABEL_13;
      }
      v25 = a2 + a3;
      if ( a2 + a3 > v3 )
        v25 = v3;
      v9 = v25 - 1;
      v8 = 0LL;
    }
  }
  v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 != -1LL )
    RtlClearBitsEx(v7, v16, a2);
  return v16;
}

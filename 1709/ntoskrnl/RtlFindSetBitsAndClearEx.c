/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x1400CF180
 * Callers:
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
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
  __int64 v26; // rax
  unsigned int v27; // ecx
  _QWORD *v28; // r9
  __int64 v29; // rdx
  unsigned int v30; // r9d
  __int64 v31; // rcx
  bool v32; // sf
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r10

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
        goto LABEL_55;
      v10 = v9 - a2 + 1;
      v11 = v5 + 8 * (v10 >> 6);
      v12 = (_QWORD *)(v5 + 8 * (v8 >> 6));
      v13 = ((1LL << (v8 & 0x3F)) - 1) | ~*v12;
      if ( a2 > 0x7F )
      {
        v25 = v11 + 8;
        if ( (v10 & 0x3F) == 0 )
          v25 = v5 + 8 * (v10 >> 6);
        if ( v13 )
        {
          if ( *++v12 != -1LL )
            goto LABEL_46;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v26, v13);
          if ( v20 )
            v27 = 64;
          else
            v27 = 63 - v26;
        }
        else
        {
          v27 = 0;
        }
        while ( 1 )
        {
          v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) - v27;
          if ( v15 > v10 )
            break;
          v28 = &v12[(a2 - v27) >> 6];
          while ( ++v12 != v28 )
          {
            if ( *v12 != -1LL )
              goto LABEL_46;
          }
          v30 = ((_BYTE)a2 - (_BYTE)v27) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v27) & 0x3F) == 0 )
            goto LABEL_11;
          v20 = !_BitScanForward64((unsigned __int64 *)&v31, ~*v12);
          if ( v20 )
            LODWORD(v31) = 64;
          if ( (unsigned int)v31 >= v30 )
            goto LABEL_11;
          do
          {
LABEL_46:
            if ( (unsigned __int64)v12 > v25 )
            {
LABEL_33:
              v15 = -1LL;
              goto LABEL_81;
            }
            ++v12;
          }
          while ( *v12 != -1LL );
          v20 = !_BitScanReverse64((unsigned __int64 *)&v29, ~*(v12 - 1));
          if ( v20 )
            v27 = 64;
          else
            v27 = 63 - v29;
        }
LABEL_55:
        v15 = -1LL;
        goto LABEL_81;
      }
      if ( a2 >= 0x40 )
      {
        do
        {
LABEL_60:
          v32 = v13 < 0;
          while ( 1 )
          {
            if ( v32 )
            {
              if ( (unsigned __int64)++v12 <= v11 )
              {
                v13 = ~*v12;
                goto LABEL_60;
              }
LABEL_64:
              v15 = -1LL;
              goto LABEL_81;
            }
            v20 = !_BitScanReverse64((unsigned __int64 *)&v33, v13);
            if ( v20 )
              v34 = 64;
            else
              v34 = 63 - v33;
            v15 = ((((__int64)((__int64)v12 - v5) >> 3) + 1) << 6) - v34;
            if ( v15 > v10 )
              goto LABEL_64;
            v35 = a2 - v34;
            if ( a2 == v34 )
              goto LABEL_11;
            v13 = ~*++v12;
            if ( v35 < 0x40 )
              break;
            v32 = v13 < 0;
            if ( *v12 == -1LL )
            {
              v35 -= 64LL;
              if ( !v35 )
                goto LABEL_11;
              v13 = ~*++v12;
              break;
            }
          }
          v20 = !_BitScanForward64(&v36, v13);
          if ( v20 )
            v36 = 64LL;
        }
        while ( v36 < v35 );
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
          goto LABEL_81;
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
              goto LABEL_25;
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
LABEL_25:
        v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) + v23;
LABEL_10:
        if ( v15 > v10 )
          goto LABEL_55;
      }
LABEL_11:
      if ( v15 != -1LL )
        goto LABEL_12;
LABEL_81:
      if ( !v8 )
      {
LABEL_12:
        v7 = (__int64)a1;
        v16 = v15;
        goto LABEL_13;
      }
      v37 = a2 + a3;
      if ( a2 + a3 > v3 )
        v37 = v3;
      v9 = v37 - 1;
      v8 = 0LL;
    }
  }
  v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 != -1LL )
    RtlClearBitsEx(v7, v16, a2);
  return v16;
}

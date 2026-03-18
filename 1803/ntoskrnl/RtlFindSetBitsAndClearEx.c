/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x14013A270
 * Callers:
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindSetBitsAndClearEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  _QWORD *v12; // r8
  signed __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r10
  __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rdx
  _QWORD *v33; // r9
  unsigned int v34; // r9d
  __int64 v35; // rcx
  unsigned __int64 v36; // r10

  v3 = *a1;
  v5 = a1[1];
  v8 = a3 & -(__int64)(a3 < *a1);
  v9 = *a1 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v9 - v8 + 1 < a2 )
      {
LABEL_33:
        v15 = -1LL;
        goto LABEL_74;
      }
      v10 = v9 - a2 + 1;
      v11 = v5 + 8 * (v10 >> 6);
      v12 = (_QWORD *)(v5 + 8 * (v8 >> 6));
      v13 = ~*v12 | ((1LL << (v8 & 0x3F)) - 1);
      if ( a2 > 0x7F )
      {
        v29 = v11 + 8;
        if ( (v10 & 0x3F) == 0 )
          v29 = v5 + 8 * (v10 >> 6);
        if ( v13 )
        {
          if ( *++v12 != -1LL )
            goto LABEL_53;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v30, v13);
          if ( v20 )
            v31 = 64;
          else
            v31 = 63 - v30;
        }
        else
        {
          v31 = 0;
        }
        while ( 1 )
        {
          v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) - v31;
          if ( v15 > v10 )
            goto LABEL_33;
          v33 = &v12[(a2 - v31) >> 6];
          while ( ++v12 != v33 )
          {
            if ( *v12 != -1LL )
              goto LABEL_53;
          }
          v34 = ((_BYTE)a2 - (_BYTE)v31) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v31) & 0x3F) == 0 )
            goto LABEL_11;
          v20 = !_BitScanForward64((unsigned __int64 *)&v35, ~*v12);
          if ( v20 )
            LODWORD(v35) = 64;
          if ( (unsigned int)v35 >= v34 )
            goto LABEL_11;
          do
          {
LABEL_53:
            if ( (unsigned __int64)v12 > v29 )
              goto LABEL_33;
            ++v12;
          }
          while ( *v12 != -1LL );
          v20 = !_BitScanReverse64((unsigned __int64 *)&v32, ~*(v12 - 1));
          if ( v20 )
            v31 = 64;
          else
            v31 = 63 - v32;
        }
      }
      if ( a2 >= 0x40 )
        break;
      if ( a2 > 1 )
      {
        v18 = 0LL;
        v19 = (_QWORD *)(v5 + 8 * (v9 >> 6));
        while ( v13 != -1 )
        {
LABEL_18:
          v20 = !_BitScanForward64((unsigned __int64 *)&v21, v13);
          if ( v20 )
            LODWORD(v21) = 64;
          if ( (unsigned int)(v18 + v21) >= a2 )
          {
            v23 = -v18;
LABEL_25:
            v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) + v23;
            goto LABEL_10;
          }
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
        while ( 1 )
        {
          if ( (unsigned __int64)++v12 > v11 )
            goto LABEL_33;
          v13 = ~*v12;
          if ( *v12 )
          {
            v18 = 0LL;
            goto LABEL_18;
          }
        }
      }
      while ( v13 == -1 )
      {
        if ( (unsigned __int64)++v12 > v11 )
          goto LABEL_33;
        v13 = ~*v12;
      }
      _BitScanForward64(&v14, ~v13);
      v15 = v14 + ((__int64)((__int64)v12 - v5) >> 3 << 6);
LABEL_10:
      if ( v15 > v10 )
        goto LABEL_33;
LABEL_11:
      if ( v15 != -1LL )
      {
LABEL_12:
        v16 = v15;
        goto LABEL_13;
      }
LABEL_74:
      if ( !v8 )
        goto LABEL_12;
      v36 = a2 + a3;
      if ( a2 + a3 > v3 )
        v36 = v3;
      v9 = v36 - 1;
      v8 = 0LL;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v13 < 0 )
        {
          if ( (unsigned __int64)++v12 > v11 )
            goto LABEL_33;
          v13 = ~*v12;
        }
        v20 = !_BitScanReverse64((unsigned __int64 *)&v25, v13);
        if ( v20 )
          v26 = 64;
        else
          v26 = 63 - v25;
        v15 = ((((__int64)((__int64)v12 - v5) >> 3) + 1) << 6) - v26;
        if ( v15 > v10 )
          goto LABEL_33;
        v27 = a2 - v26;
        if ( a2 == v26 )
          goto LABEL_11;
        v13 = ~*++v12;
        if ( v27 >= 0x40 )
          break;
LABEL_39:
        v20 = !_BitScanForward64(&v28, v13);
        if ( v20 )
          v28 = 64LL;
        if ( v28 >= v27 )
          goto LABEL_11;
      }
      if ( *v12 == -1LL )
      {
        v27 -= 64LL;
        if ( !v27 )
          goto LABEL_11;
        v13 = ~*++v12;
        goto LABEL_39;
      }
    }
  }
  v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 != -1LL )
    RtlClearBitsEx((__int64)a1, v16, a2);
  return v16;
}

/*
 * XREFs of RtlFindClearBitsEx @ 0x140252190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindClearBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 *v13; // r8
  signed __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // r9
  unsigned int v21; // r9d
  __int64 v22; // rcx
  unsigned __int64 v23; // r10
  __int64 v24; // rdx
  unsigned __int64 *v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // r10d
  unsigned __int64 v28; // rdx
  bool v29; // sf
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax

  v3 = *a1;
  v5 = a1[1];
  v7 = a3 & -(__int64)(a3 < *a1);
  v8 = *a1 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v8 - v7 + 1 < a2 )
        goto LABEL_4;
      v11 = v8 - a2 + 1;
      v12 = v5 + 8 * (v11 >> 6);
      v13 = (unsigned __int64 *)(v5 + 8 * (v7 >> 6));
      v14 = ((1LL << (v7 & 0x3F)) - 1) | *v13;
      if ( a2 <= 0x7F )
      {
        if ( a2 >= 0x40 )
        {
          do
          {
LABEL_47:
            v29 = v14 < 0;
            do
            {
              if ( v29 )
              {
                if ( (unsigned __int64)++v13 > v12 )
                  goto LABEL_4;
                v14 = *v13;
                goto LABEL_47;
              }
              v17 = !_BitScanReverse64((unsigned __int64 *)&v30, v14);
              if ( v17 )
                v31 = 64;
              else
                v31 = 63 - v30;
              v10 = ((((__int64)((__int64)v13 - v5) >> 3) + 1) << 6) - v31;
              if ( v10 > v11 )
                goto LABEL_4;
              v32 = a2 - v31;
              if ( a2 == v31 )
                goto LABEL_26;
              v14 = *++v13;
              if ( v32 < 0x40 )
                goto LABEL_58;
              v29 = v14 < 0;
            }
            while ( v14 );
            v32 -= 64LL;
            if ( !v32 )
              break;
            v14 = *++v13;
LABEL_58:
            v17 = !_BitScanForward64(&v33, v14);
            if ( v17 )
              v33 = 64LL;
          }
          while ( v33 < v32 );
        }
        else
        {
          if ( a2 > 1 )
          {
            v24 = 0LL;
            v25 = (unsigned __int64 *)(v5 + 8 * (v8 >> 6));
            while ( v14 != -1 )
            {
LABEL_38:
              v17 = !_BitScanForward64((unsigned __int64 *)&v26, v14);
              if ( v17 )
                LODWORD(v26) = 64;
              if ( (unsigned int)(v24 + v26) >= a2 )
              {
                v28 = -v24;
LABEL_68:
                v10 = ((__int64)((__int64)v13 - v5) >> 3 << 6) + v28;
                goto LABEL_69;
              }
              v27 = a2;
              v28 = ~v14;
              while ( 1 )
              {
                v28 &= v28 >> (v27 >> 1);
                if ( !v28 )
                  break;
                v27 -= v27 >> 1;
                if ( v27 <= 1 )
                {
                  _BitScanForward64(&v28, v28);
                  goto LABEL_68;
                }
              }
              if ( v13 == v25 )
                goto LABEL_4;
              v17 = !_BitScanReverse64((unsigned __int64 *)&v34, v14);
              if ( v17 )
                v24 = 64LL;
              else
                v24 = (unsigned int)(63 - v34);
              v14 = *++v13;
            }
            while ( 1 )
            {
              if ( (unsigned __int64)++v13 > v12 )
                goto LABEL_4;
              v14 = *v13;
              if ( *v13 != -1LL )
              {
                v24 = 0LL;
                goto LABEL_38;
              }
            }
          }
          while ( v14 == -1 )
          {
            if ( (unsigned __int64)++v13 > v12 )
              goto LABEL_4;
            v14 = *v13;
          }
          _BitScanForward64(&v35, ~v14);
          v10 = v35 + ((__int64)((__int64)v13 - v5) >> 3 << 6);
LABEL_69:
          if ( v10 > v11 )
            goto LABEL_4;
        }
      }
      else
      {
        v15 = v12 + 8;
        if ( (v11 & 0x3F) == 0 )
          v15 = v5 + 8 * (v11 >> 6);
        if ( v14 )
        {
          if ( *++v13 )
            goto LABEL_14;
          v17 = !_BitScanReverse64((unsigned __int64 *)&v18, v14);
          if ( v17 )
LABEL_12:
            v16 = 64;
          else
            v16 = 63 - v18;
        }
        else
        {
          v16 = 0;
        }
LABEL_18:
        v10 = ((__int64)((__int64)v13 - v5) >> 3 << 6) - v16;
        if ( v10 > v11 )
          goto LABEL_4;
        v20 = &v13[(a2 - v16) >> 6];
        while ( ++v13 != v20 )
        {
          if ( *v13 )
            goto LABEL_14;
        }
        v21 = ((_BYTE)a2 - (_BYTE)v16) & 0x3F;
        if ( (((_BYTE)a2 - (_BYTE)v16) & 0x3F) != 0 )
        {
          v17 = !_BitScanForward64((unsigned __int64 *)&v22, *v13);
          if ( v17 )
            LODWORD(v22) = 64;
          if ( (unsigned int)v22 < v21 )
          {
LABEL_14:
            while ( (unsigned __int64)v13 <= v15 )
            {
              if ( !*++v13 )
              {
                v17 = !_BitScanReverse64((unsigned __int64 *)&v19, *(v13 - 1));
                if ( v17 )
                  goto LABEL_12;
                v16 = 63 - v19;
                goto LABEL_18;
              }
            }
LABEL_4:
            v10 = -1LL;
            goto LABEL_27;
          }
        }
      }
LABEL_26:
      if ( v10 != -1LL )
        return v10;
LABEL_27:
      if ( !v7 )
        return v10;
      v23 = a2 + a3;
      if ( a2 + a3 > v3 )
        v23 = v3;
      v8 = v23 - 1;
      v7 = 0LL;
    }
  }
  return v7 & 0xFFFFFFFFFFFFFFF8uLL;
}

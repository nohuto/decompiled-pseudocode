/*
 * XREFs of ?BltLnkPatMaskCopy24@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1C01303C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy24(struct BLTINFO *a1, unsigned int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // ebp
  __int64 v5; // r12
  __int64 v6; // r14
  unsigned int v8; // r11d
  char v9; // r10
  unsigned int v10; // ebx
  int v12; // esi
  int v13; // r15d
  _BYTE *i; // rdx
  char v15; // cl
  unsigned int v16; // r8d
  int v17; // r9d
  unsigned int v18; // r8d

  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v8 = a2 >> 8;
  v9 = a2;
  v10 = HIWORD(a2);
LABEL_3:
  if ( v4 )
  {
    --v4;
    v12 = *((_DWORD *)a1 + 7);
    v13 = *((_DWORD *)a1 + 12);
    for ( i = (_BYTE *)(v6 + 3 * *((_DWORD *)a1 + 14)); ; i += 3 * v17 )
    {
      if ( v12 <= 0 )
      {
        v6 += *((int *)a1 + 11);
        v5 += *((int *)a1 + 10);
        goto LABEL_3;
      }
      v15 = 0;
      v16 = a4 ^ *(unsigned __int8 *)(((__int64)v13 >> 3) + v5);
      v17 = 8 - (v13 & 7);
      if ( v17 > v12 )
      {
        v17 = v12;
        v15 = 8 - (v13 & 7) - v12;
      }
      v12 -= v17;
      v13 += v17;
      if ( v16 != 255 )
      {
        v18 = v16 >> v15;
        if ( v17 != 1 )
        {
          if ( v17 != 2 )
          {
            if ( v17 != 3 )
            {
              if ( v17 != 4 )
              {
                if ( v17 != 5 )
                {
                  if ( v17 != 6 )
                  {
                    if ( v17 != 7 )
                    {
                      if ( v17 != 8 )
                        continue;
                      if ( (v18 & 1) == 0 )
                      {
                        i[23] = v10;
                        i[22] = v8;
                        i[21] = v9;
                      }
                      v18 >>= 1;
                    }
                    if ( (v18 & 1) == 0 )
                    {
                      i[20] = v10;
                      i[19] = v8;
                      i[18] = v9;
                    }
                    v18 >>= 1;
                  }
                  if ( (v18 & 1) == 0 )
                  {
                    i[17] = v10;
                    i[16] = v8;
                    i[15] = v9;
                  }
                  v18 >>= 1;
                }
                if ( (v18 & 1) == 0 )
                {
                  i[14] = v10;
                  i[13] = v8;
                  i[12] = v9;
                }
                v18 >>= 1;
              }
              if ( (v18 & 1) == 0 )
              {
                i[11] = v10;
                i[10] = v8;
                i[9] = v9;
              }
              v18 >>= 1;
            }
            if ( (v18 & 1) == 0 )
            {
              i[8] = v10;
              i[7] = v8;
              i[6] = v9;
            }
            v18 >>= 1;
          }
          if ( (v18 & 1) == 0 )
          {
            i[5] = v10;
            i[4] = v8;
            i[3] = v9;
          }
          v18 >>= 1;
        }
        if ( (v18 & 1) == 0 )
        {
          i[2] = v10;
          i[1] = v8;
          *i = v9;
        }
      }
    }
  }
}

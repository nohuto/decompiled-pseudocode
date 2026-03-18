/*
 * XREFs of ?BltLnkPatMaskCopy32@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1C00AD8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy32(struct BLTINFO *a1, int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // edi
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v10; // ebx
  int v11; // r14d
  _DWORD *i; // r8
  char v13; // cl
  unsigned int v14; // edx
  int v15; // r9d
  unsigned int v16; // edx

  v4 = *((_DWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
LABEL_3:
  if ( v4 )
  {
    --v4;
    v10 = *((_DWORD *)a1 + 7);
    v11 = *((_DWORD *)a1 + 12);
    for ( i = (_DWORD *)(v8 + 4LL * *((int *)a1 + 14)); ; i += v15 )
    {
      if ( v10 <= 0 )
      {
        v8 += *((int *)a1 + 11);
        v6 += *((int *)a1 + 10);
        goto LABEL_3;
      }
      v13 = 0;
      v14 = a4 ^ *(unsigned __int8 *)(((__int64)v11 >> 3) + v6);
      v15 = 8 - (v11 & 7);
      if ( v15 > v10 )
      {
        v15 = v10;
        v13 = 8 - (v11 & 7) - v10;
      }
      v10 -= v15;
      v11 += v15;
      if ( v14 != 255 )
      {
        v16 = v14 >> v13;
        if ( v15 != 1 )
        {
          if ( v15 != 2 )
          {
            if ( v15 != 3 )
            {
              if ( v15 != 4 )
              {
                if ( v15 != 5 )
                {
                  if ( v15 != 6 )
                  {
                    if ( v15 != 7 )
                    {
                      if ( v15 != 8 )
                        continue;
                      if ( (v16 & 1) == 0 )
                        i[7] = a2;
                      v16 >>= 1;
                    }
                    if ( (v16 & 1) == 0 )
                      i[6] = a2;
                    v16 >>= 1;
                  }
                  if ( (v16 & 1) == 0 )
                    i[5] = a2;
                  v16 >>= 1;
                }
                if ( (v16 & 1) == 0 )
                  i[4] = a2;
                v16 >>= 1;
              }
              if ( (v16 & 1) == 0 )
                i[3] = a2;
              v16 >>= 1;
            }
            if ( (v16 & 1) == 0 )
              i[2] = a2;
            v16 >>= 1;
          }
          if ( (v16 & 1) == 0 )
            i[1] = a2;
          v16 >>= 1;
        }
        if ( (v16 & 1) == 0 )
          *i = a2;
      }
    }
  }
}

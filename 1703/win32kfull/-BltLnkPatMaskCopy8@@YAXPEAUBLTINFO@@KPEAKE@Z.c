/*
 * XREFs of ?BltLnkPatMaskCopy8@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1C02B7310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy8(struct BLTINFO *a1, char a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // edi
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v10; // ebx
  _BYTE *v11; // r8
  int v12; // r14d
  char v13; // cl
  unsigned int v14; // edx
  int v15; // r9d
  unsigned int v16; // edx

  v4 = *((_DWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
LABEL_40:
  if ( v4 )
  {
    --v4;
    v10 = *((_DWORD *)a1 + 7);
    v11 = (_BYTE *)(v8 + *((int *)a1 + 14));
    v12 = *((_DWORD *)a1 + 12);
    while ( 1 )
    {
      if ( v10 <= 0 )
      {
        v8 += *((int *)a1 + 11);
        v6 += *((int *)a1 + 10);
        goto LABEL_40;
      }
      v13 = 0;
      v14 = a4 ^ *(unsigned __int8 *)(((__int64)v12 >> 3) + v6);
      v15 = 8 - (v12 & 7);
      if ( v15 > v10 )
      {
        v15 = v10;
        v13 = 8 - (v12 & 7) - v10;
      }
      v10 -= v15;
      v12 += v15;
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
                        goto LABEL_37;
                      if ( (v16 & 1) == 0 )
                        v11[7] = a2;
                      v16 >>= 1;
                    }
                    if ( (v16 & 1) == 0 )
                      v11[6] = a2;
                    v16 >>= 1;
                  }
                  if ( (v16 & 1) == 0 )
                    v11[5] = a2;
                  v16 >>= 1;
                }
                if ( (v16 & 1) == 0 )
                  v11[4] = a2;
                v16 >>= 1;
              }
              if ( (v16 & 1) == 0 )
                v11[3] = a2;
              v16 >>= 1;
            }
            if ( (v16 & 1) == 0 )
              v11[2] = a2;
            v16 >>= 1;
          }
          if ( (v16 & 1) == 0 )
            v11[1] = a2;
          v16 >>= 1;
        }
        if ( (v16 & 1) == 0 )
          *v11 = a2;
      }
LABEL_37:
      v11 += v15;
    }
  }
}

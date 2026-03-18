/*
 * XREFs of ?BltLnkSrcCopyMsk32@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C00BD280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk32(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // rdi
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // r10d
  __int64 v10; // rbp
  char v11; // cl
  unsigned int v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // r14d
  int v16; // r12d
  unsigned int v17; // edx
  int v18; // r9d
  __int64 v19; // rax
  _DWORD *v20; // r11
  _DWORD *v21; // rbx
  unsigned __int8 v22; // [rsp+0h] [rbp-48h]
  int v23; // [rsp+4h] [rbp-44h]
  __int64 v24; // [rsp+8h] [rbp-40h]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *(_QWORD *)a2;
  v23 = *((_DWORD *)a2 + 6);
  v22 = *((_BYTE *)a2 + 36);
  v24 = v8;
  while ( v5 )
  {
    --v5;
    v15 = *((_DWORD *)v4 + 7);
    v18 = *((_DWORD *)v6 + 7);
    v20 = (_DWORD *)(v7 + 4LL * *((int *)v4 + 12));
    v21 = (_DWORD *)(v8 + 4LL * *((int *)v4 + 14));
    if ( v15 <= 0 )
      goto LABEL_42;
    do
    {
      v11 = 0;
      v12 = v22 ^ *(unsigned __int8 *)(((__int64)v18 >> 3) + v10);
      v13 = 8 - (v18 & 7);
      v14 = v23 - v18;
      if ( v13 > v15 )
      {
        v13 = v15;
        v11 = 8 - (v18 & 7) - v15;
      }
      if ( v13 > v14 )
      {
        v11 += v13 - v14;
        v13 = v23 - v18;
      }
      v15 -= v13;
      v16 = v13 + v18;
      if ( v12 )
      {
        v17 = v12 >> v11;
        if ( v13 != 1 )
        {
          if ( v13 != 2 )
          {
            if ( v13 != 3 )
            {
              if ( v13 != 4 )
              {
                if ( v13 != 5 )
                {
                  if ( v13 != 6 )
                  {
                    if ( v13 != 7 )
                    {
                      if ( v13 != 8 )
                        goto LABEL_38;
                      if ( (v17 & 1) != 0 )
                        v21[7] = v20[7];
                      v17 >>= 1;
                    }
                    if ( (v17 & 1) != 0 )
                      v21[6] = v20[6];
                    v17 >>= 1;
                  }
                  if ( (v17 & 1) != 0 )
                    v21[5] = v20[5];
                  v17 >>= 1;
                }
                if ( (v17 & 1) != 0 )
                  v21[4] = v20[4];
                v17 >>= 1;
              }
              if ( (v17 & 1) != 0 )
                v21[3] = v20[3];
              v17 >>= 1;
            }
            if ( (v17 & 1) != 0 )
              v21[2] = v20[2];
            v17 >>= 1;
          }
          if ( (v17 & 1) != 0 )
            v21[1] = v20[1];
          v17 >>= 1;
        }
        if ( (v17 & 1) != 0 )
          *v21 = *v20;
      }
LABEL_38:
      v18 = 0;
      v19 = 4LL * v13;
      v20 = (_DWORD *)((char *)v20 + v19);
      v21 = (_DWORD *)((char *)v21 + v19);
      if ( v16 != v23 )
        v18 = v16;
    }
    while ( v15 > 0 );
    v6 = a2;
    v4 = a1;
    v8 = v24;
LABEL_42:
    v8 += *((int *)v4 + 11);
    v7 += *((int *)v4 + 10);
    v24 = v8;
    if ( *((int *)v4 + 9) <= 0 )
    {
      if ( v9 )
      {
        --v9;
        v10 += *((int *)v6 + 8);
      }
      else
      {
        v9 = *((_DWORD *)v6 + 4) - 1;
        v10 = *((_QWORD *)v6 + 1) + v9 * *((_DWORD *)v6 + 8);
      }
    }
    else
    {
      ++v9;
      v10 += *((int *)v6 + 8);
      if ( v9 >= *((_DWORD *)v6 + 4) )
      {
        v10 = *((_QWORD *)v6 + 1);
        v9 = 0;
      }
    }
  }
}

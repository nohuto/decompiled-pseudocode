/*
 * XREFs of ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z @ 0x1C00C3050
 * Callers:
 *     vSrcOpaqCopyS8D32 @ 0x1C00129C0 (vSrcOpaqCopyS8D32.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00C2F9C (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall vGetBlendInfo(int a1, struct SURFACE *a2, int a3, struct _BLENDINFO *a4)
{
  __int64 v7; // rax
  __int64 v8; // r10
  int v9; // edx
  int v10; // ecx
  int v11; // r11d
  int v12; // r9d
  int v13; // r14d
  int v14; // esi
  int v15; // ebx
  int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  unsigned int v20; // eax
  unsigned __int8 *v21; // r8
  void *v22; // rax
  __int128 v23; // xmm1
  int v24; // ecx
  __int128 v25; // xmm1
  int *v26; // rdx
  _OWORD v27[4]; // [rsp+20h] [rbp-40h] BYREF

  memset(v27, 0, sizeof(v27));
  v7 = *((_QWORD *)a2 + 16);
  v8 = *((_QWORD *)a2 + 6);
  if ( !v7 )
    v7 = *(_QWORD *)(v8 + 1824);
  v9 = *(_DWORD *)(v7 + 24);
  if ( (v9 & 2) != 0 )
  {
    v26 = *(int **)(v7 + 120);
    v15 = v26[9] + v26[6] - 8;
    v16 = v26[10] + v26[7] - 8;
    v14 = v26[11] + v26[8] - 8;
    v11 = *v26;
    v12 = v26[1];
    v13 = v26[2];
LABEL_25:
    HIDWORD(v27[0]) = v16;
    DWORD1(v27[0]) = v15;
    LODWORD(v27[2]) = v13;
    *((_QWORD *)&v27[1] + 1) = __PAIR64__(v12, v11);
    DWORD1(v27[1]) = v14;
    goto LABEL_9;
  }
  v10 = 5;
  v11 = 31;
  if ( a1 != 2 )
  {
    v11 = 255;
    v10 = 8;
  }
  if ( (v9 & 4) != 0 )
  {
    v12 = v11 << v10;
    v15 = v10 - 8;
    v13 = v11 << v10 << v10;
    v16 = 2 * v10 - 8;
    v14 = 2 * v10 + v10 - 8;
    goto LABEL_25;
  }
  if ( (v9 & 8) != 0 )
  {
    LODWORD(v27[2]) = v11;
    v12 = v11 << v10;
    v13 = v11;
    HIDWORD(v27[1]) = v11 << v10;
    v11 = v11 << v10 << v10;
    v14 = v10 - 8;
    v15 = 2 * v10 + v10 - 8;
    DWORD2(v27[1]) = v11;
    v16 = 2 * v10 - 8;
    DWORD1(v27[0]) = v15;
    DWORD1(v27[1]) = v10 - 8;
    HIDWORD(v27[0]) = v16;
  }
  else
  {
    v13 = v27[2];
    v12 = HIDWORD(v27[1]);
    v11 = DWORD2(v27[1]);
    v14 = DWORD1(v27[1]);
    v16 = HIDWORD(v27[0]);
    v15 = DWORD1(v27[0]);
  }
LABEL_9:
  LOBYTE(v17) = 0;
  LODWORD(v27[0]) = 0;
  if ( v15 < 0 )
  {
    v17 = -v15;
    LOBYTE(v15) = 0;
    *(_QWORD *)&v27[0] = v17;
  }
  LOBYTE(v18) = 0;
  DWORD2(v27[0]) = 0;
  if ( v16 < 0 )
  {
    v18 = -v16;
    LOBYTE(v16) = 0;
    *((_QWORD *)&v27[0] + 1) = v18;
  }
  LOBYTE(v19) = 0;
  LODWORD(v27[1]) = 0;
  if ( v14 < 0 )
  {
    v19 = -v14;
    LOBYTE(v14) = 0;
    *(_QWORD *)&v27[1] = v19;
  }
  v20 = gulGamma;
  if ( gulGamma == 1200 )
  {
    v20 = *(_DWORD *)(v8 + 2464);
    if ( !v20 )
      v20 = 1200;
  }
  if ( v20 < 0x44C )
  {
    v21 = (unsigned __int8 *)&ajGammaCT_10;
    *((_QWORD *)&v27[3] + 1) = &ajGammaCT_10;
  }
  else
  {
    if ( v20 < 0x4B0 )
    {
      v21 = (unsigned __int8 *)&ajGammaCT_11;
      v22 = &ajGammaInvCT_11;
    }
    else if ( v20 >= 0x514 )
    {
      if ( v20 >= 0x578 )
      {
        if ( v20 >= 0x5DC )
        {
          if ( v20 >= 0x640 )
          {
            if ( v20 >= 0x6A4 )
            {
              if ( v20 >= 0x708 )
              {
                if ( v20 >= 0x76C )
                {
                  if ( v20 >= 0x7D0 )
                  {
                    if ( v20 >= 0x834 )
                    {
                      if ( v20 >= 0x898 )
                      {
                        v21 = (unsigned __int8 *)&ajGammaCT_22;
                        v22 = &ajGammaInvCT_22;
                      }
                      else
                      {
                        v21 = (unsigned __int8 *)&ajGammaCT_21;
                        v22 = &ajGammaInvCT_21;
                      }
                    }
                    else
                    {
                      v21 = (unsigned __int8 *)&ajGammaCT_20;
                      v22 = &ajGammaInvCT_20;
                    }
                  }
                  else
                  {
                    v21 = (unsigned __int8 *)&ajGammaCT_19;
                    v22 = &ajGammaInvCT_19;
                  }
                }
                else
                {
                  v21 = (unsigned __int8 *)&ajGammaCT_18;
                  v22 = &ajGammaInvCT_18;
                }
              }
              else
              {
                v21 = (unsigned __int8 *)&ajGammaCT_17;
                v22 = &ajGammaInvCT_17;
              }
            }
            else
            {
              v21 = (unsigned __int8 *)&ajGammaCT_16;
              v22 = &ajGammaInvCT_16;
            }
          }
          else
          {
            v21 = (unsigned __int8 *)&ajGammaCT_15;
            v22 = &ajGammaInvCT_15;
          }
        }
        else
        {
          v21 = (unsigned __int8 *)&ajGammaCT_14;
          v22 = &ajGammaInvCT_14;
        }
      }
      else
      {
        v21 = (unsigned __int8 *)&ajGammaCT_13;
        v22 = &ajGammaInvCT_13;
      }
    }
    else
    {
      v21 = (unsigned __int8 *)&ajGammaCT_12;
      v22 = &ajGammaInvCT_12;
    }
    *((_QWORD *)&v27[3] + 1) = v22;
  }
  v23 = v27[1];
  *(_QWORD *)&v27[3] = v21;
  DWORD1(v27[2]) = v21[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v11) << v17) >> v15)];
  DWORD2(v27[2]) = v21[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v12) << v18) >> v16)];
  v24 = v21[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v13) << v19) >> v14)];
  *(_OWORD *)a4 = v27[0];
  *((_OWORD *)a4 + 1) = v23;
  v25 = v27[3];
  HIDWORD(v27[2]) = v24;
  *((_OWORD *)a4 + 2) = v27[2];
  *((_OWORD *)a4 + 3) = v25;
}

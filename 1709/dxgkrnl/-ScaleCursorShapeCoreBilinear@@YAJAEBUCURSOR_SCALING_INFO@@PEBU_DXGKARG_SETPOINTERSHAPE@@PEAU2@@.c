/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C01B3C14
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C00B5500 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3)
{
  const struct CURSOR_SCALING_INFO *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  UINT v8; // r15d
  UINT v9; // r9d
  int v10; // r10d
  bool v11; // bp
  UINT v12; // ecx
  bool v13; // r14
  float v14; // xmm7_4
  float v15; // xmm6_4
  int v16; // r11d
  float v17; // xmm5_4
  __int64 v18; // r10
  int v19; // r15d
  float v20; // xmm4_4
  int v21; // esi
  UINT Pitch; // edx
  __int64 v23; // rcx
  char *v24; // r8
  __int64 v25; // r13
  char *v26; // rdx
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  int v33; // r12d
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // ecx
  UINT v39; // eax
  unsigned int v40; // ecx
  unsigned int v42; // [rsp+20h] [rbp-98h]
  int v43; // [rsp+24h] [rbp-94h]
  int v44; // [rsp+30h] [rbp-88h]
  int v45; // [rsp+38h] [rbp-80h]
  int v46; // [rsp+40h] [rbp-78h]
  UINT v47; // [rsp+48h] [rbp-70h]
  const struct CURSOR_SCALING_INFO *v48; // [rsp+C0h] [rbp+8h]
  UINT v49; // [rsp+C8h] [rbp+10h]
  unsigned int v50; // [rsp+D8h] [rbp+20h]

  v48 = a1;
  v5 = a1;
  if ( (a2->Flags.Value & 6) == 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 721LL;
    WdLogEvent5_WdAssertion(v6);
  }
  LOBYTE(a1) = (*(_BYTE *)&a2->Flags.0 & 4) == 0;
  if ( ((unsigned __int8)a1 & ((*(_BYTE *)&a3->Flags.0 & 2) == 0)) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 722LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)v5 + 5);
  v9 = *((_DWORD *)v5 + 4);
  v10 = 0;
  v11 = (a2->Flags.Value & 4) != 0;
  v12 = 4 * v9;
  v13 = (a3->Flags.Value & 4) != 0;
  v47 = v8;
  v43 = 0;
  v14 = (float)(int)a2->Width / (float)(int)v9;
  v15 = (float)(int)a2->Height / (float)(int)v8;
  if ( v8 )
  {
    do
    {
      v16 = 0;
      if ( v9 )
      {
        v17 = (float)v10 * v15;
        v18 = v12 * v10;
        v19 = (int)v17;
        do
        {
          v20 = (float)v16 * v14;
          v21 = (int)v20;
          if ( v19 == a2->Height - 1 )
            Pitch = 0;
          else
            Pitch = a2->Pitch;
          v49 = Pitch;
          v23 = Pitch;
          v24 = (char *)a2->pPixels + (unsigned int)(4 * v21) + (unsigned __int64)(v19 * a2->Pitch);
          v25 = a2->Width - 1 != v21 ? 4 : 0;
          v26 = &v24[Pitch + v25];
          v27 = v20 - (float)v21;
          v42 = *(_DWORD *)&v24[v23];
          v50 = *(_DWORD *)&v24[v25];
          v28 = v17 - (float)v19;
          v29 = (float)((float)(1.0 - v28) * v27) * 256.0;
          v30 = (float)((float)(1.0 - v28) * (float)(1.0 - v27)) * 256.0;
          v31 = (float)((float)(1.0 - v27) * v28) * 256.0;
          v46 = (int)v30;
          v45 = (int)v29;
          v32 = (float)(v28 * v27) * 256.0;
          v44 = (int)v31;
          v33 = (unsigned __int8)((unsigned __int16)(v46 * (unsigned __int8)*(_DWORD *)v24
                                                   + v45 * (unsigned __int8)v50
                                                   + v44 * (unsigned __int8)v42
                                                   + (int)v32 * (unsigned __int8)*(_DWORD *)v26) >> 8) | ((_WORD)v46 * (unsigned __int8)v24[1] + (_WORD)v45 * (unsigned __int8)v24[v25 + 1] + (_WORD)v44 * (unsigned __int8)v24[v49 + 1] + (unsigned __int16)(int)v32 * (unsigned __int8)v26[1]) & 0xFF00 | (((int)v30 * (unsigned __int8)v24[2] + (int)v29 * (unsigned __int8)v24[v25 + 2] + (int)v31 * (unsigned __int8)v24[v23 + 2] + (int)v32 * (unsigned __int8)v26[2]) << 8) & 0xFF0000;
          if ( v13 )
          {
            v34 = v33 | ((unsigned __int8)-((((unsigned __int16)(int)v30 * (unsigned __int8)v24[3]
                                            + (unsigned __int16)(int)v29 * (unsigned __int8)v24[v25 + 3]
                                            + (unsigned __int16)(int)v31 * (unsigned __int8)v24[v49 + 3]
                                            + (unsigned __int16)(int)v32 * (unsigned __int8)v26[3]) & 0x8000) != 0) << 24);
            if ( v34 >= 0x1000000 )
            {
              v35 = v33 & 0xFFFF00FF | ((unsigned __int8)-((((unsigned __int16)(int)v30 * (unsigned __int8)v24[3]
                                                           + (unsigned __int16)(int)v29 * (unsigned __int8)v24[v25 + 3]
                                                           + (unsigned __int16)(int)v31 * (unsigned __int8)v24[v49 + 3]
                                                           + (unsigned __int16)(int)v32 * (unsigned __int8)v26[3]) & 0x8000) != 0) << 24) | ((unsigned __int8)-(((*(_DWORD *)v26 & (*(_DWORD *)v26 >> 8) | v42 & (v42 >> 8) | v50 & (v50 >> 8) | *(_DWORD *)v24 & (*(_DWORD *)v24 >> 8)) & 0xFFFF0000) != 0) << 8);
              v34 = ((unsigned __int8)(v35 ^ BYTE1(v35)) ^ v35 ^ (((unsigned __int8)(v35 ^ BYTE1(v35)) ^ v35) << 16)) & 0xFF0000 ^ (unsigned __int8)(v35 ^ BYTE1(v35)) ^ v35;
            }
          }
          else
          {
            if ( v11 )
              v36 = (int)v30 * (255 - (unsigned __int8)v24[3])
                  + (int)v29 * (255 - (unsigned __int8)v24[v25 + 3])
                  + (int)v31 * (255 - (unsigned __int8)v24[v49 + 3])
                  + (int)v32 * (255 - (unsigned __int8)v26[3]);
            else
              v36 = (int)v30 * (unsigned __int8)v24[3]
                  + (int)v29 * (unsigned __int8)v24[v25 + 3]
                  + (int)v31 * (unsigned __int8)v24[v49 + 3]
                  + (int)v32 * (unsigned __int8)v26[3];
            v34 = v33 | (v36 << 16) & 0xFF000000;
          }
          v37 = (unsigned int)(4 * v16++);
          *(_DWORD *)((char *)a3->pPixels + v18 + v37) = v34;
        }
        while ( v16 < v9 );
        v10 = v43;
        v8 = v47;
        v12 = 4 * v9;
      }
      v43 = ++v10;
    }
    while ( v10 < v8 );
    v5 = v48;
  }
  a3->VidPnSourceId = a2->VidPnSourceId;
  a3->Pitch = v12;
  v38 = *((_DWORD *)v5 + 2);
  a3->Width = v9;
  a3->Height = v8;
  v39 = (v38 + *(_DWORD *)v5 * a2->XHot - 1) / v38;
  v40 = *((_DWORD *)v5 + 3);
  a3->XHot = v39;
  a3->YHot = (v40 + *((_DWORD *)v5 + 1) * a2->YHot - 1) / v40;
  return 0LL;
}

/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C019D16C
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C009F778 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        __int64 a4)
{
  const struct CURSOR_SCALING_INFO *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  UINT v9; // r12d
  UINT v10; // r10d
  UINT v11; // r11d
  bool v12; // bp
  UINT v13; // edx
  bool v14; // r15
  float v15; // xmm7_4
  float v16; // xmm6_4
  unsigned int v17; // eax
  int v18; // r14d
  int v19; // ecx
  __int64 v20; // r11
  float v21; // xmm5_4
  int v22; // r12d
  float v23; // xmm4_4
  int v24; // esi
  UINT Pitch; // r8d
  char *v26; // r9
  __int64 v27; // r13
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // rdx
  unsigned int v38; // [rsp+20h] [rbp-B8h]
  UINT v39; // [rsp+28h] [rbp-B0h]
  char *v40; // [rsp+30h] [rbp-A8h]
  int v41; // [rsp+38h] [rbp-A0h]
  int v42; // [rsp+40h] [rbp-98h]
  int v43; // [rsp+50h] [rbp-88h]
  int v44; // [rsp+58h] [rbp-80h]
  UINT v45; // [rsp+60h] [rbp-78h]
  const struct CURSOR_SCALING_INFO *v46; // [rsp+E0h] [rbp+8h]
  unsigned int v47; // [rsp+E8h] [rbp+10h]
  unsigned int v48; // [rsp+F8h] [rbp+20h]

  v46 = a1;
  v6 = a1;
  if ( (a2->Flags.Value & 6) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 721LL;
    WdLogEvent5_WdAssertion(v7);
  }
  LOBYTE(a1) = (*(_BYTE *)&a2->Flags.0 & 4) == 0;
  if ( ((unsigned __int8)a1 & ((*(_BYTE *)&a3->Flags.0 & 2) == 0)) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 722LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_DWORD *)v6 + 5);
  v10 = *((_DWORD *)v6 + 4);
  v11 = 0;
  v12 = (a2->Flags.Value & 4) != 0;
  v13 = 4 * v10;
  v14 = (a3->Flags.Value & 4) != 0;
  v45 = v9;
  v39 = 0;
  v15 = (float)(int)a2->Width / (float)(int)v10;
  v16 = (float)(int)a2->Height / (float)(int)v9;
  if ( v9 )
  {
    v17 = v47;
    do
    {
      v18 = 0;
      if ( v10 )
      {
        v19 = v11;
        v20 = v13 * v11;
        v21 = (float)v19 * v16;
        v22 = (int)v21;
        do
        {
          v23 = (float)v18 * v15;
          v24 = (int)v23;
          if ( v22 == a2->Height - 1 )
            Pitch = 0;
          else
            Pitch = a2->Pitch;
          v26 = (char *)a2->pPixels + (unsigned int)(4 * v24) + (unsigned __int64)(v22 * a2->Pitch);
          v27 = a2->Width - 1 != v24 ? 4 : 0;
          v40 = &v26[Pitch + v27];
          v28 = v23 - (float)v24;
          v29 = v21 - (float)v22;
          v30 = (float)((float)(1.0 - v29) * v28) * 256.0;
          v31 = (float)((float)(1.0 - v29) * (float)(1.0 - v28)) * 256.0;
          v32 = (float)((float)(1.0 - v28) * v29) * 256.0;
          v43 = (int)v31;
          v42 = (int)v30;
          v33 = (float)(v29 * v28) * 256.0;
          v41 = (int)v32;
          v44 = (int)v33;
          v38 = *(_DWORD *)&v26[Pitch];
          v48 = *(_DWORD *)&v26[v27];
          v34 = v17 & 0xFF000000 | (unsigned __int8)((unsigned __int16)(v44 * (unsigned __int8)*(_DWORD *)v40
                                                                      + v41 * (unsigned __int8)v38
                                                                      + v42 * (unsigned __int8)v48
                                                                      + (int)v31 * (unsigned __int8)*(_DWORD *)v26) >> 8) | ((_WORD)v43 * (unsigned __int8)v26[1] + (_WORD)v42 * (unsigned __int8)v26[v27 + 1] + (_WORD)v41 * (unsigned __int8)v26[Pitch + 1] + (unsigned __int16)(int)v33 * (unsigned __int8)v40[1]) & 0xFF00 | ((v43 * (unsigned __int8)v26[2] + v42 * (unsigned __int8)v26[v27 + 2] + v41 * (unsigned __int8)v26[Pitch + 2] + v44 * (unsigned __int8)v40[2]) << 8) & 0xFF0000;
          if ( v14 )
          {
            v17 = (unsigned __int8)((unsigned __int16)(v44 * (unsigned __int8)*(_DWORD *)v40
                                                     + v41 * (unsigned __int8)v38
                                                     + v42 * (unsigned __int8)v48
                                                     + (int)v31 * (unsigned __int8)*(_DWORD *)v26) >> 8) | ((_WORD)v43 * (unsigned __int8)v26[1] + (_WORD)v42 * (unsigned __int8)v26[v27 + 1] + (_WORD)v41 * (unsigned __int8)v26[Pitch + 1] + (unsigned __int16)(int)v33 * (unsigned __int8)v40[1]) & 0xFF00 | ((v43 * (unsigned __int8)v26[2] + v42 * (unsigned __int8)v26[v27 + 2] + v41 * (unsigned __int8)v26[Pitch + 2] + v44 * (unsigned __int8)v40[2]) << 8) & 0xFF0000 | ((unsigned __int8)-((((unsigned __int16)(int)v31 * (unsigned __int8)v26[3] + (unsigned __int16)(int)v30 * (unsigned __int8)v26[v27 + 3] + (unsigned __int16)(int)v32 * (unsigned __int8)v26[Pitch + 3] + (unsigned __int16)(int)v33 * (unsigned __int8)v40[3]) & 0x8000) != 0) << 24);
            if ( v17 >= 0x1000000 )
            {
              v35 = v34 & 0xFF00FF | ((unsigned __int8)-((((unsigned __int16)(int)v31 * (unsigned __int8)v26[3]
                                                         + (unsigned __int16)(int)v30 * (unsigned __int8)v26[v27 + 3]
                                                         + (unsigned __int16)(int)v32 * (unsigned __int8)v26[Pitch + 3]
                                                         + (unsigned __int16)(int)v33 * (unsigned __int8)v40[3]) & 0x8000) != 0) << 24) | ((unsigned __int8)-((*(_DWORD *)v40 & (*(_DWORD *)v40 >> 8) & 0xFF0000 | v38 & (v38 >> 8) & 0xFF0000 | (v48 & (v48 >> 8) | *(_DWORD *)v26 & (*(_DWORD *)v26 >> 8)) & 0xFF0000) != 0) << 8);
              v17 = ((unsigned __int8)(v35 ^ BYTE1(v35)) ^ v35 ^ (((unsigned __int8)(v35 ^ BYTE1(v35)) ^ v35) << 16)) & 0xFF0000 ^ (unsigned __int8)(v35 ^ BYTE1(v35)) ^ v35;
            }
          }
          else if ( v12 )
          {
            v17 = (((int)v31 * (255 - (unsigned __int8)v26[3])
                  + (int)v30 * (255 - (unsigned __int8)v26[v27 + 3])
                  + (int)v32 * (255 - (unsigned __int8)v26[Pitch + 3])
                  + (int)v33 * (255 - (unsigned __int8)v40[3])) << 16) ^ (v34 ^ (((int)v31
                                                                                * (255 - (unsigned __int8)v26[3])
                                                                                + (int)v30
                                                                                * (255 - (unsigned __int8)v26[v27 + 3])
                                                                                + (int)v32
                                                                                * (255 - (unsigned __int8)v26[Pitch + 3])
                                                                                + (int)v33
                                                                                * (255 - (unsigned __int8)v40[3])) << 16)) & 0xFFFFFF;
          }
          else
          {
            v17 = (((int)v31 * (unsigned __int8)v26[3]
                  + (int)v30 * (unsigned __int8)v26[v27 + 3]
                  + (int)v32 * (unsigned __int8)v26[Pitch + 3]
                  + (int)v33 * (unsigned __int8)v40[3]) << 16) ^ (v34 ^ ((v43 * (unsigned __int8)v26[3]
                                                                        + v42 * (unsigned __int8)v26[v27 + 3]
                                                                        + v41 * (unsigned __int8)v26[Pitch + 3]
                                                                        + (int)v33 * (unsigned __int8)v40[3]) << 16)) & 0xFFFFFF;
          }
          v36 = (unsigned int)(4 * v18++);
          *(_DWORD *)((char *)a3->pPixels + v20 + v36) = v17;
        }
        while ( v18 < v10 );
        v11 = v39;
        v9 = v45;
        v13 = 4 * v10;
      }
      v39 = ++v11;
    }
    while ( v11 < v9 );
    v6 = v46;
  }
  a3->VidPnSourceId = a2->VidPnSourceId;
  a3->Pitch = v13;
  a3->Width = v10;
  a3->Height = v9;
  a3->XHot = (*((_DWORD *)v6 + 2) + *(_DWORD *)v6 * a2->XHot - 1) / *((_DWORD *)v6 + 2);
  a3->YHot = (*((_DWORD *)v6 + 3) + *((_DWORD *)v6 + 1) * a2->YHot - 1) / *((_DWORD *)v6 + 3);
  return 0LL;
}

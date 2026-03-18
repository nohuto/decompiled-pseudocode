/*
 * XREFs of ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C01724B0
 * Callers:
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0171718 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkpGetBilinearLineFromSource(
        unsigned __int8 *a1,
        int a2,
        int a3,
        struct _PIXEL *a4,
        struct _UFIXPOINT_PIXEL *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // esi
  unsigned __int8 *v10; // r10
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r15
  int v14; // r8d
  struct _UFIXPOINT_PIXEL *v15; // r11
  unsigned __int8 *v16; // rdi
  unsigned __int8 *v17; // r14
  unsigned __int8 *v18; // r12
  int v19; // esi
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  bool v25; // cc
  unsigned __int8 *v26; // rax
  int v27; // r8d
  unsigned __int8 *v28; // rdx
  int v29; // ebp
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // r11d
  int v34; // r12d
  int v35; // edx
  int v36; // ecx
  int v37; // edi
  int v38; // ebp
  int v39; // r14d
  int v40; // ecx
  struct _UFIXPOINT_PIXEL *v41; // rsi
  int v42; // ecx
  int v43; // edx
  int v44; // eax
  int v45; // edx
  int v46; // eax
  __int64 v47; // [rsp+0h] [rbp-48h]
  int v48; // [rsp+58h] [rbp+10h]
  int v49; // [rsp+80h] [rbp+38h]

  v8 = a7;
  v10 = &a1[a7 * a2];
  if ( a6 == a3 )
  {
    if ( a7 < a8 )
    {
      v11 = (_DWORD *)((char *)a5 + 8);
      v12 = (unsigned int)(a8 - a7);
      do
      {
        if ( a4 )
        {
          *(_DWORD *)a4 = *(_DWORD *)v10;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          v11[1] = v10[3] << 16;
          *v11 = v10[2] << 16;
          *(v11 - 1) = v10[1] << 16;
          *(v11 - 2) = *v10 << 16;
          v11 += 4;
        }
        v10 += a2;
        --v12;
      }
      while ( v12 );
    }
    return;
  }
  v13 = a2;
  v14 = a7 * a6 % a3;
  if ( a6 > a3 )
  {
    v15 = a5;
    if ( a7 < a8 )
    {
      v16 = &v10[-a2 + 2];
      do
      {
        v49 = v8;
        v17 = v16;
        if ( v14 && v14 < a3 )
        {
          v18 = &v16[v13];
          v19 = (unsigned __int16)((v14 << 16) / (unsigned int)a3);
          v20 = 0x10000 - v19;
          v21 = v19 * v16[1] + (0x10000 - v19) * v16[v13 + 1];
          if ( !a4 )
          {
            *((_DWORD *)v15 + 3) = v21;
            *((_DWORD *)v15 + 2) = v20 * *v18 + v19 * *v16;
            *((_DWORD *)v15 + 1) = v19 * *(v16 - 1) + v20 * v16[v13 - 1];
            v23 = *(v16 - 2);
            v16 += v13;
            *(_DWORD *)v15 = v19 * v23 + v20 * *v10;
LABEL_20:
            v15 = (struct _UFIXPOINT_PIXEL *)((char *)v15 + 16);
            goto LABEL_21;
          }
          *((_BYTE *)a4 + 3) = (unsigned int)(v21 + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (v20 * *v18 + 0x8000 + v19 * (unsigned int)*v16) >> 16;
          *((_BYTE *)a4 + 1) = (v19 * *(v16 - 1) + 0x8000 + v20 * (unsigned int)v16[v13 - 1]) >> 16;
          v22 = *(v16 - 2);
          v16 += v13;
          *(_BYTE *)a4 = (v19 * v22 + v20 * (unsigned int)*v10 + 0x8000) >> 16;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          if ( !a4 )
          {
            *((_DWORD *)v15 + 3) = v16[v13 + 1] << 16;
            *((_DWORD *)v15 + 2) = v16[v13] << 16;
            v24 = v16[v13 - 1];
            v16 += v13;
            *((_DWORD *)v15 + 1) = v24 << 16;
            *(_DWORD *)v15 = *v10 << 16;
            goto LABEL_20;
          }
          v16 += v13;
          *(_DWORD *)a4 = *(_DWORD *)v10;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
LABEL_21:
        v25 = v14 < a3;
        v14 -= a3;
        if ( v25 )
          v14 += a6;
        if ( v14 >= a3 )
          v16 = v17;
        v8 = v49 + 1;
        if ( v14 >= a3 )
          v8 = v49;
        v26 = v10;
        v10 += v13;
        if ( v14 >= a3 )
          v10 = v26;
      }
      while ( v8 < a8 );
    }
    if ( !v14 )
      return;
    v27 = (unsigned __int16)((v14 << 16) / a3);
    v28 = &v10[-v13];
    v29 = 0x10000 - v27;
    v30 = (0x10000 - v27) * v10[3] + v27 * v10[-v13 + 3];
    if ( !a4 )
    {
      *((_DWORD *)v15 + 3) = v30;
      *((_DWORD *)v15 + 2) = v27 * v28[2] + v29 * v10[2];
      *((_DWORD *)v15 + 1) = v27 * v28[1] + v29 * v10[1];
      *(_DWORD *)v15 = v27 * *v28 + v29 * *v10;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v30 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (v27 * v28[2] + 0x8000 + v29 * (unsigned int)v10[2]) >> 16;
    *((_BYTE *)a4 + 1) = (v27 * v28[1] + 0x8000 + v29 * (unsigned int)v10[1]) >> 16;
    v31 = v27 * *v28;
    v32 = v29 * *v10 + 0x8000;
LABEL_51:
    *(_BYTE *)a4 = (unsigned int)(v31 + v32) >> 16;
    return;
  }
  v33 = 0;
  v34 = v14 << 16;
  v35 = (unsigned __int16)((a6 << 16) / a3);
  v48 = v35;
  if ( v14 <= 0 )
  {
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
  }
  else
  {
    v35 = (unsigned __int16)((a6 << 16) / a3);
    v36 = (unsigned __int16)(v34 / a3);
    v37 = v36 * v10[-v13 + 3];
    v38 = v36 * v10[-v13 + 2];
    v39 = v36 * v10[-v13 + 1];
    v33 = v36 * v10[-v13];
    v40 = v33;
  }
  if ( a7 >= a8 )
  {
    v41 = a5;
  }
  else
  {
    v41 = a5;
    v47 = (unsigned int)(a8 - a7);
    do
    {
      v34 += a6 << 16;
      v14 += a6;
      if ( v14 >= a3 )
      {
        v34 -= a3 << 16;
        v14 -= a3;
        v42 = (unsigned __int16)(v34 / a3);
        v43 = v48 - v42;
        v44 = (v48 - v42) * v10[3];
        if ( a4 )
        {
          *((_BYTE *)a4 + 3) = (unsigned int)(v37 + v44 + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (v38 + v43 * (unsigned int)v10[2] + 0x8000) >> 16;
          *((_BYTE *)a4 + 1) = (v39 + v43 * (unsigned int)v10[1] + 0x8000) >> 16;
          *(_BYTE *)a4 = (v43 * (unsigned int)*v10 + v33 + 0x8000) >> 16;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
          v42 = (unsigned __int16)(v34 / a3);
        }
        else
        {
          *((_DWORD *)v41 + 3) = v37 + v44;
          *((_DWORD *)v41 + 2) = v38 + v43 * v10[2];
          *((_DWORD *)v41 + 1) = v39 + v43 * v10[1];
          *(_DWORD *)v41 = v33 + v43 * *v10;
          v41 = (struct _UFIXPOINT_PIXEL *)((char *)v41 + 16);
        }
        v35 = (unsigned __int16)((a6 << 16) / a3);
        v37 = v42 * v10[3];
        v38 = v42 * v10[2];
        v39 = v42 * v10[1];
        v40 = (unsigned __int16)(v34 / a3) * *v10;
      }
      else
      {
        v37 += v35 * v10[3];
        v38 += v35 * v10[2];
        v39 += v35 * v10[1];
        v40 += v35 * *v10;
      }
      v10 += v13;
      v33 = v40;
      --v47;
    }
    while ( v47 );
  }
  if ( v14 )
  {
    v45 = (unsigned __int16)(((a3 - v14) << 16) / a3);
    v46 = v45 * v10[3];
    if ( !a4 )
    {
      *((_DWORD *)v41 + 3) = v37 + v46;
      *((_DWORD *)v41 + 2) = v38 + v45 * v10[2];
      *((_DWORD *)v41 + 1) = v39 + v45 * v10[1];
      *(_DWORD *)v41 = v33 + v45 * *v10;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v37 + v46 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (v38 + v45 * (unsigned int)v10[2] + 0x8000) >> 16;
    *((_BYTE *)a4 + 1) = (v39 + v45 * (unsigned int)v10[1] + 0x8000) >> 16;
    v32 = v33 + 0x8000;
    v31 = v45 * *v10;
    goto LABEL_51;
  }
}

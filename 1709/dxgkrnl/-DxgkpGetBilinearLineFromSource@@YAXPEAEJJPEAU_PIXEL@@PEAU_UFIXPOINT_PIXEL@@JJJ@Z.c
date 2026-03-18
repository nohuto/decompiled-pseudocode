/*
 * XREFs of ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C0104BD0
 * Callers:
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00EC610 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
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
  int v8; // edi
  int v10; // r8d
  __int64 v12; // r12
  unsigned __int8 *v13; // r11
  int v14; // ecx
  int v15; // ecx
  struct _UFIXPOINT_PIXEL *v16; // rbx
  int v17; // eax
  int v18; // ebp
  unsigned __int8 *v19; // r8
  int v20; // r9d
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // r8d
  unsigned __int8 *v27; // rdx
  int v28; // r15d
  int v29; // eax
  int v30; // ecx
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // ecx
  int v35; // r13d
  int v36; // edx
  int v37; // r9d
  int v38; // eax
  int v39; // ebx
  int v40; // esi
  int v41; // ebp
  int v42; // r15d
  int v43; // edx
  int v44; // r12d
  int v45; // edi
  struct _UFIXPOINT_PIXEL *v46; // r8
  int v47; // edi
  int v48; // edx
  __int64 v49; // [rsp+50h] [rbp+8h]

  v8 = a7;
  v10 = a6;
  v12 = a2;
  v13 = &a1[a7 * a2];
  if ( a6 == a3 )
  {
    if ( a7 < a8 )
    {
      v31 = (_DWORD *)((char *)a5 + 8);
      v32 = (unsigned int)(a8 - a7);
      do
      {
        if ( a4 )
        {
          *(_DWORD *)a4 = *(_DWORD *)v13;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          v31[1] = v13[3] << 16;
          *v31 = v13[2] << 16;
          *(v31 - 1) = v13[1] << 16;
          *(v31 - 2) = *v13 << 16;
          v31 += 4;
        }
        v13 += v12;
        --v32;
      }
      while ( v32 );
    }
  }
  else if ( a6 <= a3 )
  {
    v34 = a6 << 16;
    v35 = (unsigned __int16)((a6 << 16) / a3);
    v36 = a7 * a6 % a3;
    v37 = v36;
    if ( v36 <= 0 )
    {
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
    }
    else
    {
      v38 = (v36 << 16) / a3;
      v39 = (unsigned __int16)v38 * v13[-v12 + 3];
      v40 = (unsigned __int16)v38 * v13[-v12 + 2];
      v41 = (unsigned __int16)v38 * v13[-v12 + 1];
      v42 = (unsigned __int16)v38 * v13[-v12];
    }
    if ( a7 >= a8 )
    {
      v46 = a5;
    }
    else
    {
      v43 = a3 << 16;
      v44 = v37 << 16;
      v45 = a2;
      v49 = (unsigned int)(a8 - a7);
      v46 = a5;
      do
      {
        v37 += a6;
        v44 += v34;
        if ( v37 >= a3 )
        {
          v44 -= v43;
          v37 -= a3;
          v47 = (unsigned __int16)(v44 / a3);
          if ( a4 )
          {
            *((_BYTE *)a4 + 3) = (v39 + (v35 - v47) * (unsigned int)v13[3] + 0x8000) >> 16;
            *((_BYTE *)a4 + 2) = (v40 + (v35 - v47) * (unsigned int)v13[2] + 0x8000) >> 16;
            *((_BYTE *)a4 + 1) = (v41 + (v35 - v47) * (unsigned int)v13[1] + 0x8000) >> 16;
            *(_BYTE *)a4 = ((v35 - v47) * (unsigned int)*v13 + v42 + 0x8000) >> 16;
            a4 = (struct _PIXEL *)((char *)a4 + 4);
          }
          else
          {
            *((_DWORD *)v46 + 3) = v39 + (v35 - v47) * v13[3];
            *((_DWORD *)v46 + 2) = v40 + (v35 - v47) * v13[2];
            *((_DWORD *)v46 + 1) = v41 + (v35 - v47) * v13[1];
            *(_DWORD *)v46 = v42 + (v35 - v47) * *v13;
            v46 = (struct _UFIXPOINT_PIXEL *)((char *)v46 + 16);
          }
          v34 = a6 << 16;
          v43 = a3 << 16;
          v39 = v47 * v13[3];
          v40 = v47 * v13[2];
          v41 = v47 * v13[1];
          v42 = v47 * *v13;
          v45 = a2;
        }
        else
        {
          v39 += v35 * v13[3];
          v40 += v35 * v13[2];
          v41 += v35 * v13[1];
          v42 += v35 * *v13;
        }
        v13 += v45;
        --v49;
      }
      while ( v49 );
    }
    if ( v37 )
    {
      v48 = (unsigned __int16)(((a3 - v37) << 16) / a3);
      if ( a4 )
      {
        *((_BYTE *)a4 + 3) = (v39 + v48 * (unsigned int)v13[3] + 0x8000) >> 16;
        *((_BYTE *)a4 + 2) = (v40 + v48 * (unsigned int)v13[2] + 0x8000) >> 16;
        *((_BYTE *)a4 + 1) = (v41 + v48 * (unsigned int)v13[1] + 0x8000) >> 16;
        *(_BYTE *)a4 = (v48 * (unsigned int)*v13 + v42 + 0x8000) >> 16;
      }
      else
      {
        *((_DWORD *)v46 + 3) = v39 + v48 * v13[3];
        *((_DWORD *)v46 + 2) = v40 + v48 * v13[2];
        *((_DWORD *)v46 + 1) = v41 + v48 * v13[1];
        *(_DWORD *)v46 = v42 + v48 * *v13;
      }
    }
  }
  else
  {
    v14 = a7 * a6;
    if ( a3 == 1024 )
      v15 = v14 % 1024;
    else
      v15 = v14 % a3;
    v16 = a5;
    if ( a7 < a8 )
    {
      do
      {
        if ( v15 && v15 < a3 )
        {
          if ( a3 == 1024 )
            LOWORD(v17) = (_WORD)v15 << 6;
          else
            v17 = (v15 << 16) / (unsigned int)a3;
          v18 = (unsigned __int16)v17;
          v19 = &v13[-v12];
          v20 = 0x10000 - (unsigned __int16)v17;
          v21 = v20 * v13[3];
          v22 = v18 * v13[-v12 + 3];
          if ( a4 )
          {
            *((_BYTE *)a4 + 3) = (unsigned int)(v21 + 0x8000 + v22) >> 16;
            *((_BYTE *)a4 + 2) = (v20 * v13[2] + 0x8000 + v18 * (unsigned int)v19[2]) >> 16;
            *((_BYTE *)a4 + 1) = (v20 * v13[1] + 0x8000 + v18 * (unsigned int)v19[1]) >> 16;
            v33 = *v19;
            v10 = a6;
            *(_BYTE *)a4 = (v18 * v33 + v20 * (unsigned int)*v13 + 0x8000) >> 16;
            a4 = (struct _PIXEL *)((char *)a4 + 4);
            goto LABEL_13;
          }
          *((_DWORD *)v16 + 3) = v21 + v22;
          *((_DWORD *)v16 + 2) = v20 * v13[2] + v18 * v19[2];
          *((_DWORD *)v16 + 1) = v20 * v13[1] + v18 * v19[1];
          v23 = *v19;
          v10 = a6;
          *(_DWORD *)v16 = v18 * v23 + v20 * *v13;
        }
        else
        {
          if ( a4 )
          {
            *(_DWORD *)a4 = *(_DWORD *)v13;
            a4 = (struct _PIXEL *)((char *)a4 + 4);
            goto LABEL_13;
          }
          *((_DWORD *)v16 + 3) = v13[3] << 16;
          *((_DWORD *)v16 + 2) = v13[2] << 16;
          *((_DWORD *)v16 + 1) = v13[1] << 16;
          *(_DWORD *)v16 = *v13 << 16;
        }
        v16 = (struct _UFIXPOINT_PIXEL *)((char *)v16 + 16);
LABEL_13:
        if ( v15 >= a3 )
          v15 -= a3;
        else
          v15 += v10 - a3;
        if ( v15 < a3 )
        {
          v13 += v12;
          ++v8;
        }
      }
      while ( v8 < a8 );
    }
    if ( v15 )
    {
      v24 = v15 << 16;
      if ( a3 == 1024 )
        v25 = v24 / 1024;
      else
        v25 = v24 / a3;
      v26 = (unsigned __int16)v25;
      v27 = &v13[-v12];
      v28 = 0x10000 - (unsigned __int16)v25;
      v29 = v28 * v13[3];
      v30 = v26 * v13[-v12 + 3];
      if ( a4 )
      {
        *((_BYTE *)a4 + 3) = (unsigned int)(v29 + 0x8000 + v30) >> 16;
        *((_BYTE *)a4 + 2) = (v28 * v13[2] + 0x8000 + v26 * (unsigned int)v27[2]) >> 16;
        *((_BYTE *)a4 + 1) = (v28 * v13[1] + 0x8000 + v26 * (unsigned int)v27[1]) >> 16;
        *(_BYTE *)a4 = (v26 * *v27 + v28 * (unsigned int)*v13 + 0x8000) >> 16;
      }
      else
      {
        *((_DWORD *)v16 + 3) = v29 + v30;
        *((_DWORD *)v16 + 2) = v28 * v13[2] + v26 * v27[2];
        *((_DWORD *)v16 + 1) = v28 * v13[1] + v26 * v27[1];
        *(_DWORD *)v16 = v26 * *v27 + v28 * *v13;
      }
    }
  }
}

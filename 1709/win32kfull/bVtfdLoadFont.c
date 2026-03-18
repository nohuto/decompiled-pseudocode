/*
 * XREFs of bVtfdLoadFont @ 0x1C0238704
 * Callers:
 *     vtfdLoadFontFile @ 0x1C0239114 (vtfdLoadFontFile.c)
 * Callees:
 *     bGetFntResource @ 0x1C0237D34 (bGetFntResource.c)
 *     bInitWinResData @ 0x1C0237E44 (bInitWinResData.c)
 *     bVerifyVTFD @ 0x1C0238464 (bVerifyVTFD.c)
 *     cjVTFDIFIMETRICS @ 0x1C0238984 (cjVTFDIFIMETRICS.c)
 *     iDefaultFace @ 0x1C0238A7C (iDefaultFace.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0238AAC (vVtfdFill_IFIMetrics.c)
 *     pcpComputeGlyphset @ 0x1C02B2044 (pcpComputeGlyphset.c)
 */

__int64 __fastcall bVtfdLoadFont(__int64 a1, unsigned int a2, __int64 a3, int a4, PVOID *a5)
{
  _BYTE *v6; // r15
  unsigned int v7; // edi
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  ULONG v12; // r12d
  unsigned int v13; // eax
  int v14; // eax
  ULONG v15; // ecx
  int v16; // eax
  _DWORD *v17; // rax
  int v18; // ecx
  unsigned int v19; // r13d
  unsigned int *v20; // r12
  __int64 v21; // xmm1_8
  _QWORD *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v28; // [rsp+20h] [rbp-50h]
  ULONG v29; // [rsp+24h] [rbp-4Ch]
  __int128 v30; // [rsp+28h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-38h]
  __int64 v32[3]; // [rsp+40h] [rbp-30h] BYREF
  int v33; // [rsp+58h] [rbp-18h]
  int v36; // [rsp+C8h] [rbp+58h]
  unsigned int v37; // [rsp+D0h] [rbp+60h]

  v36 = a4;
  v6 = 0LL;
  v7 = 0;
  v30 = 0uLL;
  v31 = 0LL;
  *a5 = 0LL;
  v28 = 0;
  if ( a4 == 2 )
  {
    if ( !(unsigned int)bInitWinResData(a1, a2, (__int64)v32) )
      return v7;
    v9 = v33;
    a4 = 2;
  }
  else
  {
    v9 = 1;
    *(_QWORD *)&v30 = a1;
    v33 = 1;
    v6 = (_BYTE *)a1;
    DWORD2(v30) = 0;
    HIDWORD(v30) = a2;
    v31 = 0LL;
  }
  v10 = 0;
  v11 = 48 * v9 + 40;
  v37 = 0;
  v12 = v11;
  if ( v9 )
  {
    while ( 1 )
    {
      v29 = v12;
      if ( a4 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v32, v10, (__int64)&v30) )
          return v7;
        v6 = (_BYTE *)v30;
        v9 = v33;
      }
      v13 = v28 + HIDWORD(v30);
      if ( v28 + HIDWORD(v30) < v28 )
        break;
      v28 += HIDWORD(v30);
      if ( v13 > a2 )
        break;
      if ( !(unsigned int)bVerifyVTFD((unsigned __int16 **)&v30) )
        break;
      v14 = cjVTFDIFIMETRICS(v6);
      if ( !v14 )
        break;
      v15 = v14 + v12;
      v16 = -1;
      if ( v15 >= v12 )
        v16 = v15;
      v12 = v16;
      if ( v15 < v29 || v16 - v11 > a2 )
        break;
      a4 = v36;
      v10 = v37 + 1;
      v37 = v10;
      if ( v10 >= v9 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v17 = EngAllocMem(1u, v12, 0x64667456u);
    *a5 = v17;
    if ( v17 )
    {
      v18 = v36;
      *v17 = v36;
      *((_DWORD *)*a5 + 7) = 0;
      *((_DWORD *)*a5 + 8) = 0;
      *((_QWORD *)*a5 + 1) = a3;
      *((_QWORD *)*a5 + 2) = a1;
      *((_DWORD *)*a5 + 6) = a2;
      v19 = 0;
      *((_DWORD *)*a5 + 9) = v9;
      v20 = (unsigned int *)((char *)*a5 + v11);
      if ( v9 )
      {
        while ( 1 )
        {
          if ( v18 == 2 )
          {
            if ( !(unsigned int)bGetFntResource(v32, v19, (__int64)&v30) )
              break;
            v6 = (_BYTE *)v30;
            v9 = v33;
          }
          v21 = v31;
          v22 = *a5;
          v23 = 6LL * v19;
          *(_OWORD *)&v22[v23 + 5] = v30;
          v22[v23 + 7] = v21;
          *((_DWORD *)*a5 + 12 * v19 + 16) = iDefaultFace(v6);
          *((_QWORD *)*a5 + 6 * v19 + 10) = v20;
          LOBYTE(v24) = v6[85];
          *((_QWORD *)*a5 + 6 * v19 + 9) = pcpComputeGlyphset(
                                             &gpcpVTFD,
                                             (unsigned __int8)v6[95],
                                             (unsigned __int8)v6[96],
                                             v24);
          v25 = *((_QWORD *)*a5 + 6 * v19 + 9);
          if ( !v25 )
            break;
          vVtfdFill_IFIMetrics(v6, v25 + 24, v20);
          v26 = *v20;
          if ( !(_DWORD)v26 )
            break;
          v18 = v36;
          v20 = (unsigned int *)((char *)v20 + v26);
          if ( ++v19 >= v9 )
            return 1;
        }
        EngFreeMem(*a5);
        *a5 = 0LL;
      }
      else
      {
        return 1;
      }
    }
  }
  return v7;
}

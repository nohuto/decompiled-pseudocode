/*
 * XREFs of bLoadNtFon @ 0x1C023575C
 * Callers:
 *     BmfdLoadFontFileTE @ 0x1C0232BA0 (BmfdLoadFontFileTE.c)
 * Callees:
 *     cParseFontResources @ 0x1C01141A4 (cParseFontResources.c)
 *     bBMFDIFIMETRICS @ 0x1C0233E2C (bBMFDIFIMETRICS.c)
 *     bConvertFontRes @ 0x1C0234348 (bConvertFontRes.c)
 *     bVerifyFNTQuick @ 0x1C02345CC (bVerifyFNTQuick.c)
 */

__int64 __fastcall bLoadNtFon(__int64 a1, int a2, PVOID *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  __int64 v7; // r12
  unsigned int v9; // ebx
  unsigned int v10; // esi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rdi
  ULONG v15; // eax
  unsigned int **v16; // rax
  unsigned int **v17; // rbx
  unsigned int *v18; // rdi
  int v19; // r8d
  __int64 v20; // r13
  unsigned int **v21; // rsi
  __int64 v22; // rcx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // ecx
  int v30; // edx
  __int128 v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int v36; // ebx
  unsigned int v37; // [rsp+30h] [rbp-40h] BYREF
  int v38; // [rsp+34h] [rbp-3Ch]
  PVOID pv; // [rsp+38h] [rbp-38h] BYREF
  __int64 v40; // [rsp+40h] [rbp-30h] BYREF
  __int64 v41; // [rsp+48h] [rbp-28h] BYREF
  __int64 v42; // [rsp+50h] [rbp-20h]
  __int128 v43; // [rsp+58h] [rbp-18h] BYREF
  __int64 v44; // [rsp+68h] [rbp-8h]
  int v46; // [rsp+C8h] [rbp+58h]

  v3 = 0LL;
  v38 = 0;
  pv = 0LL;
  v46 = 0;
  v6 = cParseFontResources(a1, &v41, &v40, &pv);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v42 = v6;
  v9 = 0;
  v10 = 0;
  if ( v6 <= 0 )
  {
LABEL_8:
    *a3 = 0LL;
    v11 = 2LL * v9;
    if ( v11 <= 0xFFFFFFFF )
    {
      v12 = 176LL * v10;
      if ( v12 <= 0xFFFFFFFF )
      {
        v13 = v12 + 40;
        if ( (unsigned int)v12 < 0xFFFFFFD8 )
        {
          v14 = v13;
          v15 = v11 + v13;
          if ( (int)v11 + (int)v14 >= (unsigned int)v14 )
          {
            v16 = (unsigned int **)EngAllocMem(1u, v15, 0x64666D42u);
            *a3 = v16;
            v17 = v16;
            if ( !v16 )
            {
              EngSetLastError(8u);
              return 0LL;
            }
            v18 = (unsigned int *)((char *)v16 + v14);
            v16[2] = (unsigned int *)a1;
            *v16 = (unsigned int *)255;
            v19 = 0;
            *((_DWORD *)v16 + 2) = 3;
            v20 = 0LL;
            *((_DWORD *)v16 + 7) = v10;
            v16[4] = 0LL;
            v37 = 0;
            if ( (int)v7 <= 0 )
            {
LABEL_22:
              *((_DWORD *)v17 + 7) += v46;
              v38 = 1;
              *((_DWORD *)v17 + 6) = 0;
            }
            else
            {
              v21 = v16 + 15;
              while ( 1 )
              {
                v44 = 0LL;
                v22 = *((_QWORD *)pv + v20);
                *(_QWORD *)&v43 = v22;
                v23 = *(unsigned __int8 *)(v22 + 3) | (*(unsigned __int16 *)(v22 + 4) << 8);
                v24 = *(unsigned __int8 *)(v22 + 2);
                *((_DWORD *)v21 - 12) = 0;
                *v21 = v18;
                HIDWORD(v43) = v24 | (v23 << 8);
                v25 = v22 - a2;
                v26 = v40;
                v27 = v41;
                DWORD2(v43) = v25;
                *((_OWORD *)v21 - 5) = v43;
                *(v21 - 8) = 0LL;
                if ( !(unsigned int)bConvertFontRes(v27, v26, &v43, (__int64)&v17[11 * v19 + 5]) )
                  break;
                v18 = (unsigned int *)((char *)v18 + **v21);
                v28 = *((unsigned __int8 *)*v21 + 44);
                LOWORD(v28) = v28 - 128;
                if ( (unsigned __int16)v28 <= 8u )
                {
                  v29 = 323;
                  if ( _bittest(&v29, v28) )
                  {
                    v44 = 0LL;
                    *(_QWORD *)&v43 = *((_QWORD *)pv + v20);
                    v30 = *(unsigned __int8 *)(v43 + 2) | ((*(unsigned __int8 *)(v43 + 3) | (*(unsigned __int16 *)(v43 + 4) << 8)) << 8);
                    DWORD2(v43) = v43 - a2;
                    HIDWORD(v43) = v30;
                    v31 = v43;
                    v32 = v40;
                    v33 = 11LL * (unsigned int)v7;
                    v34 = (__int64)&v17[v33 + 5];
                    v17[v33 + 15] = v18;
                    LODWORD(v17[v33 + 9]) = 1;
                    v35 = v41;
                    *(_OWORD *)v34 = v31;
                    *(_QWORD *)(v34 + 16) = 0LL;
                    if ( !(unsigned int)bConvertFontRes(v35, v32, &v43, v34) )
                      break;
                    ++v46;
                    v18 = (unsigned int *)((char *)v18 + **v21);
                    LODWORD(v7) = v7 + 1;
                  }
                }
                ++v20;
                v19 = v37 + 1;
                v21 += 11;
                ++v37;
                if ( v20 >= v42 )
                  goto LABEL_22;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v44 = 0LL;
      *(_QWORD *)&v43 = *((_QWORD *)pv + v3);
      HIDWORD(v43) = *(unsigned __int8 *)(v43 + 2) | ((*(unsigned __int8 *)(v43 + 3) | (*(unsigned __int16 *)(v43 + 4) << 8)) << 8);
      if ( !bVerifyFNTQuick((__int64 *)&v43) )
        break;
      if ( !(unsigned int)bBMFDIFIMETRICS(v41, v40, 0LL, &v43, &v37) )
        break;
      ++v10;
      if ( v9 + v37 < v9 )
        break;
      ++v3;
      v9 += v37;
      if ( v3 >= v7 )
        goto LABEL_8;
    }
  }
  EngFreeMem(pv);
  v36 = v38;
  if ( !v38 )
  {
    if ( *a3 )
    {
      EngFreeMem(*a3);
      *a3 = 0LL;
    }
  }
  return v36;
}

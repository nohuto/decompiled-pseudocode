/*
 * XREFs of bLoadNtFon @ 0x1C0236CEC
 * Callers:
 *     BmfdLoadFontFileTE @ 0x1C0234100 (BmfdLoadFontFileTE.c)
 * Callees:
 *     cParseFontResources @ 0x1C011E210 (cParseFontResources.c)
 *     bBMFDIFIMETRICS @ 0x1C02353AC (bBMFDIFIMETRICS.c)
 *     bConvertFontRes @ 0x1C02358DC (bConvertFontRes.c)
 *     bVerifyFNTQuick @ 0x1C0235B60 (bVerifyFNTQuick.c)
 */

__int64 __fastcall bLoadNtFon(__int64 a1, int a2, PVOID *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  __int64 v7; // r13
  unsigned int v9; // ebx
  unsigned int v10; // esi
  int v11; // r8d
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdi
  ULONG v15; // eax
  unsigned int **v16; // rax
  unsigned int **v17; // rbx
  unsigned int *v18; // rdi
  int v19; // r8d
  __int64 v20; // r12
  unsigned int **v21; // rsi
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // edx
  __int128 v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // ebx
  unsigned int v34; // [rsp+30h] [rbp-40h] BYREF
  int v35; // [rsp+34h] [rbp-3Ch]
  PVOID pv; // [rsp+38h] [rbp-38h] BYREF
  __int64 v37; // [rsp+40h] [rbp-30h] BYREF
  __int64 v38; // [rsp+48h] [rbp-28h] BYREF
  __int64 v39; // [rsp+50h] [rbp-20h]
  __int128 v40; // [rsp+58h] [rbp-18h] BYREF
  __int64 v41; // [rsp+68h] [rbp-8h]
  int v43; // [rsp+C8h] [rbp+58h]

  v3 = 0LL;
  v35 = 0;
  pv = 0LL;
  v43 = 0;
  v6 = cParseFontResources(a1, &v38, &v37, &pv);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v39 = v6;
  v9 = 0;
  v10 = 0;
  if ( v6 <= 0 )
  {
LABEL_8:
    *a3 = 0LL;
    if ( 2 * (unsigned __int64)v9 <= 0xFFFFFFFF )
    {
      v11 = 2 * v9;
      v12 = 176LL * v10;
      if ( v12 <= 0xFFFFFFFF )
      {
        v13 = v12 + 40;
        if ( (unsigned int)(v12 + 40) >= 0x28 )
        {
          v14 = v13;
          v15 = v13 + v11;
          if ( (int)v14 + v11 >= (unsigned int)v14 )
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
            v34 = 0;
            if ( (int)v7 <= 0 )
            {
LABEL_22:
              *((_DWORD *)v17 + 7) += v43;
              v35 = 1;
              *((_DWORD *)v17 + 6) = 0;
            }
            else
            {
              v21 = v16 + 15;
              while ( 1 )
              {
                v41 = 0LL;
                v22 = *((_QWORD *)pv + v20);
                *(_QWORD *)&v40 = v22;
                v23 = *(unsigned __int8 *)(v22 + 2) | ((*(unsigned __int8 *)(v22 + 3) | (*(unsigned __int16 *)(v22 + 4) << 8)) << 8);
                *((_DWORD *)v21 - 12) = 0;
                HIDWORD(v40) = v23;
                v24 = v37;
                DWORD2(v40) = v22 - a2;
                *((_OWORD *)v21 - 5) = v40;
                *(v21 - 8) = 0LL;
                *v21 = v18;
                if ( !(unsigned int)bConvertFontRes(v38, v24, &v40, (__int64)&v17[11 * v19 + 5]) )
                  break;
                v18 = (unsigned int *)((char *)v18 + **v21);
                v25 = *((unsigned __int8 *)*v21 + 44);
                LOWORD(v25) = v25 - 128;
                if ( (unsigned __int16)v25 <= 8u )
                {
                  v26 = 323;
                  if ( _bittest(&v26, v25) )
                  {
                    v41 = 0LL;
                    *(_QWORD *)&v40 = *((_QWORD *)pv + v20);
                    v27 = *(unsigned __int8 *)(v40 + 2) | ((*(unsigned __int8 *)(v40 + 3) | (*(unsigned __int16 *)(v40 + 4) << 8)) << 8);
                    DWORD2(v40) = v40 - a2;
                    HIDWORD(v40) = v27;
                    v28 = v40;
                    v29 = v37;
                    v30 = 11LL * (unsigned int)v7;
                    v31 = (__int64)&v17[v30 + 5];
                    v17[v30 + 15] = v18;
                    LODWORD(v17[v30 + 9]) = 1;
                    v32 = v38;
                    *(_OWORD *)v31 = v28;
                    *(_QWORD *)(v31 + 16) = 0LL;
                    if ( !(unsigned int)bConvertFontRes(v32, v29, &v40, v31) )
                      break;
                    ++v43;
                    v18 = (unsigned int *)((char *)v18 + **v21);
                    LODWORD(v7) = v7 + 1;
                  }
                }
                ++v20;
                v19 = v34 + 1;
                v21 += 11;
                ++v34;
                if ( v20 >= v39 )
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
      v41 = 0LL;
      *(_QWORD *)&v40 = *((_QWORD *)pv + v3);
      HIDWORD(v40) = *(unsigned __int8 *)(v40 + 2) | ((*(unsigned __int8 *)(v40 + 3) | (*(unsigned __int16 *)(v40 + 4) << 8)) << 8);
      if ( !bVerifyFNTQuick((__int64 *)&v40) )
        break;
      if ( !(unsigned int)bBMFDIFIMETRICS(v38, v37, 0LL, &v40, &v34) )
        break;
      ++v10;
      if ( v9 + v34 < v9 )
        break;
      ++v3;
      v9 += v34;
      if ( v3 >= v7 )
        goto LABEL_8;
    }
  }
  EngFreeMem(pv);
  v33 = v35;
  if ( !v35 )
  {
    if ( *a3 )
    {
      EngFreeMem(*a3);
      *a3 = 0LL;
    }
  }
  return v33;
}

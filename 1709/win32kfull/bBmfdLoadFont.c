/*
 * XREFs of bBmfdLoadFont @ 0x1C023550C
 * Callers:
 *     BmfdLoadFontFileTE @ 0x1C0234100 (BmfdLoadFontFileTE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     StringCchLengthA @ 0x1C0235354 (StringCchLengthA.c)
 *     bBMFDIFIMETRICS @ 0x1C02353AC (bBMFDIFIMETRICS.c)
 *     bConvertFontRes @ 0x1C02358DC (bConvertFontRes.c)
 *     bDescStr @ 0x1C02359DC (bDescStr.c)
 *     bVerifyFNTQuick @ 0x1C0235B60 (bVerifyFNTQuick.c)
 *     bGetFntResource @ 0x1C0237D34 (bGetFntResource.c)
 *     bInitWinResData @ 0x1C0237E44 (bInitWinResData.c)
 */

__int64 __fastcall bBmfdLoadFont(__int64 a1, __int64 a2, __int64 a3, int a4, PVOID *a5)
{
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // r9
  unsigned int v9; // r15d
  unsigned int v11; // esi
  unsigned int v12; // r12d
  int v13; // edi
  ULONG v14; // edi
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  char *v19; // rax
  __int64 v20; // r9
  _DWORD *v21; // rdi
  unsigned int v22; // r15d
  int v23; // ecx
  char *v24; // r14
  int v25; // edx
  unsigned int v26; // eax
  __int128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // xmm1_8
  __int64 v30; // rax
  _DWORD *v31; // r9
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  __int64 v34; // rcx
  _DWORD *v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rbx
  int v39; // [rsp+34h] [rbp-CCh]
  size_t pcchLength; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v41; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  _BYTE v46[24]; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+88h] [rbp-78h]
  char psz[256]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a4;
  v6 = 0;
  v45 = a1;
  v7 = (unsigned int)a3;
  v8 = a2;
  *a5 = 0LL;
  v9 = 0;
  v44 = a2;
  v42 = 0uLL;
  v43 = 0LL;
  if ( v5 == 2 )
  {
    if ( !(unsigned int)bInitWinResData(a2, (unsigned int)a3, v46) )
      return 0LL;
    v11 = v47;
    v5 = a4;
    v8 = v44;
  }
  else
  {
    v11 = 1;
    *(_QWORD *)&v42 = a2;
    v47 = 1;
    DWORD2(v42) = 0;
    HIDWORD(v42) = a3;
    v43 = 0LL;
  }
  v12 = 0;
  v39 = 0;
  v13 = 176 * v11 + 40;
  if ( v5 == 2 )
  {
    if ( (unsigned int)bDescStr(v8, v7, psz) )
    {
      StringCchLengthA(psz, 0x100uLL, &pcchLength);
      v39 = 176 * v11 + 40;
      v13 += 2 * pcchLength + 2;
      v12 = 2 * pcchLength + 2;
    }
    v5 = a4;
  }
  v14 = (v13 + 7) & 0xFFFFFFF8;
  LODWORD(pcchLength) = v14;
  if ( v11 )
  {
    while ( 1 )
    {
      if ( v5 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v46, v6, &v42, v8) )
          return 0LL;
        v11 = v47;
      }
      v15 = v9 + HIDWORD(v42);
      if ( v9 + HIDWORD(v42) < v9 )
        return 0LL;
      v9 += HIDWORD(v42);
      if ( v15 > (unsigned int)v7
        || !(unsigned int)bVerifyFNTQuick(&v42, a2, a3, v8)
        || !(unsigned int)bBMFDIFIMETRICS(v44, v7, 0LL, &v42, &v41) )
      {
        return 0LL;
      }
      a2 = 0xFFFFFFFFLL;
      v16 = 2LL * v41;
      v17 = -1;
      if ( v16 <= 0xFFFFFFFF )
        v17 = 2 * v41;
      v41 = v17;
      if ( v16 > 0xFFFFFFFF )
        return 0LL;
      v18 = v17 + v14;
      if ( v17 + v14 < v14 )
        return 0LL;
      v14 += v17;
      if ( v18 - (unsigned int)pcchLength > 2 * (int)v7 )
        return 0LL;
      if ( ++v6 >= v11 )
        break;
      v5 = a4;
    }
  }
  v19 = (char *)EngAllocMem(1u, v14, 0x64666D42u);
  *a5 = v19;
  v21 = v19;
  if ( !v19 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  v22 = 0;
  v23 = a4;
  v24 = &v19[(unsigned int)pcchLength];
  v25 = v39;
  *((_DWORD *)v19 + 2) = a4;
  *(_QWORD *)v19 = 255LL;
  *((_QWORD *)v19 + 2) = v45;
  v26 = 0;
  LODWORD(pcchLength) = 0;
  v21[7] = v11;
  v21[8] = v12;
  v21[9] = v39;
  if ( v11 )
  {
    while ( 1 )
    {
      if ( v23 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v46, v26, &v42, v20) )
          goto LABEL_37;
        v11 = v47;
      }
      v27 = v42;
      v28 = v44;
      v29 = v43;
      v30 = 22LL * v22;
      v31 = &v21[v30 + 10];
      v45 = v30 * 4;
      v21[v30 + 18] = 0;
      *(_OWORD *)v31 = v27;
      *(_QWORD *)&v21[v30 + 30] = v24;
      *((_QWORD *)v31 + 2) = v29;
      if ( !(unsigned int)bConvertFontRes(v28, v7, &v42) )
      {
LABEL_37:
        EngFreeMem(*a5);
        *a5 = 0LL;
        return 0LL;
      }
      ++v22;
      v24 += *(unsigned int *)v24;
      if ( *(_WORD *)((char *)v21 + v45 + 88) )
      {
        v32 = v42;
        v33 = v43;
        v34 = 22LL * v22;
        v35 = &v21[v34 + 10];
        v21[v34 + 18] = 1;
        *(_QWORD *)&v21[v34 + 30] = v24;
        v36 = v44;
        *(_OWORD *)v35 = v32;
        *((_QWORD *)v35 + 2) = v33;
        if ( !(unsigned int)bConvertFontRes(v36, v7, &v42) )
          goto LABEL_37;
        ++v22;
        v24 += *(unsigned int *)v24;
      }
      v26 = pcchLength + 1;
      LODWORD(pcchLength) = v26;
      if ( v26 >= v11 )
        break;
      v23 = a4;
    }
    v25 = v39;
  }
  v21[7] = v22;
  if ( v12 )
  {
    v37 = v25;
    RtlMultiByteToUnicodeN((PWCH)((char *)v21 + v25), 2 * (v12 >> 1), 0LL, psz, v12 >> 1);
    *(_WORD *)((char *)v21 + 2 * ((unsigned __int64)v12 >> 1) + v37 - 2) = 0;
  }
  v21[6] = 0;
  return 1LL;
}

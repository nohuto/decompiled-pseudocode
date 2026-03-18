/*
 * XREFs of bBmfdLoadFont @ 0x1C0233F80
 * Callers:
 *     BmfdLoadFontFileTE @ 0x1C0232BA0 (BmfdLoadFontFileTE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     StringCchLengthA @ 0x1C0233DD4 (StringCchLengthA.c)
 *     bBMFDIFIMETRICS @ 0x1C0233E2C (bBMFDIFIMETRICS.c)
 *     bConvertFontRes @ 0x1C0234348 (bConvertFontRes.c)
 *     bDescStr @ 0x1C0234448 (bDescStr.c)
 *     bVerifyFNTQuick @ 0x1C02345CC (bVerifyFNTQuick.c)
 *     bGetFntResource @ 0x1C0236788 (bGetFntResource.c)
 *     bInitWinResData @ 0x1C0236898 (bInitWinResData.c)
 */

__int64 __fastcall bBmfdLoadFont(__int64 a1, __int64 a2, __int64 a3, int a4, PVOID *a5)
{
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // r9
  unsigned int v9; // r15d
  unsigned int v11; // esi
  unsigned int v12; // r13d
  int v13; // edi
  ULONG v14; // edi
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // ecx
  char *v18; // rax
  __int64 v19; // r9
  _DWORD *v20; // rdi
  unsigned int v21; // r15d
  int v22; // ecx
  char *v23; // r14
  int v24; // edx
  unsigned int v25; // eax
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  __int64 v28; // rcx
  _DWORD *v29; // r9
  __int64 v30; // rcx
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  __int64 v33; // rcx
  _DWORD *v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v38; // [rsp+34h] [rbp-CCh]
  size_t pcchLength; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v40; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  _BYTE v45[24]; // [rsp+70h] [rbp-90h] BYREF
  int v46; // [rsp+88h] [rbp-78h]
  char psz[256]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a4;
  v6 = 0;
  v44 = a1;
  v7 = (unsigned int)a3;
  v8 = a2;
  *a5 = 0LL;
  v9 = 0;
  v43 = a2;
  v41 = 0uLL;
  v42 = 0LL;
  if ( v5 == 2 )
  {
    if ( !(unsigned int)bInitWinResData(a2, (unsigned int)a3, v45) )
      return 0LL;
    v11 = v46;
    v5 = a4;
    v8 = v43;
  }
  else
  {
    v11 = 1;
    *(_QWORD *)&v41 = a2;
    v46 = 1;
    DWORD2(v41) = 0;
    HIDWORD(v41) = a3;
    v42 = 0LL;
  }
  v12 = 0;
  v38 = 0;
  v13 = 176 * v11 + 40;
  if ( v5 == 2 )
  {
    if ( (unsigned int)bDescStr(v8, v7, psz) )
    {
      StringCchLengthA(psz, 0x100uLL, &pcchLength);
      v38 = 176 * v11 + 40;
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
        if ( !(unsigned int)bGetFntResource(v45, v6, &v41, v8) )
          return 0LL;
        v11 = v46;
      }
      v15 = v9 + HIDWORD(v41);
      if ( v9 + HIDWORD(v41) < v9 )
        return 0LL;
      v9 += HIDWORD(v41);
      if ( v15 > (unsigned int)v7 )
        return 0LL;
      if ( !(unsigned int)bVerifyFNTQuick(&v41, a2, a3, v8) )
        return 0LL;
      if ( !(unsigned int)bBMFDIFIMETRICS(v43, v7, 0LL, &v41, &v40) )
        return 0LL;
      v16 = 2LL * v40;
      if ( v16 > 0xFFFFFFFF )
        return 0LL;
      v17 = v16 + v14;
      v40 *= 2;
      if ( (unsigned int)v16 + v14 < v14 )
        return 0LL;
      v14 += v16;
      if ( v17 - (int)pcchLength > (unsigned int)(2 * v7) )
        return 0LL;
      if ( ++v6 >= v11 )
        break;
      v5 = a4;
    }
  }
  v18 = (char *)EngAllocMem(1u, v14, 0x64666D42u);
  *a5 = v18;
  v20 = v18;
  if ( !v18 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  v21 = 0;
  v22 = a4;
  v23 = &v18[(unsigned int)pcchLength];
  v24 = v38;
  *((_DWORD *)v18 + 2) = a4;
  *(_QWORD *)v18 = 255LL;
  *((_QWORD *)v18 + 2) = v44;
  v25 = 0;
  LODWORD(pcchLength) = 0;
  v20[7] = v11;
  v20[8] = v12;
  v20[9] = v38;
  if ( v11 )
  {
    while ( 1 )
    {
      if ( v22 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v45, v25, &v41, v19) )
          goto LABEL_35;
        v11 = v46;
      }
      v26 = v41;
      v27 = v42;
      v28 = 22LL * v21;
      v29 = &v20[v28 + 10];
      v20[v28 + 18] = 0;
      *(_QWORD *)&v20[v28 + 30] = v23;
      v30 = v43;
      *(_OWORD *)v29 = v26;
      *((_QWORD *)v29 + 2) = v27;
      if ( !(unsigned int)bConvertFontRes(v30, v7, &v41) )
      {
LABEL_35:
        EngFreeMem(*a5);
        *a5 = 0LL;
        return 0LL;
      }
      ++v21;
      v23 += *(unsigned int *)v23;
      if ( LOWORD(v20[22 * v21]) )
      {
        v31 = v41;
        v32 = v42;
        v33 = 22LL * v21;
        v34 = &v20[v33 + 10];
        v20[v33 + 18] = 1;
        *(_QWORD *)&v20[v33 + 30] = v23;
        v35 = v43;
        *(_OWORD *)v34 = v31;
        *((_QWORD *)v34 + 2) = v32;
        if ( !(unsigned int)bConvertFontRes(v35, v7, &v41) )
          goto LABEL_35;
        ++v21;
        v23 += *(unsigned int *)v23;
      }
      v25 = pcchLength + 1;
      LODWORD(pcchLength) = v25;
      if ( v25 >= v11 )
        break;
      v22 = a4;
    }
    v24 = v38;
  }
  v20[7] = v21;
  if ( v12 )
  {
    v36 = v24;
    RtlMultiByteToUnicodeN((PWCH)((char *)v20 + v24), 2 * (v12 >> 1), 0LL, psz, v12 >> 1);
    *(_WORD *)((char *)v20 + 2 * ((unsigned __int64)v12 >> 1) + v36 - 2) = 0;
  }
  v20[6] = 0;
  return 1LL;
}

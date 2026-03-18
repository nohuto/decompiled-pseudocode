/*
 * XREFs of EtwTraceJobSetQuery @ 0x1407A7B9C
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     PspSetNetRateControl @ 0x14077C38C (PspSetNetRateControl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1407A8228 (EtwpCopyJobGuidSafe.c)
 */

__int64 __fastcall EtwTraceJobSetQuery(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned __int16 a6)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  int v9; // r11d
  __int16 v10; // cx
  __int64 result; // rax
  unsigned int v12; // r10d
  int v13; // r10d
  _BYTE *v14; // r11
  _BYTE *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r10d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v32[16]; // [rsp+50h] [rbp-B8h] BYREF
  int v33; // [rsp+60h] [rbp-A8h]
  int v34; // [rsp+64h] [rbp-A4h]
  _BYTE *v35; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-98h]
  char *v37; // [rsp+78h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-88h]
  __int64 v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  __int64 v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  __int64 v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  __int64 v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  __int64 v51; // [rsp+E8h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-18h]
  __int64 v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  __int64 v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  __int64 v57; // [rsp+118h] [rbp+10h]
  __int64 v58; // [rsp+120h] [rbp+18h]
  __int64 v59; // [rsp+128h] [rbp+20h]
  __int64 v60; // [rsp+130h] [rbp+28h]
  __int64 v61; // [rsp+138h] [rbp+30h]
  __int64 v62; // [rsp+140h] [rbp+38h]
  __int64 v63; // [rsp+148h] [rbp+40h]
  __int64 v64; // [rsp+150h] [rbp+48h]
  __int64 v65; // [rsp+158h] [rbp+50h]
  __int64 v66; // [rsp+160h] [rbp+58h]
  __int64 v67; // [rsp+168h] [rbp+60h]
  __int64 v68; // [rsp+170h] [rbp+68h]
  __int64 v69; // [rsp+178h] [rbp+70h]
  __int64 v70; // [rsp+180h] [rbp+78h]
  __int64 *v71; // [rsp+188h] [rbp+80h]
  __int64 v72; // [rsp+190h] [rbp+88h]

  EtwpCopyJobGuidSafe(v32, a1);
  if ( v6 )
    v33 = *(_DWORD *)(v6 + 1220);
  else
    v33 = 0;
  v10 = a6;
  v35 = v32;
  v34 = v9;
  result = a6;
  v36 = 24LL;
  v12 = 1;
  if ( a6 != 1829 )
  {
    if ( a6 == 1830 )
    {
      if ( v9 != 13 )
        return result;
      v37 = (char *)v7;
      v39 = v7 + 4;
      v13 = 19;
      v38 = 4LL;
      v41 = v7 + 8;
      v10 = 1835;
      v40 = 4LL;
      v43 = v7 + 16;
      v45 = v7 + 24;
      v47 = v7 + 32;
      v49 = v7 + 40;
      v51 = v7 + 48;
      v53 = v7 + 56;
      v55 = v7 + 80;
      v57 = v7 + 64;
      v59 = v7 + 72;
      v61 = v7 + 76;
      v63 = v7 + 88;
      v65 = v7 + 92;
      v67 = v7 + 96;
      v69 = v7 + 100;
      LODWORD(v29) = *v8;
      v71 = &v29;
      v42 = 8LL;
      v44 = 8LL;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
    }
    else
    {
      result = (unsigned int)a6 - 1831;
      if ( (unsigned int)result > 1 )
        return result;
      v38 = 4LL;
      v37 = &a5;
      v13 = 2;
    }
    return EtwTraceKernelEvent((int)&v35, v13, 0x80000u, v10, 5249284);
  }
  if ( v9 == 12 )
  {
    v14 = (_BYTE *)(v7 + 8);
    v15 = (_BYTE *)(v7 + 16);
LABEL_16:
    v16 = 2LL * v12;
    (&v35)[v16] = (_BYTE *)(v7 + 40);
    *(&v36 + v16) = 4LL;
    v17 = v12 + 1;
    v18 = v12 + 2;
    v17 *= 2LL;
    (&v35)[v17] = (_BYTE *)v7;
    *(&v36 + v17) = 8LL;
    v19 = 2LL * v18;
    (&v35)[v19] = v14;
    *(&v36 + v19) = 8LL;
    v20 = v18 + 1;
    v18 += 2;
    v20 *= 2LL;
    (&v35)[v20] = v15;
    *(&v36 + v20) = 8LL;
    v30 = *(_QWORD *)(v7 + 48) >> 12;
    v21 = 2LL * v18;
    (&v35)[v21] = &v30;
    *(&v36 + v21) = 8LL;
    v31 = *(_QWORD *)(v7 + 24) >> 12;
    v22 = v18 + 1;
    v18 += 2;
    v22 *= 2LL;
    (&v35)[v22] = &v31;
    *(&v36 + v22) = 8LL;
    v23 = 2LL * v18;
    (&v35)[v23] = (_BYTE *)(v7 + 32);
    *(&v36 + v23) = 4LL;
    v24 = v18 + 1;
    v18 += 2;
    v24 *= 2LL;
    (&v35)[v24] = (_BYTE *)(v7 + 36);
    *(&v36 + v24) = 4LL;
    v25 = 2LL * v18;
    (&v35)[v25] = (_BYTE *)(v7 + 44);
    *(&v36 + v25) = 4LL;
    v26 = v18 + 1;
    v18 += 2;
    v26 *= 2LL;
    (&v35)[v26] = (_BYTE *)(v7 + 56);
    *(&v36 + v26) = 4LL;
    v27 = v18++;
    v27 *= 2LL;
    (&v35)[v27] = (_BYTE *)(v7 + 60);
    *(&v36 + v27) = 4LL;
    v28 = 2LL * v18;
    v13 = v18 + 1;
    (&v35)[v28] = (_BYTE *)(v7 + 64);
    *(&v36 + v28) = 4LL;
    v10 = 1833;
    return EtwTraceKernelEvent((int)&v35, v13, 0x80000u, v10, 5249284);
  }
  if ( v9 != 15 )
  {
    if ( v9 != 32 )
      return result;
    v14 = (_BYTE *)(v7 + 8);
    v37 = (char *)v7;
    v15 = (_BYTE *)(v7 + 16);
    v39 = v7 + 8;
    v41 = v7 + 16;
    v12 = 4;
    v38 = 4LL;
    v40 = 8LL;
    v42 = 1LL;
    goto LABEL_16;
  }
  v37 = (char *)v7;
  v39 = v7 + 4;
  v10 = 1836;
  v38 = 4LL;
  v13 = 3;
  v40 = 4LL;
  return EtwTraceKernelEvent((int)&v35, v13, 0x80000u, v10, 5249284);
}

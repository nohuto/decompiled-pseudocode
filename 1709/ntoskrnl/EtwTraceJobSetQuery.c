/*
 * XREFs of EtwTraceJobSetQuery @ 0x140745C30
 * Callers:
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspSetNetRateControl @ 0x14071835C (PspSetNetRateControl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x140746620 (EtwpCopyJobGuidSafe.c)
 */

void __fastcall EtwTraceJobSetQuery(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned __int16 a6)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  int v9; // r11d
  unsigned __int16 v10; // cx
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-B8h] BYREF
  int v31; // [rsp+60h] [rbp-A8h]
  int v32; // [rsp+64h] [rbp-A4h]
  _BYTE *v33; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h]
  char *v35; // [rsp+78h] [rbp-90h]
  __int64 v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-78h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  __int64 v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  __int64 v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  __int64 v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  __int64 v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  __int64 v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  __int64 v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  __int64 v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  __int64 v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  __int64 v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  __int64 v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  __int64 v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  __int64 v63; // [rsp+158h] [rbp+50h]
  __int64 v64; // [rsp+160h] [rbp+58h]
  __int64 v65; // [rsp+168h] [rbp+60h]
  __int64 v66; // [rsp+170h] [rbp+68h]
  __int64 v67; // [rsp+178h] [rbp+70h]
  __int64 v68; // [rsp+180h] [rbp+78h]
  __int64 *v69; // [rsp+188h] [rbp+80h]
  __int64 v70; // [rsp+190h] [rbp+88h]

  EtwpCopyJobGuidSafe(v30, a1);
  if ( v6 )
    v31 = *(_DWORD *)(v6 + 1220);
  else
    v31 = 0;
  v10 = a6;
  v33 = v30;
  v32 = v9;
  v34 = 24LL;
  v11 = 1;
  if ( a6 != 1829 )
  {
    if ( a6 == 1830 )
    {
      if ( v9 != 13 )
        return;
      v35 = (char *)v7;
      v37 = v7 + 4;
      v12 = 19;
      v36 = 4LL;
      v39 = v7 + 8;
      v10 = 1835;
      v38 = 4LL;
      v41 = v7 + 16;
      v43 = v7 + 24;
      v45 = v7 + 32;
      v47 = v7 + 40;
      v49 = v7 + 48;
      v51 = v7 + 56;
      v53 = v7 + 80;
      v55 = v7 + 64;
      v57 = v7 + 72;
      v59 = v7 + 76;
      v61 = v7 + 88;
      v63 = v7 + 92;
      v65 = v7 + 96;
      v67 = v7 + 100;
      LODWORD(v27) = *v8;
      v69 = &v27;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 8LL;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
    }
    else
    {
      if ( (unsigned int)a6 - 1831 > 1 )
        return;
      v36 = 4LL;
      v35 = &a5;
      v12 = 2;
    }
    goto LABEL_15;
  }
  if ( v9 != 12 )
  {
    if ( v9 == 15 )
    {
      v35 = (char *)v7;
      v37 = v7 + 4;
      v10 = 1836;
      v36 = 4LL;
      v12 = 3;
      v38 = 4LL;
      goto LABEL_15;
    }
    if ( v9 != 32 )
      return;
    v35 = (char *)v7;
    v37 = v7 + 8;
    v11 = 4;
    v36 = 4LL;
    v39 = v7 + 16;
    v38 = 8LL;
    v40 = 1LL;
  }
  v13 = 2LL * v11;
  (&v33)[v13] = (_BYTE *)(v7 + 40);
  *(&v34 + v13) = 4LL;
  v14 = v11 + 1;
  v15 = v11 + 2;
  v14 *= 2LL;
  v16 = 2LL * v15;
  (&v33)[v14] = (_BYTE *)v7;
  *(&v34 + v14) = 8LL;
  (&v33)[v16] = (_BYTE *)(v7 + 8);
  *(&v34 + v16) = 8LL;
  v17 = v15 + 1;
  v15 += 2;
  v17 *= 2LL;
  (&v33)[v17] = (_BYTE *)(v7 + 16);
  v18 = *(_QWORD *)(v7 + 48);
  *(&v34 + v17) = 8LL;
  v28 = v18 >> 12;
  v19 = 2LL * v15;
  (&v33)[v19] = &v28;
  *(&v34 + v19) = 8LL;
  v29 = *(_QWORD *)(v7 + 24) >> 12;
  v20 = v15 + 1;
  v15 += 2;
  v20 *= 2LL;
  (&v33)[v20] = &v29;
  *(&v34 + v20) = 8LL;
  v21 = 2LL * v15;
  (&v33)[v21] = (_BYTE *)(v7 + 32);
  *(&v34 + v21) = 4LL;
  v22 = v15 + 1;
  v15 += 2;
  v22 *= 2LL;
  (&v33)[v22] = (_BYTE *)(v7 + 36);
  *(&v34 + v22) = 4LL;
  v23 = 2LL * v15;
  (&v33)[v23] = (_BYTE *)(v7 + 44);
  *(&v34 + v23) = 4LL;
  v24 = v15 + 1;
  v15 += 2;
  v24 *= 2LL;
  (&v33)[v24] = (_BYTE *)(v7 + 56);
  *(&v34 + v24) = 4LL;
  v25 = v15++;
  v25 *= 2LL;
  (&v33)[v25] = (_BYTE *)(v7 + 60);
  *(&v34 + v25) = 4LL;
  v26 = 2LL * v15;
  v12 = v15 + 1;
  (&v33)[v26] = (_BYTE *)(v7 + 64);
  *(&v34 + v26) = 4LL;
  v10 = 1833;
LABEL_15:
  EtwTraceKernelEvent((__int64)&v33, v12, 0x80000u, v10, 0x501904u);
}

/*
 * XREFs of EtwTraceJobSetQuery @ 0x14070AD8C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PspSetNetRateControl @ 0x1406E1F2C (PspSetNetRateControl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x14070B4FC (EtwpCopyJobGuidSafe.c)
 */

void *__fastcall EtwTraceJobSetQuery(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned __int16 a6)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  int v9; // r11d
  __int16 v10; // cx
  void *result; // rax
  unsigned int v12; // r10d
  int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r10d
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v31[16]; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+60h] [rbp-A8h]
  int v33; // [rsp+64h] [rbp-A4h]
  _BYTE *v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h]
  char *v36; // [rsp+78h] [rbp-90h]
  __int64 v37; // [rsp+80h] [rbp-88h]
  __int64 v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-78h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  __int64 v41; // [rsp+A0h] [rbp-68h]
  __int64 v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  __int64 v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  __int64 v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  __int64 v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  __int64 v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-18h]
  __int64 v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]
  __int64 v54; // [rsp+108h] [rbp+0h]
  __int64 v55; // [rsp+110h] [rbp+8h]
  __int64 v56; // [rsp+118h] [rbp+10h]
  __int64 v57; // [rsp+120h] [rbp+18h]
  __int64 v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  __int64 v60; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]
  __int64 v62; // [rsp+148h] [rbp+40h]
  __int64 v63; // [rsp+150h] [rbp+48h]
  __int64 v64; // [rsp+158h] [rbp+50h]
  __int64 v65; // [rsp+160h] [rbp+58h]
  __int64 v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  __int64 v68; // [rsp+178h] [rbp+70h]
  __int64 v69; // [rsp+180h] [rbp+78h]
  __int64 *v70; // [rsp+188h] [rbp+80h]
  __int64 v71; // [rsp+190h] [rbp+88h]

  EtwpCopyJobGuidSafe(v31, a1);
  if ( v6 )
    v32 = *(_DWORD *)(v6 + 1220);
  else
    v32 = 0;
  v10 = a6;
  v34 = v31;
  v33 = v9;
  result = (void *)a6;
  v35 = 24LL;
  v12 = 1;
  if ( a6 != 1829 )
  {
    if ( a6 == 1830 )
    {
      if ( v9 != 13 )
        return result;
      v36 = (char *)v7;
      v38 = v7 + 4;
      v13 = 19;
      v37 = 4LL;
      v40 = v7 + 8;
      v10 = 1835;
      v39 = 4LL;
      v42 = v7 + 16;
      v44 = v7 + 24;
      v46 = v7 + 32;
      v48 = v7 + 40;
      v50 = v7 + 48;
      v52 = v7 + 56;
      v54 = v7 + 80;
      v56 = v7 + 64;
      v58 = v7 + 72;
      v60 = v7 + 76;
      v62 = v7 + 88;
      v64 = v7 + 92;
      v66 = v7 + 96;
      v68 = v7 + 100;
      LODWORD(v28) = *v8;
      v70 = &v28;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      v51 = 8LL;
      v53 = 8LL;
      v55 = 8LL;
      v57 = 8LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 4LL;
    }
    else
    {
      result = (void *)((unsigned int)a6 - 1831);
      if ( (unsigned int)result > 1 )
        return result;
      v37 = 4LL;
      v36 = &a5;
      v13 = 2;
    }
    return EtwTraceKernelEvent((int)&v34, v13, 0x80000u, v10, 5249284);
  }
  if ( v9 != 12 )
  {
    if ( v9 == 15 )
    {
      v36 = (char *)v7;
      v38 = v7 + 4;
      v10 = 1836;
      v37 = 4LL;
      v13 = 3;
      v39 = 4LL;
      return EtwTraceKernelEvent((int)&v34, v13, 0x80000u, v10, 5249284);
    }
    if ( v9 != 32 )
      return result;
    v36 = (char *)v7;
    v38 = v7 + 8;
    v12 = 4;
    v37 = 4LL;
    v40 = v7 + 16;
    v39 = 8LL;
    v41 = 1LL;
  }
  v14 = 2LL * v12;
  (&v34)[v14] = (_BYTE *)(v7 + 40);
  *(&v35 + v14) = 4LL;
  v15 = v12 + 1;
  v16 = v12 + 2;
  v15 *= 2LL;
  v17 = 2LL * v16;
  (&v34)[v15] = (_BYTE *)v7;
  *(&v35 + v15) = 8LL;
  (&v34)[v17] = (_BYTE *)(v7 + 8);
  *(&v35 + v17) = 8LL;
  v18 = v16 + 1;
  v16 += 2;
  v18 *= 2LL;
  (&v34)[v18] = (_BYTE *)(v7 + 16);
  v19 = *(_QWORD *)(v7 + 48);
  *(&v35 + v18) = 8LL;
  v29 = v19 >> 12;
  v20 = 2LL * v16;
  (&v34)[v20] = &v29;
  *(&v35 + v20) = 8LL;
  v30 = *(_QWORD *)(v7 + 24) >> 12;
  v21 = v16 + 1;
  v16 += 2;
  v21 *= 2LL;
  (&v34)[v21] = &v30;
  *(&v35 + v21) = 8LL;
  v22 = 2LL * v16;
  (&v34)[v22] = (_BYTE *)(v7 + 32);
  *(&v35 + v22) = 4LL;
  v23 = v16 + 1;
  v16 += 2;
  v23 *= 2LL;
  (&v34)[v23] = (_BYTE *)(v7 + 36);
  *(&v35 + v23) = 4LL;
  v24 = 2LL * v16;
  (&v34)[v24] = (_BYTE *)(v7 + 44);
  *(&v35 + v24) = 4LL;
  v25 = v16 + 1;
  v16 += 2;
  v25 *= 2LL;
  (&v34)[v25] = (_BYTE *)(v7 + 56);
  *(&v35 + v25) = 4LL;
  v26 = v16++;
  v26 *= 2LL;
  (&v34)[v26] = (_BYTE *)(v7 + 60);
  *(&v35 + v26) = 4LL;
  v27 = 2LL * v16;
  v13 = v16 + 1;
  (&v34)[v27] = (_BYTE *)(v7 + 64);
  *(&v35 + v27) = 4LL;
  v10 = 1833;
  return EtwTraceKernelEvent((int)&v34, v13, 0x80000u, v10, 5249284);
}

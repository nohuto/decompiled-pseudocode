/*
 * XREFs of ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0153E20
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0085230 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?CitpDPProcessDuration@@YAIIIN@Z @ 0x1C01543FC (-CitpDPProcessDuration@@YAIIIN@Z.c)
 */

void __fastcall CitpDPDataLog(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 v6; // r15
  unsigned int v7; // r14d
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  int v10; // esi
  double v11; // xmm6_8
  const GUID *v12; // r9
  float v13; // xmm0_4
  const GUID *v14; // r9
  float v15; // xmm0_4
  const GUID *v16; // r9
  float v17; // xmm0_4
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  char v22; // [rsp+38h] [rbp-D0h] BYREF
  char v23; // [rsp+39h] [rbp-CFh] BYREF
  char v24; // [rsp+3Ah] [rbp-CEh] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  float v26; // [rsp+40h] [rbp-C8h] BYREF
  float v27; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  float v30; // [rsp+50h] [rbp-B8h] BYREF
  float v31; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+5Ch] [rbp-ACh] BYREF
  float v34; // [rsp+60h] [rbp-A8h] BYREF
  float v35; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v36; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v38; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+74h] [rbp-94h] BYREF
  __int128 v40; // [rsp+78h] [rbp-90h] BYREF
  __int128 v41; // [rsp+88h] [rbp-80h]
  __int128 v42; // [rsp+98h] [rbp-70h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-60h]
  __int128 v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C8h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+D8h] [rbp-30h] BYREF
  char *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  unsigned int *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  float *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  float *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  unsigned int *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  unsigned int *v57; // [rsp+148h] [rbp+40h]
  __int64 v58; // [rsp+150h] [rbp+48h]
  unsigned int *v59; // [rsp+158h] [rbp+50h]
  __int64 v60; // [rsp+160h] [rbp+58h]
  char *v61; // [rsp+168h] [rbp+60h]
  __int64 v62; // [rsp+170h] [rbp+68h]
  char *v63; // [rsp+178h] [rbp+70h]
  __int64 v64; // [rsp+180h] [rbp+78h]
  char *v65; // [rsp+188h] [rbp+80h]
  __int64 v66; // [rsp+190h] [rbp+88h]
  unsigned int *v67; // [rsp+198h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B8h] [rbp+B0h] BYREF
  char *v70; // [rsp+1D8h] [rbp+D0h]
  const GUID *v71; // [rsp+1E0h] [rbp+D8h]
  unsigned int *v72; // [rsp+1E8h] [rbp+E0h]
  __int64 v73; // [rsp+1F0h] [rbp+E8h]
  float *v74; // [rsp+1F8h] [rbp+F0h]
  __int64 v75; // [rsp+200h] [rbp+F8h]
  float *v76; // [rsp+208h] [rbp+100h]
  __int64 v77; // [rsp+210h] [rbp+108h]
  unsigned int *v78; // [rsp+218h] [rbp+110h]
  __int64 v79; // [rsp+220h] [rbp+118h]
  unsigned int *v80; // [rsp+228h] [rbp+120h]
  __int64 v81; // [rsp+230h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR v82; // [rsp+248h] [rbp+140h] BYREF
  char *v83; // [rsp+268h] [rbp+160h]
  const GUID *v84; // [rsp+270h] [rbp+168h]
  unsigned int *v85; // [rsp+278h] [rbp+170h]
  __int64 v86; // [rsp+280h] [rbp+178h]
  float *v87; // [rsp+288h] [rbp+180h]
  __int64 v88; // [rsp+290h] [rbp+188h]
  float *v89; // [rsp+298h] [rbp+190h]
  __int64 v90; // [rsp+2A0h] [rbp+198h]
  unsigned int *v91; // [rsp+2A8h] [rbp+1A0h]
  __int64 v92; // [rsp+2B0h] [rbp+1A8h]
  unsigned int *v93; // [rsp+2B8h] [rbp+1B0h]
  __int64 v94; // [rsp+2C0h] [rbp+1B8h]

  CitpStatIncrement((unsigned __int16 *)a1 + 426, 1);
  v2 = *((_OWORD *)a1 + 54);
  v40 = *((_OWORD *)a1 + 53);
  v3 = *((_OWORD *)a1 + 55);
  v41 = v2;
  v4 = *((_OWORD *)a1 + 56);
  v42 = v3;
  v5 = *((_OWORD *)a1 + 57);
  v43 = v4;
  *(_QWORD *)&v4 = *((_QWORD *)a1 + 116);
  v44 = v5;
  v45 = v4;
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 234);
  *((_DWORD *)a1 + 234) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_QWORD *)a1 + 110) = v6;
  memset((char *)a1 + 888, 0, 0x2CuLL);
  if ( CitpDPDataSave(a1) < 0 )
  {
    v18 = v41;
    *((_OWORD *)a1 + 53) = v40;
    v19 = v42;
    *((_OWORD *)a1 + 54) = v18;
    v20 = v43;
    *((_OWORD *)a1 + 55) = v19;
    v21 = v44;
    *((_OWORD *)a1 + 56) = v20;
    *(_QWORD *)&v20 = v45;
    *((_OWORD *)a1 + 57) = v21;
    *((_QWORD *)a1 + 116) = v20;
  }
  else
  {
    v8 = (_DWORD *)&v42 + 2;
    v9 = 0;
    v10 = 0x546000u / (unsigned __int8)byte_1C018E8B3;
    v11 = 8.0 / (double)(unsigned __int8)byte_1C018E8B2;
    do
    {
      v38 = *v8 / 0x3E8u;
      v25 = CitpDPProcessDuration(v38, v10, v11);
      if ( (unk_1C018E8B0 & 1) != 0 )
      {
        if ( dword_1C0186860 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x800000000800uLL) )
        {
          v22 = v9;
          v13 = v11;
          v71 = v12;
          v70 = &v22;
          v73 = 4LL;
          v72 = &v25;
          v74 = &v26;
          v76 = &v27;
          v26 = v13;
          v75 = 4LL;
          v78 = &v28;
          v28 = dword_1C018E8AC / 0x3E8u;
          v27 = (float)v10;
          v77 = 4LL;
          v29 = v7 / 0x3E8;
          v79 = 4LL;
          v80 = &v29;
          v81 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016B726, 0LL, v12, 8u, &pData);
        }
      }
      else if ( dword_1C0186860 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x400000000800uLL) )
      {
        v23 = v9;
        v15 = v11;
        v84 = v14;
        v83 = &v23;
        v86 = 4LL;
        v85 = &v25;
        v87 = &v30;
        v89 = &v31;
        v30 = v15;
        v88 = 4LL;
        v91 = &v32;
        v32 = dword_1C018E8AC / 0x3E8u;
        v31 = (float)v10;
        v90 = 4LL;
        v33 = v7 / 0x3E8;
        v92 = 4LL;
        v93 = &v33;
        v94 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016B6C5, 0LL, v14, 8u, &v82);
      }
      if ( dword_1C0186860 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x400000000800uLL) )
        {
          v24 = v9;
          v48 = 1LL;
          v47 = &v24;
          v50 = 4LL;
          v49 = &v25;
          v51 = &v34;
          v53 = &v35;
          v17 = v11;
          v52 = 4LL;
          v55 = &v36;
          v36 = dword_1C018E8AC / 0x3E8u;
          v34 = v17;
          v54 = 4LL;
          v57 = &v37;
          v59 = &v38;
          v61 = (char *)&v40 + 8;
          v63 = (char *)&v40 + 6;
          v65 = (char *)&v40 + 4;
          v37 = v7 / 0x3E8;
          v35 = (float)v10;
          v56 = 4LL;
          v39 = (unsigned int)v16 / 0x3E8;
          v58 = 4LL;
          v60 = 4LL;
          v62 = 2LL;
          v64 = 2LL;
          v66 = 2LL;
          v67 = &v39;
          v68 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016B617, 0LL, v16, 0xDu, &v46);
        }
      }
      ++v9;
      ++v8;
    }
    while ( v9 < 0xB );
  }
}

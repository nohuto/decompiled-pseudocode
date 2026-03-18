/*
 * XREFs of ?GetMonitorCapability1@@YAKPEAEPEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C0060054
 * Callers:
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C005FF98 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 * Callees:
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C00604DC (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall GetMonitorCapability1(
        unsigned __int8 *a1,
        struct tagModeCap *a2,
        struct _FREQUENCY_RAGE *a3,
        char a4)
{
  __m128i si128; // xmm0
  __m128i v5; // xmm1
  int v8; // r14d
  __int64 v9; // r13
  unsigned int inserted; // r10d
  int v12; // edx
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  _DWORD *v15; // rsi
  int i; // ebx
  unsigned __int8 *v17; // rbx
  unsigned __int8 v18; // al
  unsigned __int64 v19; // r8
  int v20; // ecx
  unsigned int v21; // eax
  unsigned __int8 *v22; // rbx
  __int64 v23; // r15
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // al
  unsigned __int8 v26; // si
  unsigned __int8 v27; // r11
  int v28; // edx
  int v29; // r9d
  unsigned int v30; // eax
  int v31; // edx
  _DWORD *v32; // r8
  _DWORD *v33; // rcx
  char v35; // al
  int v36; // ecx
  unsigned __int8 *v37; // rsi
  __int64 v38; // r14
  unsigned __int8 v39; // al
  unsigned __int64 v40; // r8
  int v41; // ecx
  unsigned int v42; // eax
  int v44; // [rsp+28h] [rbp-D8h] BYREF
  int v45; // [rsp+2Ch] [rbp-D4h]
  unsigned int v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh]
  int v48; // [rsp+38h] [rbp-C8h]
  int v49; // [rsp+3Ch] [rbp-C4h]
  int v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+4Ch] [rbp-B4h] BYREF
  int v54; // [rsp+54h] [rbp-ACh]
  int v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+5Ch] [rbp-A4h]
  int v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+64h] [rbp-9Ch]
  int v59; // [rsp+6Ch] [rbp-94h]
  int v60; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+74h] [rbp-8Ch]
  int v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+7Ch] [rbp-84h]
  int v64; // [rsp+84h] [rbp-7Ch]
  int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h]
  int v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+94h] [rbp-6Ch]
  int v69; // [rsp+9Ch] [rbp-64h]
  int v70; // [rsp+A0h] [rbp-60h]
  int v71; // [rsp+A4h] [rbp-5Ch]
  int v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+ACh] [rbp-54h]
  int v74; // [rsp+B4h] [rbp-4Ch]
  int v75; // [rsp+B8h] [rbp-48h]
  int v76; // [rsp+BCh] [rbp-44h]
  int v77; // [rsp+C0h] [rbp-40h]
  __int64 v78; // [rsp+C4h] [rbp-3Ch]
  int v79; // [rsp+CCh] [rbp-34h]
  int v80; // [rsp+D0h] [rbp-30h]
  int v81; // [rsp+D4h] [rbp-2Ch]
  int v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+DCh] [rbp-24h]
  int v84; // [rsp+E4h] [rbp-1Ch]
  int v85; // [rsp+E8h] [rbp-18h]
  int v86; // [rsp+ECh] [rbp-14h]
  int v87; // [rsp+F0h] [rbp-10h]
  __int64 v88; // [rsp+F4h] [rbp-Ch]
  int v89; // [rsp+FCh] [rbp-4h]
  int v90; // [rsp+100h] [rbp+0h]
  int v91; // [rsp+104h] [rbp+4h]
  int v92; // [rsp+108h] [rbp+8h]
  __int64 v93; // [rsp+10Ch] [rbp+Ch]
  int v94; // [rsp+114h] [rbp+14h]
  int v95; // [rsp+118h] [rbp+18h]
  int v96; // [rsp+11Ch] [rbp+1Ch]
  int v97; // [rsp+120h] [rbp+20h]
  __int64 v98; // [rsp+124h] [rbp+24h]
  int v99; // [rsp+12Ch] [rbp+2Ch]
  int v100; // [rsp+130h] [rbp+30h]
  int v101; // [rsp+134h] [rbp+34h]
  int v102; // [rsp+138h] [rbp+38h]
  __int64 v103; // [rsp+13Ch] [rbp+3Ch]
  int v104; // [rsp+144h] [rbp+44h]
  int v105; // [rsp+148h] [rbp+48h]
  int v106; // [rsp+14Ch] [rbp+4Ch]
  int v107; // [rsp+150h] [rbp+50h]
  __int64 v108; // [rsp+154h] [rbp+54h]
  int v109; // [rsp+15Ch] [rbp+5Ch]
  int v110; // [rsp+160h] [rbp+60h]
  int v111; // [rsp+164h] [rbp+64h]
  int v112; // [rsp+168h] [rbp+68h]
  __int64 v113; // [rsp+16Ch] [rbp+6Ch]
  int v114; // [rsp+174h] [rbp+74h]
  __m128i v115; // [rsp+180h] [rbp+80h]
  __m128i v116; // [rsp+190h] [rbp+90h]
  _DWORD v117[2]; // [rsp+1A0h] [rbp+A0h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = _mm_load_si128((const __m128i *)&_xmm);
  v117[0] = -256;
  v117[1] = 0xFFFFFF;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 4) = 0;
  v8 = a4 == 0 ? 0x38 : 0;
  v9 = 8LL;
  *(_DWORD *)a3 = v8;
  *((_DWORD *)a3 + 1) = -1;
  *((_DWORD *)a3 + 3) = -1;
  inserted = 0;
  *((_DWORD *)a3 + 5) = -1;
  v12 = 0;
  v116 = si128;
  v13 = 0LL;
  v115 = v5;
  do
  {
    if ( a1[v13] != *((_BYTE *)v117 + v13) )
      return 0LL;
    v13 = ++v12;
  }
  while ( (unsigned __int64)v12 < 8 );
  v50 = 1280;
  v53 = 0LL;
  v56 = 768;
  v61 = 768;
  v66 = 768;
  v71 = 768;
  v51 = 1024;
  v55 = 1024;
  v60 = 1024;
  v65 = 1024;
  v70 = 1024;
  v54 = 0;
  v76 = 600;
  v81 = 600;
  v86 = 600;
  v91 = 600;
  v58 = 0LL;
  v59 = 0;
  v63 = 0LL;
  v64 = 0;
  v68 = 0LL;
  v69 = 0;
  v73 = 0LL;
  v74 = 0;
  v78 = 0LL;
  v79 = 0;
  v83 = 0LL;
  v84 = 0;
  v88 = 0LL;
  v89 = 0;
  v93 = 0LL;
  v94 = 0;
  v98 = 0LL;
  v99 = 0;
  v103 = 0LL;
  v104 = 0;
  v108 = 0LL;
  v109 = 0;
  v113 = 0LL;
  v114 = 0;
  v14 = a1[36];
  v75 = 800;
  v80 = 800;
  v85 = 800;
  v90 = 800;
  v52 = 75;
  v96 = 480;
  v101 = 480;
  v106 = 480;
  v111 = 480;
  v57 = 75;
  v62 = 70;
  v67 = 60;
  v72 = 87;
  v77 = 75;
  v82 = 72;
  v87 = 60;
  v92 = 56;
  v95 = 640;
  v97 = 75;
  v100 = 640;
  v102 = 72;
  v105 = 640;
  v107 = 67;
  v110 = 640;
  v112 = 60;
  a1[36] = v14 & 0x1F | (v14 >> 1) & 0x60;
  v15 = (_DWORD *)&v53 + 1;
  for ( i = 0; i < 13; ++i )
  {
    v15[1] = -1;
    *(v15 - 1) = v8;
    *v15 = 0;
    if ( ((a1[36 - i / 7] >> (i % 7)) & 1) != 0 )
      inserted = InsertModecapList((struct tagModeCap *)(v15 - 4), a2, inserted);
    v15 += 6;
  }
  v17 = a1 + 38;
  v48 = 0;
  v49 = -1;
  v47 = a4 != 0 ? 0 : 0x38;
  do
  {
    v18 = *v17;
    if ( *v17 >= 2u )
    {
      v19 = (unsigned __int64)v17[1] >> 6;
      v46 = (v17[1] & 0x3F) + 60;
      v20 = 8 * v18 + 248;
      v21 = v20 * v115.m128i_i32[v19];
      v44 = v20;
      v45 = v21 / v116.m128i_i32[v19];
      inserted = InsertModecapList((struct tagModeCap *)&v44, a2, inserted);
    }
    v17 += 2;
    --v9;
  }
  while ( v9 );
  v22 = a1 + 58;
  v23 = 4LL;
  do
  {
    v24 = *(v22 - 4);
    if ( (v24 || *(v22 - 3)) && (v25 = *v22) != 0 )
    {
      v26 = v22[3];
      v27 = *v22;
      v28 = 16 * (v25 & 0xF0) + *(v22 - 2);
      v29 = v22[1] + 16 * (v26 & 0xF0);
      v44 = v28;
      v45 = v29;
      if ( v28 && v29 )
      {
        v30 = 10000
            * (v24 + (*(v22 - 3) << 8))
            / ((v29 + ((v26 & 0xF) << 8) + v22[2])
             * (v28 + ((v25 & 0xF) << 8) + (unsigned int)*(v22 - 1)));
        v46 = 10000
            * (v24 + (*(v22 - 3) << 8))
            / ((v29 + ((v26 & 0xF) << 8) + v22[2])
             * (v28 + ((v27 & 0xF) << 8) + (unsigned int)*(v22 - 1)));
        if ( (v22[13] & 0x80u) != 0 )
          v46 = v30 >> 1;
        inserted = InsertModecapList((struct tagModeCap *)&v44, a2, inserted);
      }
    }
    else
    {
      v35 = *(v22 - 1);
      if ( v35 == -6 )
      {
        v37 = v22 + 1;
        v38 = 6LL;
        do
        {
          v39 = *v37;
          if ( *v37 >= 2u )
          {
            v40 = (unsigned __int64)v37[1] >> 6;
            v46 = (v37[1] & 0x3F) + 60;
            v41 = 8 * v39 + 248;
            v42 = v41 * v115.m128i_i32[v40];
            v44 = v41;
            v45 = v42 / v116.m128i_i32[v40];
            inserted = InsertModecapList((struct tagModeCap *)&v44, a2, inserted);
          }
          v37 += 2;
          --v38;
        }
        while ( v38 );
      }
      else if ( v35 == -3 )
      {
        *(_DWORD *)a3 = v22[1];
        *((_DWORD *)a3 + 1) = v22[2];
        *((_DWORD *)a3 + 2) = 1000 * v22[3];
        v36 = 1000 * v22[4];
        *((_DWORD *)a3 + 4) = 0;
        *((_DWORD *)a3 + 3) = v36;
        *((_DWORD *)a3 + 5) = 10000000 * v22[5];
      }
    }
    v22 += 18;
    --v23;
  }
  while ( v23 );
  v31 = inserted - 2;
  if ( (int)(inserted - 2) >= 0 )
  {
    v32 = (_DWORD *)((char *)a2 + 16 * v31 + 8 * v31 + 8);
    v33 = (_DWORD *)((char *)a2 + 24 * v31 + 32);
    do
    {
      if ( *v32 < *v33 )
        *v32 = *v33;
      v33 -= 6;
      v32 -= 6;
      --v31;
    }
    while ( v31 >= 0 );
  }
  return inserted;
}

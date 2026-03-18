/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1C0243E60
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00A2E5C (GetFixupScan.c)
 *     SharpenInput @ 0x1C011E1B0 (SharpenInput.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024216C (AlphaBlendBGRF.c)
 *     ExpYDIB_ExpCX @ 0x1C0242F40 (ExpYDIB_ExpCX.c)
 *     MappingBGRF @ 0x1C02465A0 (MappingBGRF.c)
 */

__int64 __fastcall ExpandDIB_CY_ExpCX(__int64 a1)
{
  __int64 v1; // r8
  int *v2; // rdx
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  char v16; // r13
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  size_t v19; // r12
  __int64 v20; // r8
  __int16 v21; // cx
  char *v22; // rdi
  char *v23; // rsi
  unsigned int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // r15d
  char v28; // bl
  void *v29; // rsi
  const void *v30; // rcx
  _BYTE *v31; // r13
  int v32; // eax
  __int64 *v33; // rcx
  int v34; // eax
  unsigned __int16 v35; // si
  __int64 v36; // r14
  void *v37; // rdx
  unsigned __int64 v38; // rdi
  _BYTE *v39; // r8
  unsigned __int64 v40; // rdx
  _BYTE *v41; // r10
  int v42; // r14d
  int v43; // r11d
  int v44; // ecx
  int v45; // edi
  __int64 v46; // r8
  unsigned __int8 *v47; // r9
  int *v48; // rdx
  unsigned __int8 *v49; // r11
  unsigned __int8 *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rax
  int *v56; // rdx
  unsigned __int8 *v57; // r11
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  int *v61; // rdx
  unsigned __int8 *v62; // r11
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int16 v66; // ax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v70; // [rsp+28h] [rbp-E0h]
  int v71; // [rsp+5Ch] [rbp-ACh]
  int v72; // [rsp+60h] [rbp-A8h]
  void *v73; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v74; // [rsp+70h] [rbp-98h]
  void *Src; // [rsp+78h] [rbp-90h]
  unsigned __int64 v76; // [rsp+80h] [rbp-88h]
  __int64 v77; // [rsp+88h] [rbp-80h]
  __int64 v78; // [rsp+98h] [rbp-70h]
  int v79; // [rsp+A0h] [rbp-68h]
  __int64 v80; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v81; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v83; // [rsp+C0h] [rbp-48h]
  __int64 *v84; // [rsp+C8h] [rbp-40h]
  int v85[14]; // [rsp+D8h] [rbp-30h] BYREF
  int v86; // [rsp+110h] [rbp+8h]
  __int64 v87; // [rsp+160h] [rbp+58h]
  int v88; // [rsp+168h] [rbp+60h]
  unsigned int v89; // [rsp+16Ch] [rbp+64h]
  int v90; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v91)(int *, unsigned __int64, __int64, unsigned __int8 *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v92)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v93; // [rsp+1F0h] [rbp+E8h]
  __int64 v94; // [rsp+208h] [rbp+100h]
  __int64 v95; // [rsp+210h] [rbp+108h]
  __int64 v96; // [rsp+258h] [rbp+150h]
  __int64 v97; // [rsp+260h] [rbp+158h]
  __int64 v98; // [rsp+270h] [rbp+168h]
  __int64 v99; // [rsp+278h] [rbp+170h]
  __int64 v100; // [rsp+280h] [rbp+178h]
  int v101; // [rsp+288h] [rbp+180h]
  int v102; // [rsp+28Ch] [rbp+184h]
  int v103; // [rsp+290h] [rbp+188h]
  __int64 v104; // [rsp+298h] [rbp+190h]
  __int64 v105; // [rsp+2A0h] [rbp+198h]
  __int64 v106; // [rsp+2A8h] [rbp+1A0h]
  int v107; // [rsp+2B0h] [rbp+1A8h]
  __int64 v108; // [rsp+2F0h] [rbp+1E8h]
  __int64 v109; // [rsp+2F8h] [rbp+1F0h]
  __int64 v110; // [rsp+300h] [rbp+1F8h]
  __int64 v111; // [rsp+308h] [rbp+200h]
  __int64 v112; // [rsp+310h] [rbp+208h]
  _BYTE *v113; // [rsp+318h] [rbp+210h]
  _BYTE *v114; // [rsp+320h] [rbp+218h]
  int v115; // [rsp+328h] [rbp+220h]
  unsigned __int64 v116; // [rsp+338h] [rbp+230h]
  __int64 v117; // [rsp+340h] [rbp+238h]
  __int64 v118; // [rsp+348h] [rbp+240h]
  __int64 v119; // [rsp+350h] [rbp+248h]

  v1 = 4LL;
  v2 = v85;
  v3 = (_OWORD *)a1;
  do
  {
    v4 = v3[1];
    *(_OWORD *)v2 = *v3;
    v5 = v3[2];
    *((_OWORD *)v2 + 1) = v4;
    v6 = v3[3];
    *((_OWORD *)v2 + 2) = v5;
    v7 = v3[4];
    *((_OWORD *)v2 + 3) = v6;
    v8 = v3[5];
    *((_OWORD *)v2 + 4) = v7;
    v9 = v3[6];
    *((_OWORD *)v2 + 5) = v8;
    v10 = v3[7];
    v3 += 8;
    *((_OWORD *)v2 + 6) = v9;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v10;
    --v1;
  }
  while ( v1 );
  v11 = v3[1];
  *(_OWORD *)v2 = *v3;
  v12 = v3[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = v3[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = v3[4];
  v15 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v15;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v16 = -1;
    v17 = v95;
    v78 = v95;
    v18 = *(_QWORD *)(v95 + 32);
    v81 = *(unsigned __int64 **)(v94 + 40);
    v82 = v18;
    v83 = v18 + 1024;
    v19 = 3 * v86;
    v71 = 3 * v86;
    v20 = 3 * v88;
    v116 = v18 + 4096;
    v80 = v20;
    v117 = v20 + v18 + 4096;
    v118 = v20 + v117;
    v21 = *(_WORD *)(v94 + 12);
    v119 = v20 + v20 + v117;
    v22 = (char *)(v20 + 9 + v119 + v19 + 18);
    v73 = (void *)(v20 + 9 + v119);
    v23 = &v22[v19 + 18];
    v74 = (unsigned __int64)v22;
    v76 = v108 + 9;
    Src = v23;
    v72 = 3 * ((*(_WORD *)(v94 + 8) & 1) - 1 + (v21 & 0xF));
    GetFixupScan((__int64)v85, v22);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v85, v23);
    else
      memmove(v23, v22, v19);
    v24 = *(unsigned __int16 *)(v17 + 12);
    v25 = v24 & 0xF;
    v26 = v24 >> 4;
    v27 = v25 + v26;
    if ( v25 + v26 )
    {
      v28 = -1;
      v29 = v73;
      do
      {
        ++v28;
        v30 = Src;
        --v27;
        v73 = (void *)v74;
        v74 = (unsigned __int64)Src;
        Src = v29;
        v31 = (_BYTE *)*(&v116 + (v28 & 3));
        v32 = v26--;
        if ( v32 <= 0 )
          GetFixupScan((__int64)v85, v29);
        else
          memmove(v29, v30, v19);
        v70 = (__int64)v29;
        v29 = v73;
        v76 = SharpenInput(v85[0], v76, (__int64)v73, v74, v70, v71);
        ExpYDIB_ExpCX(v81, (unsigned __int8 *)(v72 + v76), v31, &v31[v80]);
      }
      while ( v27 );
      v17 = v78;
      v16 = v28;
      v18 = v82;
    }
    v33 = *(__int64 **)(v17 + 40);
    v34 = *(_DWORD *)(v17 + 16);
    while ( v34 )
    {
      v79 = v34 - 1;
      v35 = *v33;
      v77 = *v33;
      v84 = v33 + 1;
      if ( (v35 & 0x8000u) != 0 )
      {
        v36 = v74;
        v37 = v73;
        v38 = (unsigned __int64)Src;
        v73 = (void *)v74;
        v74 = (unsigned __int64)Src;
        Src = GetFixupScan((__int64)v85, v37);
        ++v16;
        v76 = SharpenInput(v85[0], v76, v36, v38, (__int64)Src, v71);
        v39 = (_BYTE *)*(&v116 + (v16 & 3));
        ExpYDIB_ExpCX(v81, (unsigned __int8 *)(v76 + v72), v39, &v39[v80]);
        v35 &= 0x3FFFu;
      }
      v40 = v18;
      v41 = v113;
      v42 = -v35;
      v43 = -WORD1(v77);
      v44 = -WORD2(v77);
      v45 = 4096 - HIWORD(v77);
      v46 = *(&v116 + (v16 & 3));
      v47 = (unsigned __int8 *)*(&v116 + ((v16 - 1) & 3));
      if ( v35 )
      {
        v48 = (int *)(v18 + 2048);
        do
        {
          v42 += v35;
          v43 += WORD1(v77);
          v44 += WORD2(v77);
          *(v48 - 512) = v42;
          v45 += HIWORD(v77);
          *(v48 - 256) = v43;
          *v48 = v44;
          v48[256] = v45;
          ++v48;
        }
        while ( (unsigned __int64)(v48 - 512) < v83 );
        v18 = v82;
        v49 = (unsigned __int8 *)(*(&v116 + ((v16 + 1) & 3)) + 1);
        v50 = (unsigned __int8 *)(*(&v116 + ((v16 - 2) & 3)) + 1);
        ++v46;
        do
        {
          v41[2] = (*(_DWORD *)(v82 + 4LL * v49[1])
                  + *(_DWORD *)(v82 + 4LL * v47[2] + 2048)
                  + *(_DWORD *)(v82 + 4LL * v50[1] + 1024)
                  + *(_DWORD *)(v82 + 4LL * *(unsigned __int8 *)(v46 + 1) + 3072)) >> 13;
          v51 = *(unsigned __int8 *)v46;
          v46 += 3LL;
          v52 = *v50;
          v50 += 3;
          v53 = *(_DWORD *)(v82 + 4 * v52 + 1024)
              + *(_DWORD *)(v82 + 4 * v51 + 3072)
              + *(_DWORD *)(v82 + 4LL * v47[1] + 2048);
          v54 = *v49;
          v49 += 3;
          v41[1] = (*(_DWORD *)(v82 + 4 * v54) + v53) >> 13;
          v55 = *v47;
          v47 += 3;
          v40 = (unsigned int)((*(_DWORD *)(v82 + 4 * v55 + 2048)
                              + *(_DWORD *)(v82 + 4LL * *(v49 - 4))
                              + *(_DWORD *)(v82 + 4LL * *(v50 - 4) + 1024)
                              + *(_DWORD *)(v82 + 4LL * *(unsigned __int8 *)(v46 - 4) + 3072)) >> 13);
          *v41 = v40;
          v41 += v115;
        }
        while ( v41 != v114 );
      }
      else if ( WORD1(v77) )
      {
        v56 = (int *)(v18 + 2048);
        do
        {
          v43 += WORD1(v77);
          v44 += WORD2(v77);
          v45 += HIWORD(v77);
          *(v56 - 256) = v43;
          *v56 = v44;
          v56[256] = v45;
          ++v56;
        }
        while ( (unsigned __int64)(v56 - 512) < v18 + 1024 );
        v57 = (unsigned __int8 *)(*(&v116 + ((v16 - 2) & 3)) + 1);
        ++v46;
        do
        {
          v41[2] = (*(_DWORD *)(v18 + 4LL * v47[2] + 2048)
                  + *(_DWORD *)(v18 + 4LL * v57[1] + 1024)
                  + *(_DWORD *)(v18 + 4LL * *(unsigned __int8 *)(v46 + 1) + 3072)) >> 13;
          v58 = *v57;
          v57 += 3;
          v59 = *(unsigned __int8 *)v46;
          v46 += 3LL;
          v41[1] = (*(_DWORD *)(v18 + 4 * v59 + 3072)
                  + *(_DWORD *)(v18 + 4 * v58 + 1024)
                  + *(_DWORD *)(v18 + 4LL * v47[1] + 2048)) >> 13;
          v60 = *v47;
          v47 += 3;
          v40 = (unsigned int)((*(_DWORD *)(v18 + 4 * v60 + 2048)
                              + *(_DWORD *)(v18 + 4LL * *(v57 - 4) + 1024)
                              + *(_DWORD *)(v18 + 4LL * *(unsigned __int8 *)(v46 - 4) + 3072)) >> 13);
          *v41 = v40;
          v41 += v115;
        }
        while ( v41 != v114 );
      }
      else if ( WORD2(v77) )
      {
        v61 = (int *)(v18 + 3072);
        do
        {
          v44 += WORD2(v77);
          v45 += HIWORD(v77);
          *(v61 - 256) = v44;
          *v61++ = v45;
        }
        while ( (unsigned __int64)(v61 - 768) < v18 + 1024 );
        v47 -= v46;
        v62 = &v47[v46 + 1];
        do
        {
          v41[2] = (*(_DWORD *)(v18 + 4LL * v62[1] + 2048)
                  + *(_DWORD *)(v18 + 4LL * *(unsigned __int8 *)(v46 + 2) + 3072)) >> 13;
          v63 = *v62;
          v62 += 3;
          v41[1] = (*(_DWORD *)(v18 + 4 * v63 + 2048) + *(_DWORD *)(v18 + 4LL * *(unsigned __int8 *)(v46 + 1) + 3072)) >> 13;
          v64 = *(unsigned __int8 *)v46;
          v46 += 3LL;
          v40 = (unsigned int)((*(_DWORD *)(v18 + 4 * v64 + 3072) + *(_DWORD *)(v18 + 4LL * *(v62 - 4) + 2048)) >> 13);
          *v41 = v40;
          v41 += v115;
        }
        while ( v41 != v114 );
      }
      else
      {
        do
        {
          v45 += HIWORD(v77);
          *(_DWORD *)(v40 + 3072) = v45;
          v40 += 4LL;
        }
        while ( v40 < v18 + 1024 );
        do
        {
          v41[2] = *(int *)(v18 + 4LL * *(unsigned __int8 *)(v46 + 2) + 3072) >> 13;
          v41[1] = *(int *)(v18 + 4LL * *(unsigned __int8 *)(v46 + 1) + 3072) >> 13;
          v65 = *(unsigned __int8 *)v46;
          v46 += 3LL;
          *v41 = *(int *)(v18 + 4 * v65 + 3072) >> 13;
          v41 += v115;
        }
        while ( v41 != v114 );
      }
      v66 = v85[0];
      if ( SLOBYTE(v85[0]) < 0 )
      {
        v91(v85, v40, v46, v47);
        v66 = v85[0];
      }
      if ( (v66 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v85);
        LOBYTE(v66) = v85[0];
      }
      if ( (v66 & 0x10) != 0 )
      {
        MappingBGRF(v109, v110, v97, v104);
        v67 = v107 + v104;
        if ( v67 == v105 )
          v67 = v106;
        v104 = v67;
      }
      v92(v85, v111, v112, v87, v96, v98, v98 + v102, v103, v93);
      v68 = v101 + v98;
      if ( v68 == v99 )
        v68 = v100;
      v87 += v90;
      v34 = v79;
      v98 = v68;
      v33 = v84;
    }
  }
  return v89;
}

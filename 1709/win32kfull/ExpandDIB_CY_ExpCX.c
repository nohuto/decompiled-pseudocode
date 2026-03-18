/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1C0245860
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C007A57C (GetFixupScan.c)
 *     SharpenInput @ 0x1C0127A50 (SharpenInput.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0243B3C (AlphaBlendBGRF.c)
 *     ExpYDIB_ExpCX @ 0x1C0244908 (ExpYDIB_ExpCX.c)
 *     MappingBGRF @ 0x1C0247FD0 (MappingBGRF.c)
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
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  size_t v19; // r12
  __int64 v20; // r8
  __int16 v21; // cx
  char *v22; // r14
  char *v23; // rdi
  unsigned int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // r15d
  char *v28; // rbx
  char *v29; // r14
  int v30; // eax
  __int64 *v31; // rcx
  int v32; // eax
  unsigned __int16 v33; // di
  char *v34; // rdx
  unsigned __int64 v35; // rsi
  _BYTE *v36; // r8
  unsigned __int64 v37; // rdx
  _BYTE *v38; // r9
  int v39; // esi
  int v40; // r10d
  int v41; // ecx
  int v42; // r11d
  unsigned __int64 v43; // r8
  int *v44; // rdx
  unsigned __int8 *v45; // rdi
  unsigned __int8 *v46; // rsi
  unsigned __int8 *v47; // r10
  unsigned __int8 *v48; // r11
  int v49; // eax
  int v50; // r8d
  int v51; // eax
  int v52; // r8d
  __int64 v53; // rax
  int *v54; // rdx
  unsigned __int8 *v55; // rdi
  unsigned __int8 *v56; // r11
  unsigned __int8 *v57; // r10
  int v58; // eax
  int v59; // r8d
  int v60; // eax
  int v61; // eax
  unsigned __int8 *v62; // r10
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  __int16 v66; // ax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v70; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v71; // [rsp+58h] [rbp-B0h]
  __int64 v72; // [rsp+58h] [rbp-B0h]
  unsigned __int8 *v73; // [rsp+60h] [rbp-A8h]
  unsigned __int8 *v74; // [rsp+60h] [rbp-A8h]
  int v75; // [rsp+68h] [rbp-A0h]
  unsigned int v76; // [rsp+6Ch] [rbp-9Ch]
  char *v77; // [rsp+70h] [rbp-98h]
  char *v78; // [rsp+78h] [rbp-90h]
  char *Src; // [rsp+80h] [rbp-88h]
  unsigned __int64 v80; // [rsp+88h] [rbp-80h]
  __int64 v81; // [rsp+98h] [rbp-70h]
  int v82; // [rsp+98h] [rbp-70h]
  __int64 v83; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v84; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v85; // [rsp+B0h] [rbp-58h]
  __int64 *v86; // [rsp+B8h] [rbp-50h]
  int v87[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v88; // [rsp+100h] [rbp-8h]
  __int64 v89; // [rsp+150h] [rbp+48h]
  int v90; // [rsp+158h] [rbp+50h]
  unsigned int v91; // [rsp+15Ch] [rbp+54h]
  int v92; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v93)(int *, unsigned __int64, unsigned __int64); // [rsp+188h] [rbp+80h]
  void (__fastcall *v94)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v95; // [rsp+1E0h] [rbp+D8h]
  __int64 v96; // [rsp+1F8h] [rbp+F0h]
  __int64 v97; // [rsp+200h] [rbp+F8h]
  __int64 v98; // [rsp+248h] [rbp+140h]
  __int64 v99; // [rsp+250h] [rbp+148h]
  __int64 v100; // [rsp+260h] [rbp+158h]
  __int64 v101; // [rsp+268h] [rbp+160h]
  __int64 v102; // [rsp+270h] [rbp+168h]
  int v103; // [rsp+278h] [rbp+170h]
  int v104; // [rsp+27Ch] [rbp+174h]
  int v105; // [rsp+280h] [rbp+178h]
  __int64 v106; // [rsp+288h] [rbp+180h]
  __int64 v107; // [rsp+290h] [rbp+188h]
  __int64 v108; // [rsp+298h] [rbp+190h]
  int v109; // [rsp+2A0h] [rbp+198h]
  __int64 v110; // [rsp+2E0h] [rbp+1D8h]
  __int64 v111; // [rsp+2E8h] [rbp+1E0h]
  __int64 v112; // [rsp+2F0h] [rbp+1E8h]
  __int64 v113; // [rsp+2F8h] [rbp+1F0h]
  __int64 v114; // [rsp+300h] [rbp+1F8h]
  _BYTE *v115; // [rsp+308h] [rbp+200h]
  _BYTE *v116; // [rsp+310h] [rbp+208h]
  int v117; // [rsp+318h] [rbp+210h]
  unsigned __int64 v118; // [rsp+328h] [rbp+220h]
  __int64 v119; // [rsp+330h] [rbp+228h]
  __int64 v120; // [rsp+338h] [rbp+230h]
  __int64 v121; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v87;
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
    v17 = v97;
    v81 = v97;
    v18 = *(_QWORD *)(v97 + 32);
    v84 = *(unsigned __int64 **)(v96 + 40);
    v71 = v18;
    v85 = v18 + 1024;
    v19 = 3 * v88;
    v75 = 3 * v88;
    v20 = 3 * v90;
    v118 = v18 + 4096;
    v83 = v20;
    v119 = v20 + v18 + 4096;
    v120 = v119 + v20;
    v21 = *(_WORD *)(v96 + 12);
    v121 = v119 + v20 + v20;
    v22 = (char *)(v20 + 9 + v121 + v19 + 18);
    v77 = (char *)(v20 + 9 + v121);
    v23 = &v22[v19 + 18];
    v78 = v22;
    v80 = v110 + 9;
    Src = v23;
    v76 = 3 * ((*(_WORD *)(v96 + 8) & 1) + (v21 & 0xF));
    GetFixupScan((__int64)v87, v22);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v87, v23);
    else
      memmove(v23, v22, v19);
    v24 = *(unsigned __int16 *)(v17 + 12);
    v25 = v24 & 0xF;
    v26 = v24 >> 4;
    v27 = v25 + v26;
    if ( v25 + v26 )
    {
      v28 = v22;
      v29 = v77;
      do
      {
        ++v16;
        v77 = v28;
        v28 = Src;
        Src = v29;
        --v27;
        v30 = v26--;
        v73 = (unsigned __int8 *)*(&v118 + (v16 & 3));
        if ( v30 <= 0 )
          GetFixupScan((__int64)v87, v29);
        else
          memmove(v29, v28, v19);
        v70 = (__int64)v29;
        v29 = v77;
        v80 = SharpenInput(v87[0], v80, (__int64)v77, (unsigned __int64)v28, v70, v75);
        ExpYDIB_ExpCX(v84, (unsigned __int8 *)(v76 + v80 - 3), v73, &v73[v83]);
      }
      while ( v27 );
      v17 = v81;
      v78 = v28;
      v22 = v28;
      v18 = v71;
    }
    v31 = *(__int64 **)(v17 + 40);
    v32 = *(_DWORD *)(v17 + 16);
    while ( v32 )
    {
      v82 = v32 - 1;
      v33 = *v31;
      v72 = *v31;
      v86 = v31 + 1;
      if ( (v33 & 0x8000u) != 0 )
      {
        v34 = v77;
        v35 = (unsigned __int64)Src;
        v78 = Src;
        v77 = v22;
        Src = (char *)GetFixupScan((__int64)v87, v34);
        ++v16;
        v80 = SharpenInput(v87[0], v80, (__int64)v22, v35, (__int64)Src, v75);
        v36 = (_BYTE *)*(&v118 + (v16 & 3));
        ExpYDIB_ExpCX(v84, (unsigned __int8 *)(v76 - 3LL + v80), v36, &v36[v83]);
        v33 &= 0x3FFFu;
      }
      v37 = v18;
      v38 = v115;
      v39 = -v33;
      v40 = -WORD1(v72);
      v41 = -WORD2(v72);
      v42 = 4096 - HIWORD(v72);
      v43 = *(&v118 + (v16 & 3));
      v74 = (unsigned __int8 *)*(&v118 + ((v16 - 1) & 3));
      if ( v33 )
      {
        v44 = (int *)(v18 + 2048);
        do
        {
          v39 += v33;
          v40 += WORD1(v72);
          v41 += WORD2(v72);
          *(v44 - 512) = v39;
          v42 += HIWORD(v72);
          *(v44 - 256) = v40;
          *v44 = v41;
          v44[256] = v42;
          ++v44;
        }
        while ( (unsigned __int64)(v44 - 512) < v85 );
        v45 = v74;
        v46 = (unsigned __int8 *)(v43 + 1);
        v47 = (unsigned __int8 *)(*(&v118 + ((v16 + 1) & 3)) + 1);
        v48 = (unsigned __int8 *)(*(&v118 + ((v16 - 2) & 3)) + 1);
        do
        {
          v38[2] = (*(_DWORD *)(v18 + 4LL * v47[1])
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v45[2] + 512))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v48[1] + 256))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v46[1] + 768))) >> 13;
          v49 = *v48;
          v48 += 3;
          v50 = *(_DWORD *)(v18 + 4LL * (unsigned int)(v49 + 256))
              + *(_DWORD *)(v18 + 4LL * ((unsigned int)v45[1] + 512));
          v51 = *v46;
          v46 += 3;
          v52 = *(_DWORD *)(v18 + 4LL * (unsigned int)(v51 + 768)) + v50;
          v53 = *v47;
          v47 += 3;
          v38[1] = (*(_DWORD *)(v18 + 4 * v53) + v52) >> 13;
          v37 = (unsigned int)*(v46 - 4) + 768;
          LODWORD(v53) = *v45;
          v45 += 3;
          v43 = (unsigned int)((*(_DWORD *)(v18 + 4LL * *(v47 - 4))
                              + *(_DWORD *)(v18 + 4LL * (unsigned int)(v53 + 512))
                              + *(_DWORD *)(v18 + 4LL * ((unsigned int)*(v48 - 4) + 256))
                              + *(_DWORD *)(v18 + 4 * v37)) >> 13);
          *v38 = v43;
          v38 += v117;
        }
        while ( v38 != v116 );
      }
      else if ( WORD1(v72) )
      {
        v54 = (int *)(v18 + 2048);
        do
        {
          v40 += WORD1(v72);
          v41 += WORD2(v72);
          v42 += HIWORD(v72);
          *(v54 - 256) = v40;
          *v54 = v41;
          v54[256] = v42;
          ++v54;
        }
        while ( (unsigned __int64)(v54 - 512) < v18 + 1024 );
        v55 = v74;
        v56 = (unsigned __int8 *)(v43 + 1);
        v57 = (unsigned __int8 *)(*(&v118 + ((v16 - 2) & 3)) + 1);
        do
        {
          v38[2] = (*(_DWORD *)(v18 + 4LL * ((unsigned int)v55[2] + 512))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v57[1] + 256))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v56[1] + 768))) >> 13;
          v58 = *v57;
          v57 += 3;
          v59 = *(_DWORD *)(v18 + 4LL * (unsigned int)(v58 + 256))
              + *(_DWORD *)(v18 + 4LL * ((unsigned int)v55[1] + 512));
          v60 = *v56;
          v56 += 3;
          v38[1] = (*(_DWORD *)(v18 + 4LL * (unsigned int)(v60 + 768)) + v59) >> 13;
          v37 = (unsigned int)*(v56 - 4) + 768;
          v61 = *v55;
          v55 += 3;
          v43 = (unsigned int)((*(_DWORD *)(v18 + 4LL * (unsigned int)(v61 + 512))
                              + *(_DWORD *)(v18 + 4LL * ((unsigned int)*(v57 - 4) + 256))
                              + *(_DWORD *)(v18 + 4 * v37)) >> 13);
          *v38 = v43;
          v38 += v117;
        }
        while ( v38 != v116 );
      }
      else if ( WORD2(v72) )
      {
        v37 = v18 + 3072;
        do
        {
          v41 += WORD2(v72);
          v42 += HIWORD(v72);
          *(_DWORD *)(v37 - 1024) = v41;
          *(_DWORD *)v37 = v42;
          v37 += 4LL;
        }
        while ( v37 - 3072 < v18 + 1024 );
        v62 = v74 + 1;
        do
        {
          v38[2] = (*(_DWORD *)(v18 + 4LL * ((unsigned int)*(unsigned __int8 *)(v43 + 2) + 768))
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)v62[1] + 512))) >> 13;
          v63 = (unsigned int)*v62 + 512;
          v62 += 3;
          v38[1] = (*(_DWORD *)(v18 + 4 * v63)
                  + *(_DWORD *)(v18 + 4LL * ((unsigned int)*(unsigned __int8 *)(v43 + 1) + 768))) >> 13;
          v64 = (unsigned int)*(unsigned __int8 *)v43 + 768;
          v43 += 3LL;
          *v38 = (*(_DWORD *)(v18 + 4 * v64) + *(_DWORD *)(v18 + 4LL * ((unsigned int)*(v62 - 4) + 512))) >> 13;
          v38 += v117;
        }
        while ( v38 != v116 );
      }
      else
      {
        do
        {
          v42 += HIWORD(v72);
          *(_DWORD *)(v37 + 3072) = v42;
          v37 += 4LL;
        }
        while ( v37 < v18 + 1024 );
        do
        {
          v38[2] = *(int *)(v18 + 4LL * ((unsigned int)*(unsigned __int8 *)(v43 + 2) + 768)) >> 13;
          v38[1] = *(int *)(v18 + 4LL * ((unsigned int)*(unsigned __int8 *)(v43 + 1) + 768)) >> 13;
          v65 = *(unsigned __int8 *)v43;
          v43 += 3LL;
          *v38 = *(int *)(v18 + 4LL * (unsigned int)(v65 + 768)) >> 13;
          v38 += v117;
        }
        while ( v38 != v116 );
      }
      v66 = v87[0];
      if ( SLOBYTE(v87[0]) < 0 )
      {
        v93(v87, v37, v43);
        v66 = v87[0];
      }
      if ( (v66 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v87);
        LOBYTE(v66) = v87[0];
      }
      if ( (v66 & 0x10) != 0 )
      {
        MappingBGRF(v111, v112, v99, v106);
        v67 = v109 + v106;
        if ( v67 == v107 )
          v67 = v108;
        v106 = v67;
      }
      v94(v87, v113, v114, v89, v98, v100, v100 + v104, v105, v95);
      v22 = v78;
      v68 = v103 + v100;
      if ( v68 == v101 )
        v68 = v102;
      v89 += v92;
      v32 = v82;
      v100 = v68;
      v31 = v86;
    }
  }
  return v91;
}

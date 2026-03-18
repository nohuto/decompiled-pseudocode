/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1C0245210
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00A2E5C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024216C (AlphaBlendBGRF.c)
 *     GrayExpYDIB_ExpCX @ 0x1C02446F4 (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1C0245C20 (GraySharpenInput.c)
 *     MappingBGRF @ 0x1C02465A0 (MappingBGRF.c)
 */

__int64 __fastcall GrayExpandDIB_CY_ExpCX(__int64 a1)
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
  int v16; // r13d
  __int64 v17; // r14
  size_t v18; // r12
  unsigned __int64 v19; // rdi
  char *v20; // rbx
  char *v21; // rsi
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // r15d
  int v26; // r14d
  void *v27; // rsi
  const void *v28; // rcx
  _BYTE *v29; // r13
  int v30; // eax
  __int64 *v31; // rcx
  int v32; // eax
  unsigned __int16 v33; // si
  int v34; // r14d
  void *v35; // rdx
  int v36; // ebx
  _BYTE *v37; // r8
  unsigned __int64 v38; // rdx
  _WORD *v39; // r9
  int v40; // r11d
  int v41; // r14d
  int v42; // ecx
  __int64 v43; // r10
  unsigned __int8 *v44; // r8
  int *v45; // rdx
  int v46; // ebx
  __int64 v47; // r10
  unsigned __int64 v48; // r11
  unsigned __int64 v49; // rbx
  int v50; // edx
  __int64 v51; // rax
  int *v52; // rdx
  int v53; // ebx
  unsigned __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // rcx
  int v57; // edx
  __int64 v58; // rax
  int *v59; // rdx
  int v60; // ebx
  __int64 v61; // rax
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rax
  __int16 v65; // ax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v69; // [rsp+28h] [rbp-E0h]
  int v70; // [rsp+58h] [rbp-B0h]
  int v71; // [rsp+5Ch] [rbp-ACh]
  int v72; // [rsp+60h] [rbp-A8h]
  void *v73; // [rsp+68h] [rbp-A0h]
  void *v74; // [rsp+70h] [rbp-98h]
  __int64 v75; // [rsp+78h] [rbp-90h]
  void *Src; // [rsp+80h] [rbp-88h]
  __int64 v77; // [rsp+88h] [rbp-80h]
  int v78; // [rsp+98h] [rbp-70h]
  __int64 v79; // [rsp+A0h] [rbp-68h]
  __int64 v80; // [rsp+B0h] [rbp-58h]
  unsigned __int64 *v81; // [rsp+B8h] [rbp-50h]
  __int64 *v82; // [rsp+C8h] [rbp-40h]
  int v83[14]; // [rsp+D8h] [rbp-30h] BYREF
  int v84; // [rsp+110h] [rbp+8h]
  __int64 v85; // [rsp+160h] [rbp+58h]
  int v86; // [rsp+168h] [rbp+60h]
  unsigned int v87; // [rsp+16Ch] [rbp+64h]
  int v88; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v89)(int *, unsigned __int64, unsigned __int8 *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v90)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v91; // [rsp+1F0h] [rbp+E8h]
  __int64 v92; // [rsp+208h] [rbp+100h]
  __int64 v93; // [rsp+210h] [rbp+108h]
  __int64 v94; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  __int64 v96; // [rsp+270h] [rbp+168h]
  __int64 v97; // [rsp+278h] [rbp+170h]
  __int64 v98; // [rsp+280h] [rbp+178h]
  int v99; // [rsp+288h] [rbp+180h]
  int v100; // [rsp+28Ch] [rbp+184h]
  int v101; // [rsp+290h] [rbp+188h]
  __int64 v102; // [rsp+298h] [rbp+190h]
  __int64 v103; // [rsp+2A0h] [rbp+198h]
  __int64 v104; // [rsp+2A8h] [rbp+1A0h]
  int v105; // [rsp+2B0h] [rbp+1A8h]
  __int64 v106; // [rsp+2F0h] [rbp+1E8h]
  __int64 v107; // [rsp+2F8h] [rbp+1F0h]
  __int64 v108; // [rsp+300h] [rbp+1F8h]
  __int64 v109; // [rsp+308h] [rbp+200h]
  __int64 v110; // [rsp+310h] [rbp+208h]
  _WORD *v111; // [rsp+318h] [rbp+210h]
  _WORD *v112; // [rsp+320h] [rbp+218h]
  int v113; // [rsp+328h] [rbp+220h]
  unsigned __int64 v114; // [rsp+338h] [rbp+230h]
  __int64 v115; // [rsp+340h] [rbp+238h]
  __int64 v116; // [rsp+348h] [rbp+240h]
  __int64 v117; // [rsp+350h] [rbp+248h]

  v1 = 4LL;
  v2 = v83;
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
    v17 = v93;
    v18 = v84;
    v75 = v93;
    v19 = *(_QWORD *)(v93 + 32);
    v71 = v84;
    v70 = -1;
    v72 = (*(_WORD *)(v92 + 12) & 0xF) - 1 + (*(_WORD *)(v92 + 8) & 1);
    v81 = *(unsigned __int64 **)(v92 + 40);
    v114 = v19 + 4096;
    v115 = v86 + v19 + 4096;
    v80 = v86;
    v116 = v115 + v86;
    v117 = v116 + v86;
    v20 = (char *)(v86 + 3LL + v117 + v84 + 6LL);
    v73 = (void *)(v86 + 3LL + v117);
    v21 = &v20[v84 + 6];
    v74 = v20;
    LODWORD(v77) = v106 + 3;
    Src = v21;
    GetFixupScan((__int64)v83, v20);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v83, v21);
    else
      memmove(v21, v20, v18);
    v22 = *(unsigned __int16 *)(v17 + 12);
    v23 = v22 & 0xF;
    v24 = v22 >> 4;
    v25 = v23 + v24;
    if ( v23 + v24 )
    {
      v26 = -1;
      v27 = v73;
      do
      {
        ++v26;
        v28 = Src;
        --v25;
        v73 = v74;
        v74 = Src;
        Src = v27;
        v29 = (_BYTE *)*(&v114 + (v26 & 3));
        v30 = v24--;
        if ( v30 <= 0 )
          GetFixupScan((__int64)v83, v27);
        else
          memmove(v27, v28, v18);
        v69 = (__int64)v27;
        v27 = v73;
        v77 = GraySharpenInput(v83[0], v77, (int)v73, (int)v74, v69, v18);
        GrayExpYDIB_ExpCX(v81, (unsigned __int8 *)(v72 + v77), v29, &v29[v80]);
      }
      while ( v25 );
      v70 = v26;
      v16 = v26;
      v17 = v75;
    }
    v31 = *(__int64 **)(v17 + 40);
    v32 = *(_DWORD *)(v17 + 16);
    while ( v32 )
    {
      v78 = v32 - 1;
      v33 = *v31;
      v79 = *v31;
      v82 = v31 + 1;
      if ( (v33 & 0x8000u) != 0 )
      {
        v34 = (int)v74;
        v35 = v73;
        v36 = (int)Src;
        v73 = v74;
        v74 = Src;
        Src = GetFixupScan((__int64)v83, v35);
        v77 = GraySharpenInput(v83[0], v77, v34, v36, (__int64)Src, v71);
        v70 = v16 + 1;
        v37 = (_BYTE *)*(&v114 + (((_BYTE)v16 + 1) & 3));
        GrayExpYDIB_ExpCX(v81, (unsigned __int8 *)(v77 + v72), v37, &v37[v80]);
        v33 &= 0x3FFFu;
      }
      v38 = v19;
      v39 = v111;
      v40 = -WORD1(v79);
      v41 = -v33;
      v42 = -WORD2(v79);
      v43 = *(&v114 + (v70 & 3));
      v44 = (unsigned __int8 *)*(&v114 + (((_BYTE)v70 - 1) & 3));
      if ( v33 )
      {
        v45 = (int *)(v19 + 2048);
        v46 = 256 - HIWORD(v79);
        do
        {
          v41 += v33;
          v40 += WORD1(v79);
          v42 += WORD2(v79);
          *(v45 - 512) = v41;
          v46 += HIWORD(v79);
          *(v45 - 256) = v40;
          *v45 = v42;
          v45[256] = v46;
          ++v45;
        }
        while ( (unsigned __int64)(v45 - 512) < v19 + 1024 );
        v16 = v70;
        v47 = v43 - (_QWORD)v44;
        v48 = *(&v114 + (((_BYTE)v70 - 2) & 3)) - (_QWORD)v44;
        v49 = *(&v114 + (((_BYTE)v70 + 1) & 3)) - (_QWORD)v44;
        do
        {
          v50 = *(_DWORD *)(v19 + 4LL * v44[v49])
              + *(_DWORD *)(v19 + 4LL * v44[v48] + 1024)
              + *(_DWORD *)(v19 + 4LL * v44[v47] + 3072);
          v51 = *v44++;
          v38 = (unsigned int)((*(_DWORD *)(v19 + 4 * v51 + 2048) + v50) >> 5);
          *v39 = v38;
          v39 = (_WORD *)((char *)v39 + v113);
        }
        while ( v39 != v112 );
      }
      else if ( WORD1(v79) )
      {
        v52 = (int *)(v19 + 2048);
        v53 = 256 - HIWORD(v79);
        do
        {
          v40 += WORD1(v79);
          v42 += WORD2(v79);
          v53 += HIWORD(v79);
          *(v52 - 256) = v40;
          *v52 = v42;
          v52[256] = v53;
          ++v52;
        }
        while ( (unsigned __int64)(v52 - 512) < v19 + 1024 );
        v16 = v70;
        v54 = *(&v114 + (((_BYTE)v70 - 2) & 3)) - (_QWORD)v44;
        v55 = v43 - (_QWORD)v44;
        do
        {
          v56 = v44[v54];
          v57 = *(_DWORD *)(v19 + 4LL * v44[v55] + 3072);
          v58 = *v44++;
          v38 = (unsigned int)((*(_DWORD *)(v19 + 4 * v58 + 2048) + *(_DWORD *)(v19 + 4 * v56 + 1024) + v57) >> 5);
          *v39 = v38;
          v39 = (_WORD *)((char *)v39 + v113);
        }
        while ( v39 != v112 );
      }
      else
      {
        if ( WORD2(v79) )
        {
          v59 = (int *)(v19 + 3072);
          v60 = 256 - HIWORD(v79);
          do
          {
            v42 += WORD2(v79);
            v60 += HIWORD(v79);
            *(v59 - 256) = v42;
            *v59++ = v60;
          }
          while ( (unsigned __int64)(v59 - 768) < v19 + 1024 );
          v44 -= v43;
          do
          {
            v61 = v44[v43];
            v62 = *(unsigned __int8 *)v43++;
            v38 = (unsigned int)((*(_DWORD *)(v19 + 4 * v62 + 3072) + *(_DWORD *)(v19 + 4 * v61 + 2048)) >> 5);
            *v39 = v38;
            v39 = (_WORD *)((char *)v39 + v113);
          }
          while ( v39 != v112 );
        }
        else
        {
          v63 = 256 - HIWORD(v79);
          do
          {
            v63 += HIWORD(v79);
            *(_DWORD *)(v38 + 3072) = v63;
            v38 += 4LL;
          }
          while ( v38 < v19 + 1024 );
          do
          {
            v64 = *(unsigned __int8 *)v43++;
            *v39 = *(int *)(v19 + 4 * v64 + 3072) >> 5;
            v39 = (_WORD *)((char *)v39 + v113);
          }
          while ( v39 != v112 );
        }
        v16 = v70;
      }
      v65 = v83[0];
      if ( SLOBYTE(v83[0]) < 0 )
      {
        v89(v83, v38, v44);
        v65 = v83[0];
      }
      if ( (v65 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v83);
        LOBYTE(v65) = v83[0];
      }
      if ( (v65 & 0x10) != 0 )
      {
        MappingBGRF(v107, v108, v95, v102);
        v66 = v105 + v102;
        if ( v66 == v103 )
          v66 = v104;
        v102 = v66;
      }
      v90(v83, v109, v110, v85, v94, v96, v96 + v100, v101, v91);
      v67 = v99 + v96;
      if ( v67 == v97 )
        v67 = v98;
      v85 += v88;
      v32 = v78;
      v96 = v67;
      v31 = v82;
    }
  }
  return v87;
}

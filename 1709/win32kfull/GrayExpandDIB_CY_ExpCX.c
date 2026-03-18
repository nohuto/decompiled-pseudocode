/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1C0246C30
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C007A57C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0243B3C (AlphaBlendBGRF.c)
 *     GrayExpYDIB_ExpCX @ 0x1C0246104 (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1C0247650 (GraySharpenInput.c)
 *     MappingBGRF @ 0x1C0247FD0 (MappingBGRF.c)
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
  __int64 v16; // rsi
  size_t v17; // r15
  unsigned __int64 v18; // r12
  char *v19; // rdi
  char *v20; // r13
  char *v21; // rbx
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // r14d
  char *v26; // rsi
  _BYTE *v27; // r13
  int v28; // eax
  __int64 *v29; // rcx
  int v30; // eax
  unsigned __int16 v31; // di
  void *v32; // rdx
  int v33; // ebx
  _BYTE *v34; // r8
  unsigned __int64 v35; // rdx
  _WORD *v36; // r11
  unsigned __int64 v37; // r8
  int v38; // esi
  int v39; // ecx
  __int64 v40; // r10
  unsigned __int8 *v41; // r9
  int *v42; // rdx
  int v43; // ebx
  __int64 v44; // r10
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rdi
  int v47; // r8d
  int v48; // eax
  int *v49; // rdx
  int v50; // ebx
  unsigned __int64 v51; // rbx
  __int64 v52; // r10
  int v53; // r8d
  int v54; // eax
  int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // eax
  __int16 v60; // ax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v64; // [rsp+28h] [rbp-E0h]
  char v65; // [rsp+58h] [rbp-B0h]
  __int64 v66; // [rsp+60h] [rbp-A8h]
  int v67; // [rsp+68h] [rbp-A0h]
  unsigned int v68; // [rsp+6Ch] [rbp-9Ch]
  char *v69; // [rsp+78h] [rbp-90h]
  char *v70; // [rsp+80h] [rbp-88h]
  char *Src; // [rsp+88h] [rbp-80h]
  __int64 v72; // [rsp+90h] [rbp-78h]
  __int64 v73; // [rsp+A0h] [rbp-68h]
  int v74; // [rsp+A0h] [rbp-68h]
  __int64 v75; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v76; // [rsp+B0h] [rbp-58h]
  __int64 *v77; // [rsp+C0h] [rbp-48h]
  int v78[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v79; // [rsp+100h] [rbp-8h]
  __int64 v80; // [rsp+150h] [rbp+48h]
  int v81; // [rsp+158h] [rbp+50h]
  unsigned int v82; // [rsp+15Ch] [rbp+54h]
  int v83; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v84)(int *, unsigned __int64, unsigned __int64, unsigned __int8 *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v85)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v86; // [rsp+1E0h] [rbp+D8h]
  __int64 v87; // [rsp+1F8h] [rbp+F0h]
  __int64 v88; // [rsp+200h] [rbp+F8h]
  __int64 v89; // [rsp+248h] [rbp+140h]
  __int64 v90; // [rsp+250h] [rbp+148h]
  __int64 v91; // [rsp+260h] [rbp+158h]
  __int64 v92; // [rsp+268h] [rbp+160h]
  __int64 v93; // [rsp+270h] [rbp+168h]
  int v94; // [rsp+278h] [rbp+170h]
  int v95; // [rsp+27Ch] [rbp+174h]
  int v96; // [rsp+280h] [rbp+178h]
  __int64 v97; // [rsp+288h] [rbp+180h]
  __int64 v98; // [rsp+290h] [rbp+188h]
  __int64 v99; // [rsp+298h] [rbp+190h]
  int v100; // [rsp+2A0h] [rbp+198h]
  __int64 v101; // [rsp+2E0h] [rbp+1D8h]
  __int64 v102; // [rsp+2E8h] [rbp+1E0h]
  __int64 v103; // [rsp+2F0h] [rbp+1E8h]
  __int64 v104; // [rsp+2F8h] [rbp+1F0h]
  __int64 v105; // [rsp+300h] [rbp+1F8h]
  _WORD *v106; // [rsp+308h] [rbp+200h]
  _WORD *v107; // [rsp+310h] [rbp+208h]
  int v108; // [rsp+318h] [rbp+210h]
  unsigned __int64 v109; // [rsp+328h] [rbp+220h]
  __int64 v110; // [rsp+330h] [rbp+228h]
  __int64 v111; // [rsp+338h] [rbp+230h]
  __int64 v112; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v78;
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
    v16 = v88;
    v17 = v79;
    v65 = -1;
    v18 = *(_QWORD *)(v88 + 32);
    v73 = v88;
    v67 = v79;
    v68 = (*(_WORD *)(v87 + 12) & 0xF) + (*(_WORD *)(v87 + 8) & 1);
    v76 = *(unsigned __int64 **)(v87 + 40);
    v109 = v18 + 4096;
    v110 = v81 + v18 + 4096;
    v75 = v81;
    v111 = v110 + v81;
    v19 = (char *)(v111 + v81 + v81 + 3LL);
    v112 = v111 + v81;
    v20 = &v19[v79 + 6];
    v70 = v19;
    v69 = v20;
    v21 = &v20[v79 + 6];
    LODWORD(v72) = v101 + 3;
    Src = v21;
    GetFixupScan((__int64)v78, v20);
    if ( (*(_BYTE *)(v16 + 8) & 1) != 0 )
      GetFixupScan((__int64)v78, v21);
    else
      memmove(v21, v20, v17);
    v22 = *(unsigned __int16 *)(v16 + 12);
    v23 = v22 & 0xF;
    v24 = v22 >> 4;
    v25 = v23 + v24;
    if ( v23 + v24 )
    {
      v26 = v20;
      do
      {
        --v25;
        v70 = v26;
        v26 = Src;
        ++v65;
        Src = v19;
        v27 = (_BYTE *)*(&v109 + (v65 & 3));
        v28 = v24--;
        if ( v28 <= 0 )
          GetFixupScan((__int64)v78, v19);
        else
          memmove(v19, v26, v17);
        v64 = (__int64)v19;
        v19 = v70;
        v72 = GraySharpenInput(v78[0], v72, (int)v70, (int)v26, v64, v17);
        GrayExpYDIB_ExpCX(v76, (unsigned __int8 *)(v72 + v68 - 1LL), v27, &v27[v75]);
      }
      while ( v25 );
      v69 = v26;
      v20 = v26;
      v16 = v73;
    }
    v29 = *(__int64 **)(v16 + 40);
    v30 = *(_DWORD *)(v16 + 16);
    while ( v30 )
    {
      v74 = v30 - 1;
      v31 = *v29;
      v66 = *v29;
      v77 = v29 + 1;
      if ( (v31 & 0x8000u) != 0 )
      {
        v32 = v70;
        v33 = (int)Src;
        v69 = Src;
        v70 = v20;
        Src = (char *)GetFixupScan((__int64)v78, v32);
        v72 = GraySharpenInput(v78[0], v72, (int)v20, v33, (__int64)Src, v67);
        v34 = (_BYTE *)*(&v109 + (++v65 & 3));
        GrayExpYDIB_ExpCX(v76, (unsigned __int8 *)(v68 - 1LL + v72), v34, &v34[v75]);
        v31 &= 0x3FFFu;
      }
      v35 = v18;
      v36 = v106;
      v37 = (unsigned int)-WORD1(v66);
      v38 = -v31;
      v39 = -WORD2(v66);
      v40 = *(&v109 + (v65 & 3));
      v41 = (unsigned __int8 *)*(&v109 + ((v65 - 1) & 3));
      if ( v31 )
      {
        v42 = (int *)(v18 + 2048);
        v43 = 256 - HIWORD(v66);
        do
        {
          v38 += v31;
          LODWORD(v37) = WORD1(v66) + (_DWORD)v37;
          v39 += WORD2(v66);
          *(v42 - 512) = v38;
          v43 += HIWORD(v66);
          *(v42 - 256) = v37;
          *v42 = v39;
          v42[256] = v43;
          ++v42;
        }
        while ( (unsigned __int64)(v42 - 512) < v18 + 1024 );
        v44 = v40 - (_QWORD)v41;
        v45 = *(&v109 + ((v65 - 2) & 3)) - (_QWORD)v41;
        v46 = *(&v109 + ((v65 + 1) & 3)) - (_QWORD)v41;
        do
        {
          v35 = (unsigned int)v41[v44] + 768;
          v47 = *(_DWORD *)(v18 + 4LL * v41[v46])
              + *(_DWORD *)(v18 + 4LL * ((unsigned int)v41[v45] + 256))
              + *(_DWORD *)(v18 + 4 * v35);
          v48 = *v41++;
          v37 = (unsigned int)((*(_DWORD *)(v18 + 4LL * (unsigned int)(v48 + 512)) + v47) >> 5);
          *v36 = v37;
          v36 = (_WORD *)((char *)v36 + v108);
        }
        while ( v36 != v107 );
      }
      else if ( WORD1(v66) )
      {
        v49 = (int *)(v18 + 2048);
        v50 = 256 - HIWORD(v66);
        do
        {
          LODWORD(v37) = WORD1(v66) + (_DWORD)v37;
          v39 += WORD2(v66);
          v50 += HIWORD(v66);
          *(v49 - 256) = v37;
          *v49 = v39;
          v49[256] = v50;
          ++v49;
        }
        while ( (unsigned __int64)(v49 - 512) < v18 + 1024 );
        v51 = *(&v109 + ((v65 - 2) & 3)) - (_QWORD)v41;
        v52 = v40 - (_QWORD)v41;
        do
        {
          v35 = (unsigned int)v41[v52] + 768;
          v53 = *(_DWORD *)(v18 + 4LL * ((unsigned int)v41[v51] + 256)) + *(_DWORD *)(v18 + 4 * v35);
          v54 = *v41++;
          v37 = (unsigned int)((*(_DWORD *)(v18 + 4LL * (unsigned int)(v54 + 512)) + v53) >> 5);
          *v36 = v37;
          v36 = (_WORD *)((char *)v36 + v108);
        }
        while ( v36 != v107 );
      }
      else if ( WORD2(v66) )
      {
        v35 = v18 + 3072;
        v55 = 256 - HIWORD(v66);
        v37 = v18 + 1024;
        do
        {
          v39 += WORD2(v66);
          v55 += HIWORD(v66);
          *(_DWORD *)(v35 - 1024) = v39;
          *(_DWORD *)v35 = v55;
          v35 += 4LL;
        }
        while ( v35 - 3072 < v37 );
        v41 -= v40;
        do
        {
          v56 = (unsigned int)v41[v40] + 512;
          v57 = (unsigned int)*(unsigned __int8 *)v40++ + 768;
          *v36 = (*(_DWORD *)(v18 + 4 * v57) + *(_DWORD *)(v18 + 4 * v56)) >> 5;
          v36 = (_WORD *)((char *)v36 + v108);
        }
        while ( v36 != v107 );
      }
      else
      {
        v58 = 256 - HIWORD(v66);
        do
        {
          v58 += HIWORD(v66);
          *(_DWORD *)(v35 + 3072) = v58;
          v35 += 4LL;
        }
        while ( v35 < v18 + 1024 );
        do
        {
          v59 = *(unsigned __int8 *)v40++;
          *v36 = *(int *)(v18 + 4LL * (unsigned int)(v59 + 768)) >> 5;
          v36 = (_WORD *)((char *)v36 + v108);
        }
        while ( v36 != v107 );
      }
      v60 = v78[0];
      if ( SLOBYTE(v78[0]) < 0 )
      {
        v84(v78, v35, v37, v41);
        v60 = v78[0];
      }
      if ( (v60 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v78);
        LOBYTE(v60) = v78[0];
      }
      if ( (v60 & 0x10) != 0 )
      {
        MappingBGRF(v102, v103, v90, v97);
        v61 = v100 + v97;
        if ( v61 == v98 )
          v61 = v99;
        v97 = v61;
      }
      v85(v78, v104, v105, v80, v89, v91, v91 + v95, v96, v86);
      v20 = v69;
      v62 = v94 + v91;
      if ( v62 == v92 )
        v62 = v93;
      v80 += v83;
      v30 = v74;
      v91 = v62;
      v29 = v77;
    }
  }
  return v82;
}

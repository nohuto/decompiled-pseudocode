/*
 * XREFs of FastExpAA_CY @ 0x1C01272F0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C007A57C (GetFixupScan.c)
 *     Do13 @ 0x1C01279A0 (Do13.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0243B3C (AlphaBlendBGRF.c)
 *     Do1141 @ 0x1C0244184 (Do1141.c)
 *     Do1319 @ 0x1C02442A0 (Do1319.c)
 *     Do3121 @ 0x1C0244374 (Do3121.c)
 *     Do3263 @ 0x1C0244478 (Do3263.c)
 *     Do35 @ 0x1C02445A8 (Do35.c)
 *     Do5225 @ 0x1C02446A0 (Do5225.c)
 *     Do6251 @ 0x1C02447F4 (Do6251.c)
 *     MappingBGRF @ 0x1C0247FD0 (MappingBGRF.c)
 */

__int64 __fastcall FastExpAA_CY(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD *v3; // rax
  int *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // r11d
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // r14
  unsigned __int16 *v23; // rsi
  __int64 v24; // r10
  int v25; // ebx
  char *v26; // r12
  __int64 v27; // r8
  unsigned int v28; // r15d
  char *v29; // rdx
  char *v30; // rdi
  __int64 (__fastcall *v31)(int, int, int, int, int); // rax
  __int64 (__fastcall *v32)(int, int, int, int, __int64, int); // rax
  int v33; // ebx
  int v34; // ebx
  __int64 i; // rcx
  char *v36; // r13
  int v37; // ecx
  int v38; // edx
  int v39; // r8d
  char *v40; // rsi
  char *v41; // r14
  unsigned int v42; // eax
  int v43; // r8d
  char *v44; // rdx
  __int64 v45; // rdx
  __int16 v46; // ax
  __int64 v47; // rcx
  char *v49; // rdx
  int v50; // r9d
  int v51; // edx
  char *v52; // rdx
  char *v53; // rcx
  int v54; // r9d
  int v55; // edx
  __int64 v56; // rax
  int v57; // [rsp+58h] [rbp-B0h]
  unsigned int Size; // [rsp+5Ch] [rbp-ACh]
  int Size_4; // [rsp+60h] [rbp-A8h]
  int v60; // [rsp+64h] [rbp-A4h]
  unsigned __int16 *v61; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall *v62)(int, int, int, int, __int64, int); // [rsp+78h] [rbp-90h]
  __int64 v63; // [rsp+80h] [rbp-88h]
  __int64 v64; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall *v65)(int, int, int, int, int); // [rsp+90h] [rbp-78h]
  __int64 v66; // [rsp+98h] [rbp-70h]
  char *v68; // [rsp+A8h] [rbp-60h]
  char *v69; // [rsp+B0h] [rbp-58h]
  char *v70; // [rsp+B8h] [rbp-50h]
  char *v71; // [rsp+C0h] [rbp-48h]
  char *v72; // [rsp+C8h] [rbp-40h]
  int v73; // [rsp+D8h] [rbp-30h] BYREF
  char v74; // [rsp+E0h] [rbp-28h]
  unsigned int v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  unsigned int v77; // [rsp+16Ch] [rbp+64h]
  int v78; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v79)(int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v80)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  __int64 v82; // [rsp+208h] [rbp+100h]
  __int64 v83; // [rsp+210h] [rbp+108h]
  __int64 v84; // [rsp+258h] [rbp+150h]
  __int64 v85; // [rsp+260h] [rbp+158h]
  __int64 v86; // [rsp+270h] [rbp+168h]
  __int64 v87; // [rsp+278h] [rbp+170h]
  __int64 v88; // [rsp+280h] [rbp+178h]
  int v89; // [rsp+288h] [rbp+180h]
  int v90; // [rsp+28Ch] [rbp+184h]
  int v91; // [rsp+290h] [rbp+188h]
  __int64 v92; // [rsp+298h] [rbp+190h]
  __int64 v93; // [rsp+2A0h] [rbp+198h]
  __int64 v94; // [rsp+2A8h] [rbp+1A0h]
  int v95; // [rsp+2B0h] [rbp+1A8h]
  void *Src; // [rsp+2F0h] [rbp+1E8h]
  __int64 v97; // [rsp+2F8h] [rbp+1F0h]
  __int64 v98; // [rsp+300h] [rbp+1F8h]
  __int64 v99; // [rsp+308h] [rbp+200h]
  __int64 v100; // [rsp+310h] [rbp+208h]
  __int64 v101; // [rsp+318h] [rbp+210h]
  __int64 v102; // [rsp+320h] [rbp+218h]
  int v103; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = &v73;
  do
  {
    v5 = v3[1];
    *(_OWORD *)v4 = *v3;
    v6 = v3[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v3[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v3[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v3[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v3[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = v3[1];
  *(_OWORD *)v4 = *v3;
  v13 = v3[2];
  *((_OWORD *)v4 + 1) = v12;
  v14 = v3[3];
  *((_OWORD *)v4 + 2) = v13;
  v15 = v3[4];
  v16 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v14;
  *((_OWORD *)v4 + 4) = v15;
  *((_QWORD *)v4 + 10) = v16;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v17 = v82;
    v18 = v103;
    v19 = v101;
    v20 = v102;
    v21 = *(_QWORD *)(v82 + 96);
    Size_4 = v103;
    **(_WORD **)(v82 + 88) += *(unsigned __int8 *)(v82 + 82);
    *(_WORD *)(v21 - 2) += *(unsigned __int8 *)(v17 + 83);
    v22 = v83;
    v66 = v83;
    v23 = *(unsigned __int16 **)(v83 + 88);
    v61 = v23;
    v64 = v19 - v18 * *(unsigned __int8 *)(v17 + 82);
    v24 = v18 * *(unsigned __int8 *)(v17 + 83) + v20;
    *(_WORD *)(*(_QWORD *)(v83 + 96) - 2LL) += *(unsigned __int8 *)(v83 + 83);
    v25 = *(unsigned __int8 *)(v22 + 80);
    v63 = v24;
    Size = (v74 & 4) != 0 ? 1 : 3;
    v26 = (char *)(*(_QWORD *)(v22 + 32) + 3 * Size);
    v27 = (int)(6 * Size + v75);
    v28 = v75;
    v68 = v26;
    v69 = &v26[v27];
    v29 = &v26[v27 + v27 + v27];
    v70 = &v26[v27 + v27];
    v71 = v29;
    v30 = &v29[v27];
    v31 = GrayFastExpAA_CX;
    v72 = &v29[v27];
    if ( (v74 & 4) == 0 )
      v31 = FastExpAA_CX;
    v65 = v31;
    v32 = GraySharpenInput;
    if ( (v74 & 4) == 0 )
      v32 = SharpenInput;
    v62 = v32;
    GetFixupScan((__int64)&v73, v29);
    v33 = v25 - 1;
    if ( v33 < 0 )
      v73 |= 0x20u;
    GetFixupScan((__int64)&v73, v30);
    if ( v33 - 1 < 0 )
      v73 |= 0x20u;
    Src = (char *)Src + 9;
    v34 = -3;
    while ( 1 )
    {
      for ( i = 0LL; i < 4; ++i )
        (&v68)[i] = (&v69)[i];
      v72 = v26;
      GetFixupScan((__int64)&v73, v26);
      v36 = v70;
      v62(0, (int)v70, (int)v70, (int)v71, (__int64)v26, v28);
      v26 = v68;
      if ( ++v34 >= 0 )
      {
        v37 = *v23;
        v57 = v37;
        v38 = v37;
        v61 = v23 + 1;
        v39 = v37;
        if ( !v34 )
        {
          v38 = *(unsigned __int8 *)(v22 + 82) + v37;
          v57 = v38;
        }
        v40 = (char *)Src;
        if ( v37 )
          break;
      }
      v42 = v77;
LABEL_35:
      v23 = v61;
      if ( !v42 )
        return *(unsigned int *)(a1 + 148);
    }
    v41 = v69;
    v42 = v77;
    while ( 1 )
    {
      v43 = v39 - 1;
      v60 = v43;
      if ( !v42 )
        return *(unsigned int *)(a1 + 148);
      switch ( v38 )
      {
        case 1:
          Do5225((_DWORD)v40, (_DWORD)v26, (_DWORD)v41, (_DWORD)v36, v28);
          break;
        case 2:
          v44 = v36;
          if ( v43 == 1 )
            v44 = v26;
          Do13(v40, v44, v41, v28);
          break;
        case 3:
          v53 = v40;
          if ( v43 != 1 )
          {
            v52 = v36;
            if ( v43 == 2 )
              v52 = v26;
            goto LABEL_68;
          }
          Do1141((_DWORD)v40, (_DWORD)v26, (_DWORD)v41, (_DWORD)v36, v28);
          break;
        case 4:
          switch ( v43 )
          {
            case 0:
              v52 = v36;
              goto LABEL_60;
            case 1:
              v54 = (int)v26;
              v55 = (int)v36;
              goto LABEL_63;
            case 2:
              v54 = (int)v36;
              v55 = (int)v26;
LABEL_63:
              Do3121((_DWORD)v40, v55, (_DWORD)v41, v54, v28);
              goto LABEL_26;
            case 3:
              v52 = v26;
LABEL_60:
              v53 = v40;
LABEL_68:
              Do35(v53, v52, v41, v28);
              break;
          }
          break;
        case 5:
          switch ( v43 )
          {
            case 0:
              v49 = v36;
              goto LABEL_53;
            case 1:
              v50 = (int)v26;
              v51 = (int)v36;
              goto LABEL_50;
            case 2:
              Do3263((_DWORD)v40, (_DWORD)v26, (_DWORD)v41, (_DWORD)v36, v28);
              goto LABEL_26;
            case 3:
              v50 = (int)v36;
              v51 = (int)v26;
LABEL_50:
              Do6251((_DWORD)v40, v51, (_DWORD)v41, v50, v28);
              goto LABEL_26;
            case 4:
              v49 = v26;
LABEL_53:
              Do1319(v40, v49, v41, v28);
              break;
          }
          break;
      }
LABEL_26:
      memmove(&v40[-Size], v40, Size);
      memmove(&v40[v28], &v40[(int)v28 - (unsigned __int64)Size], Size);
      v65(v82, (int)v40, v64, v63, Size_4);
      v46 = v73;
      if ( (v73 & 0x80u) != 0 )
      {
        v79(&v73);
        v46 = v73;
      }
      if ( (v46 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v73, v45);
        LOBYTE(v46) = v73;
      }
      if ( (v46 & 0x10) != 0 )
      {
        MappingBGRF(v97, v98, v85, v92);
        v56 = v95 + v92;
        if ( v56 == v93 )
          v56 = v94;
        v92 = v56;
      }
      v80(&v73, v99, v100, v76, v84, v86, v86 + v90, v91, v81);
      v39 = v60;
      v47 = v89 + v86;
      if ( v47 == v87 )
        v47 = v88;
      v76 += v78;
      v38 = v57;
      v42 = v77 - 1;
      v86 = v47;
      --v77;
      if ( !v60 )
      {
        v22 = v66;
        goto LABEL_35;
      }
    }
  }
  return v77;
}

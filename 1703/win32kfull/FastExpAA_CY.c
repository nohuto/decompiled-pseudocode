/*
 * XREFs of FastExpAA_CY @ 0x1C011DA50
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00A2E5C (GetFixupScan.c)
 *     Do13 @ 0x1C011E100 (Do13.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024216C (AlphaBlendBGRF.c)
 *     Do1141 @ 0x1C02427BC (Do1141.c)
 *     Do1319 @ 0x1C02428D4 (Do1319.c)
 *     Do3121 @ 0x1C02429A8 (Do3121.c)
 *     Do3263 @ 0x1C0242AAC (Do3263.c)
 *     Do35 @ 0x1C0242BDC (Do35.c)
 *     Do5225 @ 0x1C0242CD4 (Do5225.c)
 *     Do6251 @ 0x1C0242E2C (Do6251.c)
 *     MappingBGRF @ 0x1C02465A0 (MappingBGRF.c)
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
  unsigned int v26; // r9d
  char *v27; // r12
  __int64 v28; // rdx
  unsigned int v29; // r15d
  char *v30; // rcx
  char *v31; // rax
  char *v32; // rdi
  __int64 (__fastcall *v33)(int, int, int, int, int); // rcx
  __int64 (__fastcall *v34)(int, int, int, int, __int64, int); // rcx
  int v35; // ebx
  int v36; // ebx
  __int64 i; // rcx
  char *v38; // r13
  int v39; // ecx
  int v40; // edx
  int v41; // r8d
  char *v42; // rsi
  char *v43; // r14
  unsigned int v44; // eax
  int v45; // r8d
  char *v46; // rdx
  __int64 v47; // rdx
  __int16 v48; // ax
  __int64 v49; // rcx
  char *v51; // rdx
  int v52; // r9d
  int v53; // edx
  char *v54; // rdx
  char *v55; // rcx
  int v56; // r9d
  int v57; // edx
  __int64 v58; // rax
  int v59; // [rsp+58h] [rbp-B0h]
  unsigned int Size; // [rsp+5Ch] [rbp-ACh]
  int Size_4; // [rsp+60h] [rbp-A8h]
  int v62; // [rsp+64h] [rbp-A4h]
  unsigned __int16 *v63; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall *v64)(int, int, int, int, __int64, int); // [rsp+78h] [rbp-90h]
  __int64 v65; // [rsp+80h] [rbp-88h]
  __int64 v66; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall *v67)(int, int, int, int, int); // [rsp+90h] [rbp-78h]
  __int64 v68; // [rsp+98h] [rbp-70h]
  char *v70; // [rsp+A8h] [rbp-60h]
  char *v71; // [rsp+B0h] [rbp-58h]
  char *v72; // [rsp+B8h] [rbp-50h]
  char *v73; // [rsp+C0h] [rbp-48h]
  char *v74; // [rsp+C8h] [rbp-40h]
  int v75; // [rsp+D8h] [rbp-30h] BYREF
  char v76; // [rsp+E0h] [rbp-28h]
  unsigned int v77; // [rsp+118h] [rbp+10h]
  __int64 v78; // [rsp+160h] [rbp+58h]
  unsigned int v79; // [rsp+16Ch] [rbp+64h]
  int v80; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v81)(int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v82)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v83; // [rsp+1F0h] [rbp+E8h]
  __int64 v84; // [rsp+208h] [rbp+100h]
  __int64 v85; // [rsp+210h] [rbp+108h]
  __int64 v86; // [rsp+258h] [rbp+150h]
  __int64 v87; // [rsp+260h] [rbp+158h]
  __int64 v88; // [rsp+270h] [rbp+168h]
  __int64 v89; // [rsp+278h] [rbp+170h]
  __int64 v90; // [rsp+280h] [rbp+178h]
  int v91; // [rsp+288h] [rbp+180h]
  int v92; // [rsp+28Ch] [rbp+184h]
  int v93; // [rsp+290h] [rbp+188h]
  __int64 v94; // [rsp+298h] [rbp+190h]
  __int64 v95; // [rsp+2A0h] [rbp+198h]
  __int64 v96; // [rsp+2A8h] [rbp+1A0h]
  int v97; // [rsp+2B0h] [rbp+1A8h]
  void *Src; // [rsp+2F0h] [rbp+1E8h]
  __int64 v99; // [rsp+2F8h] [rbp+1F0h]
  __int64 v100; // [rsp+300h] [rbp+1F8h]
  __int64 v101; // [rsp+308h] [rbp+200h]
  __int64 v102; // [rsp+310h] [rbp+208h]
  __int64 v103; // [rsp+318h] [rbp+210h]
  __int64 v104; // [rsp+320h] [rbp+218h]
  int v105; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = &v75;
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
    v17 = v84;
    v18 = v105;
    v19 = v103;
    v20 = v104;
    v21 = *(_QWORD *)(v84 + 96);
    Size_4 = v105;
    **(_WORD **)(v84 + 88) += *(unsigned __int8 *)(v84 + 82);
    *(_WORD *)(v21 - 2) += *(unsigned __int8 *)(v17 + 83);
    v22 = v85;
    v68 = v85;
    v23 = *(unsigned __int16 **)(v85 + 88);
    v63 = v23;
    v66 = v19 - v18 * *(unsigned __int8 *)(v17 + 82);
    v24 = v18 * *(unsigned __int8 *)(v17 + 83) + v20;
    *(_WORD *)(*(_QWORD *)(v85 + 96) - 2LL) += *(unsigned __int8 *)(v85 + 83);
    v25 = *(unsigned __int8 *)(v22 + 80);
    v65 = v24;
    v26 = (~v76 & 4 | 2u) >> 1;
    Size = v26;
    v27 = (char *)(*(_QWORD *)(v22 + 32) + 3 * v26);
    v28 = (int)(6 * v26 + v77);
    v29 = v77;
    v70 = v27;
    v30 = &v27[v28 + v28];
    v71 = &v27[v28];
    v31 = &v30[v28];
    v72 = v30;
    v32 = &v30[v28 + v28];
    v73 = &v30[v28];
    v74 = v32;
    v33 = GrayFastExpAA_CX;
    if ( v26 != 1 )
      v33 = FastExpAA_CX;
    v67 = v33;
    v34 = GraySharpenInput;
    if ( v26 != 1 )
      v34 = SharpenInput;
    v64 = v34;
    GetFixupScan((__int64)&v75, v31);
    v35 = v25 - 1;
    if ( v35 < 0 )
      v75 |= 0x20u;
    GetFixupScan((__int64)&v75, v32);
    if ( v35 - 1 < 0 )
      v75 |= 0x20u;
    Src = (char *)Src + 9;
    v36 = -3;
    while ( 1 )
    {
      for ( i = 0LL; i < 4; ++i )
        (&v70)[i] = (&v71)[i];
      v74 = v27;
      GetFixupScan((__int64)&v75, v27);
      v38 = v72;
      v64(0, (int)v72, (int)v72, (int)v73, (__int64)v27, v29);
      v27 = v70;
      if ( ++v36 >= 0 )
      {
        v39 = *v23;
        v59 = v39;
        v40 = v39;
        v63 = v23 + 1;
        v41 = v39;
        if ( !v36 )
        {
          v40 = *(unsigned __int8 *)(v22 + 82) + v39;
          v59 = v40;
        }
        v42 = (char *)Src;
        if ( v39 )
          break;
      }
      v44 = v79;
LABEL_35:
      v23 = v63;
      if ( !v44 )
        return *(unsigned int *)(a1 + 148);
    }
    v43 = v71;
    v44 = v79;
    while ( 1 )
    {
      v45 = v41 - 1;
      v62 = v45;
      if ( !v44 )
        return *(unsigned int *)(a1 + 148);
      switch ( v40 )
      {
        case 1:
          Do5225((_DWORD)v42, (_DWORD)v27, (_DWORD)v43, (_DWORD)v38, v29);
          break;
        case 2:
          v46 = v38;
          if ( v45 == 1 )
            v46 = v27;
          Do13(v42, v46, v43, v29);
          break;
        case 3:
          v55 = v42;
          if ( v45 != 1 )
          {
            v54 = v38;
            if ( v45 == 2 )
              v54 = v27;
            goto LABEL_68;
          }
          Do1141((_DWORD)v42, (_DWORD)v27, (_DWORD)v43, (_DWORD)v38, v29);
          break;
        case 4:
          switch ( v45 )
          {
            case 0:
              v54 = v38;
              goto LABEL_60;
            case 1:
              v56 = (int)v27;
              v57 = (int)v38;
              goto LABEL_63;
            case 2:
              v56 = (int)v38;
              v57 = (int)v27;
LABEL_63:
              Do3121((_DWORD)v42, v57, (_DWORD)v43, v56, v29);
              goto LABEL_26;
            case 3:
              v54 = v27;
LABEL_60:
              v55 = v42;
LABEL_68:
              Do35(v55, v54, v43, v29);
              break;
          }
          break;
        case 5:
          switch ( v45 )
          {
            case 0:
              v51 = v38;
              goto LABEL_53;
            case 1:
              v52 = (int)v27;
              v53 = (int)v38;
              goto LABEL_50;
            case 2:
              Do3263((_DWORD)v42, (_DWORD)v27, (_DWORD)v43, (_DWORD)v38, v29);
              goto LABEL_26;
            case 3:
              v52 = (int)v38;
              v53 = (int)v27;
LABEL_50:
              Do6251((_DWORD)v42, v53, (_DWORD)v43, v52, v29);
              goto LABEL_26;
            case 4:
              v51 = v27;
LABEL_53:
              Do1319(v42, v51, v43, v29);
              break;
          }
          break;
      }
LABEL_26:
      memmove(&v42[-Size], v42, Size);
      memmove(&v42[v29], &v42[(int)v29 - (unsigned __int64)Size], Size);
      v67(v84, (int)v42, v66, v65, Size_4);
      v48 = v75;
      if ( (v75 & 0x80u) != 0 )
      {
        v81(&v75);
        v48 = v75;
      }
      if ( (v48 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v75, v47);
        LOBYTE(v48) = v75;
      }
      if ( (v48 & 0x10) != 0 )
      {
        MappingBGRF(v99, v100, v87, v94);
        v58 = v97 + v94;
        if ( v58 == v95 )
          v58 = v96;
        v94 = v58;
      }
      v82(&v75, v101, v102, v78, v86, v88, v88 + v92, v93, v83);
      v41 = v62;
      v49 = v91 + v88;
      if ( v49 == v89 )
        v49 = v90;
      v78 += v80;
      v40 = v59;
      v44 = v79 - 1;
      v88 = v49;
      --v79;
      if ( !v62 )
      {
        v22 = v68;
        goto LABEL_35;
      }
    }
  }
  return v79;
}

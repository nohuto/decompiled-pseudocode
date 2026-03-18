/*
 * XREFs of GrayShrinkDIB_CY @ 0x1C0245EB0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00A2E5C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024216C (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C02465A0 (MappingBGRF.c)
 */

__int64 __fastcall GrayShrinkDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rdx
  int *v16; // r13
  int v17; // r8d
  size_t v18; // r15
  char *v19; // r14
  char *v20; // rbx
  char *v21; // rsi
  char *v22; // r12
  int *v23; // rcx
  int v24; // eax
  char *v25; // rdi
  void *FixupScan; // rax
  char *v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // r12d
  int v30; // eax
  int v31; // edx
  unsigned __int8 *v32; // rdi
  void *v33; // rax
  char *v34; // r15
  _DWORD *v35; // r9
  __int16 v36; // ax
  int v37; // r10d
  int v38; // r8d
  int *v39; // rcx
  int v40; // edx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  _WORD *v44; // r8
  char *v45; // rbx
  __int64 v46; // r10
  _DWORD *v47; // r11
  __int64 v48; // rdx
  __int64 v49; // rax
  __int16 v50; // ax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 i; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  _WORD *v56; // rdx
  char *v57; // r8
  signed __int64 v58; // r14
  int v59; // ecx
  __int16 v60; // ax
  __int64 v61; // rax
  int v63; // [rsp+58h] [rbp-B0h]
  BOOL v64; // [rsp+5Ch] [rbp-ACh]
  int v65; // [rsp+60h] [rbp-A8h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  char *v67; // [rsp+70h] [rbp-98h]
  unsigned __int8 *v68; // [rsp+78h] [rbp-90h]
  __int16 *v69; // [rsp+80h] [rbp-88h]
  __int64 v70; // [rsp+88h] [rbp-80h]
  char *v71; // [rsp+90h] [rbp-78h]
  char *v72; // [rsp+98h] [rbp-70h]
  char *v73; // [rsp+A0h] [rbp-68h]
  int v74[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v75; // [rsp+130h] [rbp+28h]
  int v76; // [rsp+138h] [rbp+30h]
  int v77; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v78)(int *, __int64, _WORD *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v79)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v80; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v81)(__int64, void *, char *, char *, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v82; // [rsp+1D8h] [rbp+D0h]
  __int64 v83; // [rsp+1E0h] [rbp+D8h]
  __int64 v84; // [rsp+1E8h] [rbp+E0h]
  __int64 v85; // [rsp+228h] [rbp+120h]
  __int64 v86; // [rsp+230h] [rbp+128h]
  __int64 v87; // [rsp+240h] [rbp+138h]
  __int64 v88; // [rsp+248h] [rbp+140h]
  __int64 v89; // [rsp+250h] [rbp+148h]
  int v90; // [rsp+258h] [rbp+150h]
  int v91; // [rsp+25Ch] [rbp+154h]
  int v92; // [rsp+260h] [rbp+158h]
  __int64 v93; // [rsp+268h] [rbp+160h]
  __int64 v94; // [rsp+270h] [rbp+168h]
  __int64 v95; // [rsp+278h] [rbp+170h]
  int v96; // [rsp+280h] [rbp+178h]
  void *v97; // [rsp+2C0h] [rbp+1B8h]
  __int64 v98; // [rsp+2C8h] [rbp+1C0h]
  __int64 v99; // [rsp+2D0h] [rbp+1C8h]
  __int64 v100; // [rsp+2D8h] [rbp+1D0h]
  __int64 v101; // [rsp+2E0h] [rbp+1D8h]
  _WORD *v102; // [rsp+2E8h] [rbp+1E0h]
  int v103; // [rsp+2F8h] [rbp+1F0h]

  v1 = 4LL;
  v2 = v74;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = v83;
  v16 = *(int **)(v83 + 32);
  v17 = *(unsigned __int16 *)(v83 + 14);
  v70 = *(_QWORD *)(v83 + 24);
  v18 = 4 * v76;
  Size = v18;
  v19 = (char *)(v16 + 512);
  v71 = (char *)(v16 + 512);
  v20 = (char *)v16 + v18 + 2048;
  v72 = v20;
  v21 = &v20[v18];
  v73 = &v20[v18];
  v22 = &v20[v18 + v18];
  v68 = (unsigned __int8 *)v22;
  v67 = &v22[v76];
  if ( v17 )
  {
    v23 = v16;
    v24 = -v17;
    do
    {
      v24 += v17;
      *v23++ = v24;
    }
    while ( v23 < v16 + 256 );
    v25 = &v20[v18 + v18];
    FixupScan = GetFixupScan((__int64)v74, v97);
    v81(v82, FixupScan, v25, v67, 1);
    v27 = &v20[v18];
    do
    {
      v28 = (unsigned __int8)*v25++;
      *(_DWORD *)v27 = v16[v28];
      v27 += 4;
    }
    while ( v27 < v22 );
    v15 = v83;
    if ( !*(_WORD *)(v83 + 10) )
      v74[0] |= 0x20u;
  }
  v69 = *(__int16 **)(v15 + 40);
  v29 = 0;
  v30 = *(unsigned __int16 *)(v15 + 12);
  v31 = *(_DWORD *)(v15 + 16);
  v63 = v30;
  v64 = v30 == 1;
  if ( v31 )
  {
    do
    {
      v32 = v68;
      v65 = v31 - 1;
      v33 = GetFixupScan((__int64)v74, v97);
      v81(v82, v33, (char *)v68, v67, 1);
      v34 = &v21[v18];
      v35 = v21;
      v36 = *v69++;
      if ( (v36 & 0x4000) != 0 )
      {
        v37 = v36 & 0x3FFF;
        v38 = -v37;
        v39 = v16;
        v40 = *(_DWORD *)(v70 + 4) + ((v36 >> 15) & 1) - v37;
        v41 = v37 - (*(_DWORD *)(v70 + 4) + ((v36 >> 15) & 1));
        do
        {
          v38 += v37;
          v41 += v40;
          *v39 = v38;
          v39[256] = v41;
          ++v39;
        }
        while ( v39 < v16 + 256 );
        v42 = v63--;
        if ( v42 <= 0 )
        {
          v44 = v102;
          v45 = (char *)(v20 - v19);
          v46 = v19 - v21;
          do
          {
            v47 = (_DWORD *)((char *)v35 + v46);
            *v35 += v16[*v32];
            v48 = (unsigned int)((6 * *(_DWORD *)((char *)v35 + v46 + (_QWORD)v45)
                                - *(_DWORD *)((char *)v35 + v46)
                                - *v35) >> 7);
            if ( (v48 & 0xFF0000) != 0 )
              v48 = ~WORD1(v48);
            *v44 = v48;
            ++v35;
            v44 = (_WORD *)((char *)v44 + v103);
            v49 = *v32++;
            *v47 = v16[v49 + 256];
          }
          while ( v35 < (_DWORD *)v34 );
          v50 = v74[0];
          if ( SLOBYTE(v74[0]) < 0 )
          {
            v78(v74, v48, v44);
            v50 = v74[0];
          }
          if ( (v50 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v74);
            LOBYTE(v50) = v74[0];
          }
          if ( (v50 & 0x10) != 0 )
          {
            MappingBGRF(v98, v99, v86, v93);
            v51 = v96 + v93;
            if ( v51 == v94 )
              v51 = v95;
            v93 = v51;
          }
          v79(v74, v100, v101, v75, v85, v87, v87 + v91, v92, v80);
          v52 = v90 + v87;
          if ( v52 == v88 )
            v52 = v89;
          v75 += v77;
          ++v29;
          v87 = v52;
        }
        else
        {
          do
          {
            *v35 += v16[*v32];
            v43 = *v32++;
            *(_DWORD *)((char *)v35++ + v19 - v21) = v16[v43 + 256];
          }
          while ( v35 < (_DWORD *)v34 );
          if ( v64 )
          {
            memmove(v20, v21, Size);
            v64 = 0;
          }
        }
        v21 = v19;
        for ( i = 0LL; i < 2; ++i )
          (&v71)[i] = (&v72)[i];
        v20 = v72;
        v73 = v19;
        v19 = v71;
      }
      else
      {
        v54 = v70 + (((unsigned __int64)(unsigned __int16)v36 >> 5) & 0x400);
        do
        {
          v55 = *v32++;
          *v35++ += *(_DWORD *)(v54 + 4 * v55);
        }
        while ( v35 < (_DWORD *)v34 );
      }
      v31 = v65;
      v18 = Size;
    }
    while ( v65 );
  }
  if ( v75 != v84 )
  {
    v56 = v102;
    v57 = &v20[v18];
    v58 = v19 - v20;
    do
    {
      v59 = (5 * *(_DWORD *)v20 - *(_DWORD *)&v20[v58]) >> 7;
      if ( (v59 & 0xFF0000) != 0 )
        LOWORD(v59) = ~HIWORD(v59);
      *v56 = v59;
      v20 += 4;
      v56 = (_WORD *)((char *)v56 + v103);
    }
    while ( v20 < v57 );
    v60 = v74[0];
    if ( SLOBYTE(v74[0]) < 0 )
    {
      ((void (__fastcall *)(int *, _WORD *))v78)(v74, v56);
      v60 = v74[0];
    }
    if ( (v60 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v74);
      LOBYTE(v60) = v74[0];
    }
    if ( (v60 & 0x10) != 0 )
    {
      MappingBGRF(v98, v99, v86, v93);
      v61 = v96 + v93;
      if ( v61 == v94 )
        v61 = v95;
      v93 = v61;
    }
    v79(v74, v100, v101, v75, v85, v87, v87 + v91, v92, v80);
    ++v29;
  }
  return v29;
}

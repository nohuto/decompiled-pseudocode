/*
 * XREFs of ?GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x18003B030
 * Callers:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x18003B754 (-GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@.c)
 * Callees:
 *     OffsetBaseVertices @ 0x1800BF6C4 (OffsetBaseVertices.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall Mesh::GenerateGridAntialiasBorder(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        unsigned int *a10)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r11
  char v13; // r15
  __int64 *v14; // r13
  int v15; // r12d
  int v16; // r9d
  unsigned int v17; // r14d
  int v18; // ecx
  char *v19; // rdx
  char *v20; // r8
  char *v21; // r10
  __int64 v22; // rcx
  _DWORD *v23; // r14
  unsigned int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rsi
  bool v27; // zf
  int v28; // ebx
  int v29; // r9d
  int v30; // r12d
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r14
  unsigned __int64 v34; // r13
  __int64 v35; // rdi
  int v36; // r15d
  unsigned __int64 v37; // rbx
  int v38; // ebx
  __int64 v39; // rsi
  int v40; // r9d
  __int64 v41; // r11
  unsigned __int64 v42; // r12
  __int64 v43; // rsi
  int v44; // r13d
  __int64 v45; // r15
  int v46; // r14d
  unsigned __int64 v47; // rbx
  char v48; // r10
  int v49; // edx
  int v50; // r8d
  int v51; // r12d
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  char v56; // r10
  int v57; // edx
  int v58; // eax
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdi
  unsigned int i; // esi
  _DWORD *v67; // r10
  int v68; // eax
  int v69; // eax
  int v70; // r8d
  __int64 v71; // rcx
  int v72; // eax
  int v73; // eax
  int v74; // r8d
  int v75; // r12d
  unsigned int v76; // r14d
  unsigned int v77; // r10d
  __int64 v78; // r8
  int v79; // ebx
  __int16 v80; // r13
  int v81; // r9d
  int v82; // esi
  int v83; // r11d
  int v84; // r15d
  __int64 *v85; // r10
  unsigned __int16 *v86; // rcx
  unsigned __int16 v87; // r14
  int v88; // edx
  __int64 v89; // r12
  unsigned __int16 v90; // dx
  unsigned __int16 v91; // r13
  __int64 result; // rax
  int v94; // [rsp+34h] [rbp-CCh] BYREF
  char v95; // [rsp+38h] [rbp-C8h]
  int v96; // [rsp+3Ch] [rbp-C4h]
  unsigned int v97; // [rsp+40h] [rbp-C0h]
  int v98; // [rsp+44h] [rbp-BCh]
  unsigned int v99; // [rsp+48h] [rbp-B8h]
  int v100; // [rsp+4Ch] [rbp-B4h]
  int v101; // [rsp+50h] [rbp-B0h]
  int v102; // [rsp+54h] [rbp-ACh]
  int v103; // [rsp+58h] [rbp-A8h]
  int v104; // [rsp+5Ch] [rbp-A4h]
  __int64 v105; // [rsp+60h] [rbp-A0h]
  char *v106; // [rsp+68h] [rbp-98h]
  __int64 v107; // [rsp+70h] [rbp-90h]
  unsigned __int64 v108; // [rsp+78h] [rbp-88h]
  __int64 v109; // [rsp+80h] [rbp-80h]
  _DWORD *v110; // [rsp+88h] [rbp-78h]
  __int64 v111; // [rsp+90h] [rbp-70h]
  __int64 *v112; // [rsp+98h] [rbp-68h]
  __int64 v113; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+A8h] [rbp-58h]
  char *v115; // [rsp+B0h] [rbp-50h]
  __int64 v116; // [rsp+B8h] [rbp-48h] BYREF
  int v117; // [rsp+C0h] [rbp-40h]
  int v118; // [rsp+C4h] [rbp-3Ch]
  __int64 v119; // [rsp+C8h] [rbp-38h] BYREF
  int v120; // [rsp+D0h] [rbp-30h]
  int v121; // [rsp+D4h] [rbp-2Ch]
  char *v122; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v123; // [rsp+E0h] [rbp-20h]
  __int64 v124; // [rsp+E8h] [rbp-18h]
  _DWORD *v125; // [rsp+F0h] [rbp-10h]
  unsigned int *v126; // [rsp+F8h] [rbp-8h]
  __int64 v127; // [rsp+100h] [rbp+0h] BYREF
  int v128; // [rsp+108h] [rbp+8h]
  int v129; // [rsp+10Ch] [rbp+Ch]
  __int64 v130; // [rsp+110h] [rbp+10h] BYREF
  int v131; // [rsp+118h] [rbp+18h]
  int v132; // [rsp+11Ch] [rbp+1Ch]
  char *v133; // [rsp+120h] [rbp+20h]
  __int64 v134; // [rsp+128h] [rbp+28h]
  _DWORD v135[4]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v136[4]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v137[4]; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v138[4]; // [rsp+160h] [rbp+60h] BYREF

  v10 = a1;
  v135[3] = -1;
  v11 = 0LL;
  v12 = a5;
  v13 = a2;
  v125 = a7;
  v14 = a4;
  v107 = a1;
  v15 = 0;
  v124 = a8;
  v126 = a10;
  v112 = a4;
  v16 = *a7;
  v17 = *a10;
  v18 = *(_DWORD *)(a1 + 208);
  v95 = a2;
  LODWORD(v19) = *(_DWORD *)(v10 + 212);
  v105 = a5;
  v102 = v16;
  v99 = v17;
  v104 = v16;
  v98 = 0;
  v136[0] = (_DWORD)v19 * (v18 - 1);
  v136[2] = (_DWORD)v19 - 1;
  v96 = 65537;
  v94 = 257;
  v137[0] = v18;
  v137[1] = (_DWORD)v19;
  v137[2] = v18;
  v136[3] = v18 * (_DWORD)v19 - 1;
  v137[3] = (_DWORD)v19;
  v136[1] = 0;
  v135[0] = -(int)v19;
  v135[1] = 1;
  v135[2] = (_DWORD)v19;
  if ( !v13 )
    goto LABEL_33;
  v97 = 0;
  v111 = 0LL;
  v122 = (char *)v135 - v10;
  v19 = (char *)v137 - v10;
  v20 = (char *)v138 - v10;
  v133 = (char *)v137 - v10;
  v115 = (char *)v138 - v10;
  v21 = (char *)v136 - v10;
  v22 = -((__int64)&v94 + 1);
  v106 = (char *)v136 - v10;
  v23 = (_DWORD *)(v10 + 220);
  v134 = -((__int64)&v94 + 1);
  v24 = 0;
  v110 = (_DWORD *)(v10 + 220);
  v25 = 0LL;
  do
  {
    if ( v24 )
    {
      v26 = (__int64)&v94 + v25 + v22;
      v24 = v97;
    }
    else
    {
      v26 = 3LL;
    }
    v27 = *v23 == 12;
    v109 = v26;
    if ( v27 )
    {
      v28 = *(_DWORD *)((char *)v23 + (_QWORD)v19 - 220) - 1;
    }
    else
    {
      if ( *(_DWORD *)(v10 + 4 * v26 + 220) != 12 )
        goto LABEL_26;
      v28 = 1;
    }
    v100 = v28;
    if ( v28 > 0 )
    {
      v108 = 0LL;
      v29 = v15 + v16;
      v30 = *((_DWORD *)v14 + 2);
      v31 = *(_DWORD *)((char *)v23 + (_QWORD)v21 - 220) * v30;
      v101 = v29;
      *(_DWORD *)((char *)v23 + (_QWORD)v20 - 220) = v29;
      v113 = *v14 + v31;
      v103 = *(_DWORD *)((char *)v23 + (_QWORD)v122 - 220) * v30;
      v32 = *v14 + v30 * v29;
      v123 = (unsigned int)v28;
      v33 = v32;
      v34 = v108;
      v35 = v113;
      v36 = v103;
      v37 = v123;
      do
      {
        memcpy_0((void *)(v33 + v30 * (int)v34), (const void *)(v35 + v36 * (int)v34), (unsigned int)(8 * a6 + 16));
        ++v34;
      }
      while ( v34 < v37 );
      v10 = v107;
      v38 = v100;
      v39 = v109;
      v23 = v110;
      v25 = v111;
      v14 = v112;
      v40 = v101;
      v41 = v105;
      v42 = 0LL;
      v103 = *(_DWORD *)(v105 + 8);
      v114 = *(_QWORD *)v105 + *(_DWORD *)((char *)v110 + (_QWORD)v106 - 220) * v103;
      LODWORD(v108) = *(_DWORD *)((char *)v110 + (_QWORD)v122 - 220) * v103;
      if ( v100 )
      {
        v43 = *(_QWORD *)v105 + v103 * v101;
        v44 = v103;
        v45 = v114;
        v46 = v108;
        v47 = v123;
        do
        {
          memcpy_0((void *)(v43 + v44 * (int)v42), (const void *)(v45 + v46 * (int)v42), (unsigned int)(8 * a6 + 16));
          ++v42;
        }
        while ( v42 < v47 );
        v10 = v107;
        v38 = v100;
        v39 = v109;
        v23 = v110;
        v25 = v111;
        v14 = v112;
        v40 = v101;
        v41 = v105;
      }
      if ( (*(_BYTE *)v23 & 0xC) != 0 )
      {
        if ( (*(_BYTE *)v23 & 8) != 0 )
          v48 = *((_BYTE *)&v94 + v25) == 0;
        else
          v48 = *((_BYTE *)&v94 + v25);
        v49 = *(_DWORD *)(v41 + 8);
        v50 = *((_DWORD *)v14 + 2);
        v51 = a6;
        v52 = v49 * v40;
        v128 = v49;
        LOBYTE(v49) = v48;
        v131 = v50;
        v129 = v38;
        v53 = v52;
        v54 = v50 * v40;
        LOBYTE(v50) = a3;
        v127 = *(_QWORD *)v41 + v53;
        v132 = v38;
        v130 = *v14 + v54;
        LODWORD(v53) = v130;
        LOBYTE(v53) = *((_BYTE *)&v96 + v25);
        OffsetBaseVertices(v53, v49, v50, (unsigned int)&v130, (__int64)&v127, a6);
      }
      else
      {
        v51 = a6;
      }
      v55 = *(_DWORD *)(v10 + 4 * v39 + 220);
      if ( (v55 & 0xC) != 0 )
      {
        if ( (v55 & 8) != 0 )
          v56 = *((_BYTE *)&v94 + v39) == 0;
        else
          v56 = *((_BYTE *)&v94 + v39);
        v118 = 1;
        v57 = *(_DWORD *)(v105 + 8);
        v58 = v57 * v101;
        v117 = v57;
        LOBYTE(v57) = v56;
        v121 = 1;
        v60 = *((_DWORD *)v14 + 2);
        v61 = v60 * v101;
        v116 = *(_QWORD *)v105 + v58;
        v59 = v116;
        LOBYTE(v59) = *((_BYTE *)&v96 + v39);
        v120 = v60;
        LOBYTE(v60) = a3;
        v119 = *v14 + v61;
        OffsetBaseVertices(v59, v57, v60, (unsigned int)&v119, (__int64)&v116, v51);
      }
      v24 = v97;
      v15 = v38 + v98;
      v12 = v105;
      v16 = v102;
      v22 = v134;
      v19 = v133;
      v20 = v115;
      v21 = v106;
      v98 += v38;
    }
    v11 = 0LL;
LABEL_26:
    ++v24;
    ++v23;
    ++v25;
    v97 = v24;
    v110 = v23;
    v111 = v25;
  }
  while ( v24 < 4 );
  if ( v15 > 0 )
  {
    LODWORD(v19) = v16;
    v62 = (unsigned int)v15;
    do
    {
      *(_DWORD *)((int)v19 * *(_DWORD *)(v12 + 8) + *(_QWORD *)v12 + 12LL) = 0;
      v63 = (int)v19 * *((_DWORD *)v14 + 2);
      v64 = *v14;
      if ( *(_BYTE *)(v10 + 236) >= 0x80u )
        *(_BYTE *)(v63 + v64 + 15) = 0;
      else
        *(_DWORD *)(v63 + v64 + 12) = 0;
      LODWORD(v19) = (_DWORD)v19 + 1;
      --v62;
    }
    while ( v62 );
  }
  v13 = v95;
  v102 = v15 + v16;
LABEL_33:
  v65 = v10 - (_QWORD)v136;
  v107 = v65;
  for ( i = 0; i < 4; ++i )
  {
    v67 = &v136[v11];
    v68 = *(_DWORD *)((char *)v67 + v65 + 220);
    if ( (v68 & 0xC) != 0 )
    {
      if ( (v68 & 4) != 0 )
        LOBYTE(v19) = *((_BYTE *)&v94 + v11);
      else
        LOBYTE(v19) = *((_BYTE *)&v94 + v11) == 0;
      v69 = *v67 * *(_DWORD *)(v12 + 8);
      v70 = *((_DWORD *)v14 + 2);
      v121 = v137[v11];
      v118 = v121;
      v71 = *(_QWORD *)v12 + v69;
      v72 = *(_DWORD *)(v12 + 8) * v135[v11];
      v119 = v71;
      v120 = v72;
      v73 = *v67 * v70;
      v74 = v135[v11] * v70;
      v116 = *v14 + v73;
      LODWORD(v71) = v116;
      LOBYTE(v71) = *((_BYTE *)&v96 + v11);
      v117 = v74;
      LOBYTE(v74) = a3;
      OffsetBaseVertices(v71, (_DWORD)v19, v74, (unsigned int)&v116, (__int64)&v119, a6);
    }
    v12 = v105;
    ++v11;
  }
  v75 = v98;
  v76 = v99;
  if ( v13 )
  {
    v77 = 0;
    v97 = 0;
    v78 = 0LL;
    while ( 1 )
    {
      if ( *(_DWORD *)((char *)&v136[v78 + 55] + v65) == 12 )
      {
        v79 = 0;
        v80 = v104;
        v81 = v137[v78] - 1;
        v82 = v136[v78];
        v83 = v138[v78] - v104;
        if ( v81 > 0 )
        {
          v84 = v83 + 1;
          v85 = v112;
          v86 = (unsigned __int16 *)(v124 + 2LL * (int)v76);
          do
          {
            v87 = v83 + v79 + v80;
            v88 = v84 % v75;
            v89 = *v85;
            v90 = v80 + v88;
            v91 = v82 + LOWORD(v135[v78]);
            v115 = (char *)(*((_DWORD *)v85 + 2) * v87);
            v106 = (char *)(*((_DWORD *)v85 + 2) * v90);
            if ( *(float *)&v115[v89] != *(float *)&v106[v89] || *(float *)&v115[v89 + 4] != *(float *)&v106[v89 + 4] )
            {
              v99 += 6;
              *v86 = v87;
              v86[1] = v90;
              v86[2] = v91;
              v86[3] = v87;
              v86[4] = v91;
              v86[5] = v82;
              v86 += 6;
            }
            v82 += v135[v78];
            ++v79;
            v75 = v98;
            ++v84;
            v80 = v104;
          }
          while ( v79 < v81 );
          v65 = v107;
          v77 = v97;
        }
      }
      ++v77;
      ++v78;
      v97 = v77;
      if ( v77 >= 4 )
        break;
      v76 = v99;
    }
  }
  *v125 = v102;
  result = v99;
  *v126 = v99;
  return result;
}

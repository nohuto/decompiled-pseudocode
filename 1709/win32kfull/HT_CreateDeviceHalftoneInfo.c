/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C01061A0
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003D9DC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0079110 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C007915C (MulFD6.c)
 *     DivFD6 @ 0x1C00794D8 (DivFD6.c)
 *     RaisePower @ 0x1C007AEC8 (RaisePower.c)
 *     GetCIEPrims @ 0x1C0106988 (GetCIEPrims.c)
 *     ComputeHTCell @ 0x1C0106B84 (ComputeHTCell.c)
 *     MulDivFD6Pairs @ 0x1C010E1AC (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x1C010E36C (ComputeInverseMatrix3x3.c)
 *     CleanUpDHI @ 0x1C011682C (CleanUpDHI.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // r12
  HSEMAPHORE Semaphore; // rax
  __int64 (*v6)(); // rax
  __int16 v7; // r14
  __int64 v8; // r13
  __int16 v9; // r14
  unsigned int v10; // r10d
  unsigned __int16 v11; // r15
  unsigned int v12; // edx
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  __int16 v15; // ax
  __int16 v16; // ax
  int v17; // r8d
  int v18; // eax
  int v19; // eax
  unsigned __int16 v20; // si
  __int16 v21; // r15
  int v22; // eax
  __int64 v23; // r8
  int v24; // ebx
  bool v25; // cc
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  unsigned int v28; // r13d
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  __int64 result; // rax
  int v33; // edx
  bool v34; // zf
  int v35; // eax
  int v36; // eax
  char v37; // si
  unsigned int v38; // esi
  unsigned int v39; // r15d
  unsigned int v40; // r14d
  int v41; // ecx
  char v42; // al
  unsigned int v43; // eax
  int v44; // ebx
  int v45; // eax
  __int64 v46; // rdx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  __int16 v51; // ax
  int v52; // ecx
  __int16 v53; // ax
  int v54; // ecx
  unsigned int v55; // r8d
  unsigned __int16 v56; // r9
  unsigned __int64 v57; // rdx
  unsigned __int16 v58; // r10
  int v59; // ecx
  int v60; // r13d
  int v61; // eax
  int v62; // ebx
  int v63; // eax
  int v64; // eax
  int v65; // ebx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __int64 v69; // rbx
  unsigned __int16 v70; // ax
  int v71; // ebx
  unsigned int v72; // edx
  unsigned __int64 v73; // [rsp+28h] [rbp-D8h]
  __int64 v74; // [rsp+28h] [rbp-D8h]
  unsigned int v75; // [rsp+30h] [rbp-D0h]
  int v76; // [rsp+3Ch] [rbp-C4h]
  int v77; // [rsp+40h] [rbp-C0h]
  _QWORD v79[12]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v80[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v81; // [rsp+D0h] [rbp-30h]
  int v82; // [rsp+D4h] [rbp-2Ch]
  _DWORD v83[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v84; // [rsp+E0h] [rbp-20h]
  int v85; // [rsp+E4h] [rbp-1Ch]
  int v86; // [rsp+E8h] [rbp-18h]
  int v87; // [rsp+ECh] [rbp-14h]
  int v88; // [rsp+F0h] [rbp-10h]
  int v89; // [rsp+F4h] [rbp-Ch]
  int v90; // [rsp+F8h] [rbp-8h]

  v3 = 88;
  memset(v79, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v79, Src, v3);
  v4 = EngAllocMem(1u, 0x1BC8u, 0x30345448u);
  if ( !v4 )
    return 4294967294LL;
  *((_DWORD *)v4 + 10) = 1414021956;
  Semaphore = EngCreateSemaphore();
  v4[6] = Semaphore;
  if ( !Semaphore )
  {
    EngFreeMem(v4);
    return 4294956296LL;
  }
  v6 = (__int64 (*)())v79[1];
  v7 = WORD2(v79[0]);
  v8 = v79[4];
  if ( !v79[1] )
    v6 = IsMulDestroyBrushInternalSupported;
  *((_DWORD *)v4 + 16) = 305459218;
  v4[7] = v6;
  v9 = v7 & 0x6FF;
  WORD2(v79[0]) = v9;
  if ( v8 && *(_WORD *)(v8 + 22) == 0xFFFE )
  {
    v76 = 0;
    v10 = 1;
  }
  else
  {
    qmemcpy(v80, "THTN0002.naDuohC", sizeof(v80));
    v76 = 1;
    v8 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum((char *)v80, 0x1234F012u, 0x10u);
  }
  v11 = v79[10];
  v12 = HIWORD(v79[6]);
  v13 = WORD2(v79[10]);
  v14 = WORD1(v79[10]);
  if ( LOWORD(v79[10]) == 0xFFFF && *(_DWORD *)((char *)&v79[10] + 2) == -1 )
  {
    v77 = 128;
LABEL_52:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_14;
  }
  v77 = 0;
  if ( (unsigned __int16)(LOWORD(v79[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD1(v79[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD2(v79[10]) - 100) > 0xFF78u )
  {
    goto LABEL_52;
  }
LABEL_14:
  *((_DWORD *)v4 + 56) = (unsigned __int16)(8 * (v10 & v9));
  v15 = WORD1(v79[6]);
  *((_WORD *)v4 + 114) = WORD1(v79[6]);
  if ( !v15 || (v16 = WORD2(v79[6]), *((_WORD *)v4 + 115) = WORD2(v79[6]), !v16) )
  {
    *((_DWORD *)v4 + 57) = 19661100;
    v12 = 0;
  }
  if ( (v12 & 0x8000) != 0 )
  {
    v33 = v12 & 0x7FFF;
    if ( (unsigned int)(v33 - 333) <= 0x394B )
    {
      v18 = 1000 * v33;
      goto LABEL_21;
    }
  }
  else
  {
    v17 = *((unsigned __int16 *)v4 + 114);
    if ( v12 > 3 * v17 || v12 > 3 * (unsigned int)*((unsigned __int16 *)v4 + 115) )
      v12 = 0;
    if ( v12 )
    {
      v35 = *((unsigned __int16 *)v4 + 115) * *((unsigned __int16 *)v4 + 115);
      v80[1] = 2 * v12 * v12;
      v36 = DivFD6(v35 + v17 * v17, v80[1]);
      v18 = RaisePower(v36, 2LL, 3);
      v10 = 1;
      goto LABEL_21;
    }
  }
  v18 = 1000000;
LABEL_21:
  if ( (v9 & 4) != 0 )
  {
    *((_DWORD *)v4 + 56) |= 2u;
    *((_BYTE *)v4 + 73) = 0;
  }
  else
  {
    v34 = (v79[0] & 0x8000000000LL) == 0;
    *((_BYTE *)v4 + 73) = v10;
    if ( !v34 )
      *((_DWORD *)v4 + 56) |= 0x400u;
    if ( (v79[0] & 0x200000000LL) != 0 )
      *((_DWORD *)v4 + 56) |= v10;
  }
  *((_DWORD *)v4 + 58) = v18;
  v19 = v14;
  v20 = HIWORD(v79[0]);
  *((_DWORD *)v4 + 46) = 100 * v11;
  *((_DWORD *)v4 + 47) = 100 * v19;
  *((_DWORD *)v4 + 48) = 100 * v13;
  if ( (v76 || v20 > 0x12u || v20 == 18 && !v79[2]) && (unsigned __int16)(v20 - 6) > (unsigned __int16)v10 )
  {
    v20 = 17;
    HIWORD(v79[0]) = 17;
  }
  if ( (v9 & 4) != 0 && v20 <= 3u )
  {
    v20 = 17;
    HIWORD(v79[0]) = 17;
  }
  v21 = WORD2(v79[0]);
  v22 = BYTE4(v79[0]) & 0x70;
  switch ( v22 )
  {
    case ' ':
      v80[0] = 4;
      break;
    case '0':
      v80[0] = 2;
      break;
    case '@':
      v80[0] = 5;
      break;
    case 'P':
      v80[0] = v10;
      break;
    case '`':
      v80[0] = 6;
      break;
    default:
      v80[0] = v22 != 112 ? 3 : 0;
      break;
  }
  *((_BYTE *)v4 + 74) = v80[0];
  GetCIEPrims(v8, v4 + 14, 4LL, v10);
  GetCIEPrims(v79[3], (char *)v4 + 76, v23, 0LL);
  if ( (v4[28] & 4) != 0 )
  {
    if ( v79[5] )
    {
      v55 = *(_DWORD *)(v79[5] + 8LL);
      v56 = v55;
      v74 = *(_QWORD *)v79[5];
      v57 = *(_QWORD *)v79[5];
      v58 = *(_QWORD *)v79[5];
      if ( v58 > 0x2328u
        || WORD1(v74) > 0x2328u
        || WORD2(v74) > 0x2328u
        || HIWORD(v74) > 0x2328u
        || (unsigned __int16)v55 > 0x2328u
        || HIWORD(v55) > 0x2328u )
      {
        v59 = 0;
      }
      else if ( v74 || (_WORD)v55 )
      {
        v59 = 1;
      }
      else
      {
        v59 = 1;
        if ( !HIWORD(v55) )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
    }
    else
    {
      v56 = v75;
      v55 = v75;
      v59 = 0;
      v58 = v73;
      v57 = v73;
      *((_DWORD *)v4 + 56) &= 0xFFFBu;
    }
    if ( (v4[28] & 4) != 0 )
    {
      if ( v76 || !v59 )
      {
        v55 = 13762880;
        v56 = 320;
        v58 = DefaultSolidDyesInfo;
        v57 = DefaultSolidDyesInfo;
      }
      v83[1] = 100 * WORD2(v57);
      v84 = 100 * v56;
      v85 = 100 * v58;
      v87 = 100 * HIWORD(v55);
      v90 = 1000000;
      v86 = 1000000;
      v83[0] = 1000000;
      v88 = 100 * WORD1(v57);
      v89 = 100 * HIWORD(v57);
      ComputeInverseMatrix3x3(v83, (char *)v4 + 148);
      v60 = *((_DWORD *)v4 + 56);
      if ( (v60 & 1) == 0 )
      {
        v84 = *((_DWORD *)v4 + 37);
        v86 = *((_DWORD *)v4 + 38);
        v88 = *((_DWORD *)v4 + 39);
        v83[0] = 3;
        v85 = 1000000;
        v87 = 1000000;
        v89 = 1000000;
        v61 = MulDivFD6Pairs(v83);
        v62 = 1000000 - MulFD6(1000000 - v61, *((_DWORD *)v4 + 114));
        v84 = *((_DWORD *)v4 + 40);
        v86 = *((_DWORD *)v4 + 41);
        v63 = *((_DWORD *)v4 + 42);
        v85 = 1000000;
        v87 = 1000000;
        v89 = 1000000;
        v88 = v63;
        v64 = MulDivFD6Pairs(v83);
        v65 = v62 - MulFD6(1000000 - v64, *((_DWORD *)v4 + 115));
        v84 = *((_DWORD *)v4 + 43);
        v86 = *((_DWORD *)v4 + 44);
        v66 = *((_DWORD *)v4 + 45);
        v85 = 1000000;
        v87 = 1000000;
        v89 = 1000000;
        v88 = v66;
        *((_DWORD *)v4 + 56) = v60 | 1;
        v67 = MulDivFD6Pairs(v83);
        v68 = MulFD6(1000000 - v67, *((_DWORD *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((_DWORD *)v4 + 36), v65 - v68);
      }
    }
  }
  v24 = ComputeHTCell(v20, v79[2], v4 + 5);
  if ( v24 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v24;
  }
  else
  {
    v25 = WORD2(v79[7]) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v25 && LOWORD(v79[7]) == 24 && (*(_DWORD *)((char *)&v79[7] + 6) != 655370000 || WORD1(v79[8]) != 10000) )
    {
      v26 = *(_OWORD *)&v79[7];
      v27 = v79[9];
    }
    else
    {
      v26 = DefaultCA;
      v27 = 0LL;
    }
    *(_OWORD *)((char *)v4 + 12) = v26;
    *(_QWORD *)((char *)v4 + 28) = v27;
    if ( (v9 & 0x204) == 0x200 )
      *((_DWORD *)v4 + 56) |= 0x1000u;
    if ( (v79[0] & 0x800000000LL) != 0 )
    {
      v28 = BYTE6(v79[10]);
      v37 = BYTE6(v79[10]);
      *((_DWORD *)v4 + 56) |= 8 * (v21 & 0x400 | 0x20);
      v38 = v37 & 3;
      v39 = v28 >> 5;
      v40 = (v28 >> 2) & 7;
      v80[1] = v28 >> 5;
      v80[2] = v40;
      v80[3] = v38;
      if ( (_BYTE)v28 == 1 )
      {
        LOBYTE(v28) = 124;
        v38 = 4;
        v80[3] = 4;
        v40 = 4;
        v80[2] = 4;
        v39 = 4;
        v80[1] = 4;
      }
      else if ( (_BYTE)v28 == 2 )
      {
        LOBYTE(v28) = -41;
        v38 = 5;
        v80[3] = 5;
        v40 = 5;
        v80[2] = 5;
        v39 = 5;
        v80[1] = 5;
      }
      else if ( !v39 || !v40 || !v38 )
      {
        *((_DWORD *)v4 + 56) |= 0x200u;
        v38 = 255;
        v80[3] = 255;
        v40 = 255;
        v80[2] = 255;
        v39 = 255;
        v80[1] = 255;
        LOBYTE(v28) = -1;
      }
      v41 = *((_DWORD *)v4 + 56);
      *((_BYTE *)v4 + 844) = (v41 & 0x2000) != 0;
      if ( v39 == v40 && v39 == v38 )
      {
        v42 = v80[1];
        *((_DWORD *)v4 + 56) = v41 | 0x800;
        *((_BYTE *)v4 + 493) = v42;
      }
      else
      {
        *((_BYTE *)v4 + 493) = 0;
      }
      *((_DWORD *)v4 + 128) = 0xFFFF;
      v43 = v39;
      if ( v39 < v40 )
        v43 = v40;
      if ( v43 < v38 )
        v43 = v38;
      v81 = v43;
      if ( v43 <= 6 && (v69 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v69 + 16) == 0xFFFE )
      {
        *((_DWORD *)v4 + 56) |= 0x4000u;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v69 + 19) + 1, 256);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v69 + 18) + 1, 256);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v69 + 21) + 1, 256);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v69 + 20) + 1, 256);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v69 + 5) + 1, 256);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v69 + 4) + 1, 256);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v69 + 25) + 1, 256);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v69 + 24) + 1, 256);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v69 + 27) + 1, 256);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v69 + 26) + 1, 256);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v69 + 29) + 1, 256);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v69 + 28) + 1, 256);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v69 + 31) + 1, 256);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v69 + 30) + 1, 256);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v69 + 33) + 1, 256);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v69 + 32) + 1, 256);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v69 + 35) + 1, 256);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v69 + 34) + 1, 256);
        v70 = *(_WORD *)(v69 + 10);
        if ( v70 < 0x2710u )
        {
          if ( v70 )
            *((_DWORD *)v4 + 128) = 100 * v70;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v71 = DivFD6(1000000, *((_DWORD *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((_DWORD *)v4 + v39 + 128), v71);
        *((_DWORD *)v4 + 126) = MulFD6(*((_DWORD *)v4 + v40 + 134), v71);
        *((_DWORD *)v4 + 127) = MulFD6(*((_DWORD *)v4 + v38 + 140), v71);
        v72 = 6;
        do
        {
          if ( v72 >= v39 )
            *((_DWORD *)v4 + v72 + 128) = 1000000;
          if ( v72 >= v40 )
            *((_DWORD *)v4 + v72 + 134) = 1000000;
          if ( v72 >= v38 )
            *((_DWORD *)v4 + v72 + 140) = 1000000;
          --v72;
        }
        while ( v72 );
        v82 = 0;
      }
      else
      {
        v44 = v43 * *((_DWORD *)v4 + 58);
        *((_DWORD *)v4 + 125) = DivFD6(1000000 * v39, v44);
        *((_DWORD *)v4 + 126) = DivFD6(1000000 * v40, v44);
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v38, v44);
      }
      v45 = *((_DWORD *)v4 + 126);
      v46 = *((unsigned int *)v4 + 125);
      if ( (int)v46 < v45 )
        v46 = (unsigned int)v45;
      v47 = *((_DWORD *)v4 + 127);
      if ( (int)v46 < v47 )
        v46 = (unsigned int)v47;
      if ( *((_DWORD *)v4 + 128) == 0xFFFF )
      {
        if ( (_DWORD)v46 == 1000000 && (v4[28] & 0x800) != 0 )
          v48 = 0;
        else
          v48 = 666667;
        *((_DWORD *)v4 + 128) = v48;
      }
      if ( !*((_DWORD *)v4 + 128) && ((_DWORD)v46 != 1000000 || (v4[28] & 0x800) == 0) )
        *((_DWORD *)v4 + 128) = 1000000;
      v49 = RaisePower(*((_DWORD *)v4 + 128), v46, 0);
      v50 = *((_DWORD *)v4 + 125);
      *((_DWORD *)v4 + 128) = v49;
      v51 = MulFD6(v50, 4095);
      v52 = *((_DWORD *)v4 + 126);
      *((_WORD *)v4 + 247) = v51 + 1;
      v53 = MulFD6(v52, 4095);
      v54 = *((_DWORD *)v4 + 127);
      *((_WORD *)v4 + 248) = v53 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v54, 4095) + 1;
    }
    else
    {
      LOBYTE(v28) = -1;
      v81 = 1;
      v80[3] = 1;
      v80[2] = 1;
      v80[1] = 1;
    }
    v29 = *((unsigned __int16 *)v4 + 114);
    v30 = *((unsigned __int16 *)v4 + 115);
    *((_BYTE *)v4 + 488) = v80[1];
    *((_BYTE *)v4 + 489) = v80[2];
    *((_BYTE *)v4 + 490) = v80[3];
    *((_BYTE *)v4 + 491) = v81;
    v80[2] = *((_DWORD *)v4 + 58);
    v80[0] = v29;
    v80[1] = v30;
    v80[3] = v30 + v29;
    *((_BYTE *)v4 + 492) = v28;
    v31 = ComputeChecksum((char *)v80, 0xA819203F, 0x10u);
    v25 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v31;
    if ( !v25 )
      *((_BYTE *)v4 + 74) = 3;
    result = 1414021956LL;
    *((_DWORD *)v4 + 56) |= v77;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}

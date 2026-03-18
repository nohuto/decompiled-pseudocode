/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C00ED180
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0032934 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0034108 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C0034154 (MulFD6.c)
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     GetCIEPrims @ 0x1C00ED964 (GetCIEPrims.c)
 *     ComputeHTCell @ 0x1C00EDB60 (ComputeHTCell.c)
 *     RaisePower @ 0x1C00EDF60 (RaisePower.c)
 *     MulDivFD6Pairs @ 0x1C01038FC (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x1C0103ABC (ComputeInverseMatrix3x3.c)
 *     CleanUpDHI @ 0x1C010CE38 (CleanUpDHI.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // r12
  HSEMAPHORE Semaphore; // rax
  __int64 (*v6)(); // rax
  __int16 v7; // r15
  __int64 v8; // r13
  __int16 v9; // r15
  unsigned int v10; // r10d
  unsigned __int16 v11; // r14
  unsigned int v12; // edx
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  __int16 v15; // ax
  __int16 v16; // ax
  int v17; // r8d
  int v18; // eax
  int v19; // eax
  unsigned __int16 v20; // si
  __int16 v21; // r14
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
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // esi
  unsigned int v38; // r15d
  unsigned int v39; // r14d
  int v40; // ecx
  char v41; // al
  unsigned int v42; // eax
  int v43; // ebx
  int v44; // eax
  __int64 v45; // rdx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  __int16 v50; // ax
  int v51; // ecx
  __int16 v52; // ax
  int v53; // ecx
  unsigned int v54; // r8d
  unsigned __int16 v55; // r9
  unsigned __int64 v56; // rdx
  unsigned __int16 v57; // r10
  int v58; // ecx
  int v59; // r13d
  int v60; // eax
  int v61; // ebx
  int v62; // eax
  int v63; // eax
  int v64; // ebx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  __int64 v68; // rbx
  unsigned __int16 v69; // ax
  int v70; // ebx
  unsigned int v71; // edx
  unsigned __int64 v72; // [rsp+28h] [rbp-D8h]
  __int64 v73; // [rsp+28h] [rbp-D8h]
  unsigned int v74; // [rsp+30h] [rbp-D0h]
  int v75; // [rsp+3Ch] [rbp-C4h]
  int v76; // [rsp+40h] [rbp-C0h]
  _QWORD v78[12]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v79[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v80; // [rsp+D0h] [rbp-30h]
  int v81; // [rsp+D4h] [rbp-2Ch]
  _DWORD v82[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v83; // [rsp+E0h] [rbp-20h]
  int v84; // [rsp+E4h] [rbp-1Ch]
  int v85; // [rsp+E8h] [rbp-18h]
  int v86; // [rsp+ECh] [rbp-14h]
  int v87; // [rsp+F0h] [rbp-10h]
  int v88; // [rsp+F4h] [rbp-Ch]
  int v89; // [rsp+F8h] [rbp-8h]

  v3 = 88;
  memset(v78, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v78, Src, v3);
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
  v6 = (__int64 (*)())v78[1];
  v7 = WORD2(v78[0]);
  v8 = v78[4];
  if ( !v78[1] )
    v6 = IsMulDestroyBrushInternalSupported;
  *((_DWORD *)v4 + 16) = 305459218;
  v4[7] = v6;
  v9 = v7 & 0x6FF;
  WORD2(v78[0]) = v9;
  if ( v8 && *(_WORD *)(v8 + 22) == 0xFFFE )
  {
    v75 = 0;
    v10 = 1;
  }
  else
  {
    qmemcpy(v79, "THTN0002.naDuohC", sizeof(v79));
    v75 = 1;
    v8 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum((char *)v79, 0x1234F012u, 0x10u);
  }
  v11 = v78[10];
  v12 = HIWORD(v78[6]);
  v13 = WORD2(v78[10]);
  v14 = WORD1(v78[10]);
  if ( LOWORD(v78[10]) == 0xFFFF && *(_DWORD *)((char *)&v78[10] + 2) == -1 )
  {
    v76 = 128;
LABEL_52:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_14;
  }
  v76 = 0;
  if ( (unsigned __int16)(LOWORD(v78[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD1(v78[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD2(v78[10]) - 100) > 0xFF78u )
  {
    goto LABEL_52;
  }
LABEL_14:
  *((_DWORD *)v4 + 56) = (unsigned __int16)(8 * (v10 & BYTE4(v78[0])));
  v15 = WORD1(v78[6]);
  *((_WORD *)v4 + 114) = WORD1(v78[6]);
  if ( !v15 || (v16 = WORD2(v78[6]), *((_WORD *)v4 + 115) = WORD2(v78[6]), !v16) )
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
      v79[1] = 2 * v12 * v12;
      v36 = DivFD6(v17 * v17 + v35, v79[1]);
      v18 = RaisePower(v36, 2LL, 3LL);
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
    v34 = (v78[0] & 0x8000000000LL) == 0;
    *((_BYTE *)v4 + 73) = v10;
    if ( !v34 )
      *((_DWORD *)v4 + 56) |= 0x400u;
    if ( (v78[0] & 0x200000000LL) != 0 )
      *((_DWORD *)v4 + 56) |= v10;
  }
  *((_DWORD *)v4 + 58) = v18;
  v19 = v14;
  v20 = HIWORD(v78[0]);
  *((_DWORD *)v4 + 46) = 100 * v11;
  *((_DWORD *)v4 + 47) = 100 * v19;
  *((_DWORD *)v4 + 48) = 100 * v13;
  if ( (v75 || v20 > 0x12u || v20 == 18 && !v78[2]) && (unsigned __int16)(v20 - 6) > (unsigned __int16)v10 )
  {
    v20 = 17;
    HIWORD(v78[0]) = 17;
  }
  if ( (v9 & 4) != 0 && v20 <= 3u )
  {
    v20 = 17;
    HIWORD(v78[0]) = 17;
  }
  v21 = WORD2(v78[0]);
  v22 = BYTE4(v78[0]) & 0x70;
  switch ( v22 )
  {
    case ' ':
      v79[0] = 4;
      break;
    case '0':
      v79[0] = 2;
      break;
    case '@':
      v79[0] = 5;
      break;
    case 'P':
      v79[0] = v10;
      break;
    case '`':
      v79[0] = 6;
      break;
    default:
      v79[0] = v22 != 112 ? 3 : 0;
      break;
  }
  *((_BYTE *)v4 + 74) = v79[0];
  GetCIEPrims(v8, v4 + 14, 4LL, v10);
  GetCIEPrims(v78[3], (char *)v4 + 76, v23, 0LL);
  if ( (v4[28] & 4) != 0 )
  {
    if ( v78[5] )
    {
      v54 = *(_DWORD *)(v78[5] + 8LL);
      v55 = v54;
      v73 = *(_QWORD *)v78[5];
      v56 = *(_QWORD *)v78[5];
      v57 = *(_QWORD *)v78[5];
      if ( v57 > 0x2328u
        || WORD1(v73) > 0x2328u
        || WORD2(v73) > 0x2328u
        || HIWORD(v73) > 0x2328u
        || (unsigned __int16)v54 > 0x2328u
        || HIWORD(v54) > 0x2328u )
      {
        v58 = 0;
      }
      else if ( v73 || (_WORD)v54 )
      {
        v58 = 1;
      }
      else
      {
        v58 = 1;
        if ( !HIWORD(v54) )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
    }
    else
    {
      v55 = v74;
      v54 = v74;
      v58 = 0;
      v57 = v72;
      v56 = v72;
      *((_DWORD *)v4 + 56) &= 0xFFFBu;
    }
    if ( (v4[28] & 4) != 0 )
    {
      if ( v75 || !v58 )
      {
        v54 = 13762880;
        v55 = 320;
        v57 = DefaultSolidDyesInfo;
        v56 = DefaultSolidDyesInfo;
      }
      v82[1] = 100 * WORD2(v56);
      v83 = 100 * v55;
      v84 = 100 * v57;
      v86 = 100 * HIWORD(v54);
      v89 = 1000000;
      v85 = 1000000;
      v82[0] = 1000000;
      v87 = 100 * WORD1(v56);
      v88 = 100 * HIWORD(v56);
      ComputeInverseMatrix3x3(v82, (char *)v4 + 148);
      v59 = *((_DWORD *)v4 + 56);
      if ( (v59 & 1) == 0 )
      {
        v83 = *((_DWORD *)v4 + 37);
        v85 = *((_DWORD *)v4 + 38);
        v87 = *((_DWORD *)v4 + 39);
        v82[0] = 3;
        v84 = 1000000;
        v86 = 1000000;
        v88 = 1000000;
        v60 = MulDivFD6Pairs(v82);
        v61 = 1000000 - MulFD6(1000000 - v60, *((_DWORD *)v4 + 114));
        v83 = *((_DWORD *)v4 + 40);
        v85 = *((_DWORD *)v4 + 41);
        v62 = *((_DWORD *)v4 + 42);
        v84 = 1000000;
        v86 = 1000000;
        v88 = 1000000;
        v87 = v62;
        v63 = MulDivFD6Pairs(v82);
        v64 = v61 - MulFD6(1000000 - v63, *((_DWORD *)v4 + 115));
        v83 = *((_DWORD *)v4 + 43);
        v85 = *((_DWORD *)v4 + 44);
        v65 = *((_DWORD *)v4 + 45);
        v84 = 1000000;
        v86 = 1000000;
        v88 = 1000000;
        v87 = v65;
        *((_DWORD *)v4 + 56) = v59 | 1;
        v66 = MulDivFD6Pairs(v82);
        v67 = MulFD6(1000000 - v66, *((_DWORD *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((_DWORD *)v4 + 36), v64 - v67);
      }
    }
  }
  v24 = ComputeHTCell(v20, v78[2], v4 + 5);
  if ( v24 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v24;
  }
  else
  {
    v25 = WORD2(v78[7]) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v25 && LOWORD(v78[7]) == 24 && (*(_DWORD *)((char *)&v78[7] + 6) != 655370000 || WORD1(v78[8]) != 10000) )
    {
      v26 = *(_OWORD *)&v78[7];
      v27 = v78[9];
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
    if ( (v78[0] & 0x800000000LL) != 0 )
    {
      v28 = BYTE6(v78[10]);
      v37 = BYTE6(v78[10]) & 3;
      *((_DWORD *)v4 + 56) |= 8 * (v21 & 0x400 | 0x20);
      v38 = v28 >> 5;
      v39 = (v28 >> 2) & 7;
      v79[1] = v28 >> 5;
      v79[2] = v39;
      v79[3] = v37;
      if ( (_BYTE)v28 == 1 )
      {
        LOBYTE(v28) = 124;
        v37 = 4;
        v79[3] = 4;
        v39 = 4;
        v79[2] = 4;
        v38 = 4;
        v79[1] = 4;
      }
      else if ( (_BYTE)v28 == 2 )
      {
        LOBYTE(v28) = -41;
        v37 = 5;
        v79[3] = 5;
        v39 = 5;
        v79[2] = 5;
        v38 = 5;
        v79[1] = 5;
      }
      else if ( !v38 || !v39 || !v37 )
      {
        *((_DWORD *)v4 + 56) |= 0x200u;
        v37 = 255;
        v79[3] = 255;
        v39 = 255;
        v79[2] = 255;
        v38 = 255;
        v79[1] = 255;
        LOBYTE(v28) = -1;
      }
      v40 = *((_DWORD *)v4 + 56);
      *((_BYTE *)v4 + 844) = (v40 & 0x2000) != 0;
      if ( v38 == v39 && v38 == v37 )
      {
        v41 = v79[1];
        *((_DWORD *)v4 + 56) = v40 | 0x800;
        *((_BYTE *)v4 + 493) = v41;
      }
      else
      {
        *((_BYTE *)v4 + 493) = 0;
      }
      *((_DWORD *)v4 + 128) = 0xFFFF;
      v42 = v38;
      if ( v38 < v39 )
        v42 = v39;
      if ( v42 < v37 )
        v42 = v37;
      v80 = v42;
      if ( v42 <= 6 && (v68 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v68 + 16) == 0xFFFE )
      {
        *((_DWORD *)v4 + 56) |= 0x4000u;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v68 + 19) + 1, 256);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v68 + 18) + 1, 256);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v68 + 21) + 1, 256);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v68 + 20) + 1, 256);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v68 + 5) + 1, 256);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v68 + 4) + 1, 256);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v68 + 25) + 1, 256);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v68 + 24) + 1, 256);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v68 + 27) + 1, 256);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v68 + 26) + 1, 256);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v68 + 29) + 1, 256);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v68 + 28) + 1, 256);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v68 + 31) + 1, 256);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v68 + 30) + 1, 256);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v68 + 33) + 1, 256);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v68 + 32) + 1, 256);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v68 + 35) + 1, 256);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v68 + 34) + 1, 256);
        v69 = *(_WORD *)(v68 + 10);
        if ( v69 < 0x2710u )
        {
          if ( v69 )
            *((_DWORD *)v4 + 128) = 100 * v69;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v70 = DivFD6(1000000, *((_DWORD *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((_DWORD *)v4 + v38 + 128), v70);
        *((_DWORD *)v4 + 126) = MulFD6(*((_DWORD *)v4 + v39 + 134), v70);
        *((_DWORD *)v4 + 127) = MulFD6(*((_DWORD *)v4 + v37 + 140), v70);
        v71 = 6;
        do
        {
          if ( v71 >= v38 )
            *((_DWORD *)v4 + v71 + 128) = 1000000;
          if ( v71 >= v39 )
            *((_DWORD *)v4 + v71 + 134) = 1000000;
          if ( v71 >= v37 )
            *((_DWORD *)v4 + v71 + 140) = 1000000;
          --v71;
        }
        while ( v71 );
        v81 = 0;
      }
      else
      {
        v43 = v42 * *((_DWORD *)v4 + 58);
        *((_DWORD *)v4 + 125) = DivFD6(1000000 * v38, v43);
        *((_DWORD *)v4 + 126) = DivFD6(1000000 * v39, v43);
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v37, v43);
      }
      v44 = *((_DWORD *)v4 + 126);
      v45 = *((unsigned int *)v4 + 125);
      if ( (int)v45 < v44 )
        v45 = (unsigned int)v44;
      v46 = *((_DWORD *)v4 + 127);
      if ( (int)v45 < v46 )
        v45 = (unsigned int)v46;
      if ( *((_DWORD *)v4 + 128) == 0xFFFF )
      {
        if ( (_DWORD)v45 == 1000000 && (v4[28] & 0x800) != 0 )
          v47 = 0;
        else
          v47 = 666667;
        *((_DWORD *)v4 + 128) = v47;
      }
      if ( !*((_DWORD *)v4 + 128) && ((_DWORD)v45 != 1000000 || (v4[28] & 0x800) == 0) )
        *((_DWORD *)v4 + 128) = 1000000;
      v48 = RaisePower(*((unsigned int *)v4 + 128), v45, 0LL);
      v49 = *((_DWORD *)v4 + 125);
      *((_DWORD *)v4 + 128) = v48;
      v50 = MulFD6(v49, 4095);
      v51 = *((_DWORD *)v4 + 126);
      *((_WORD *)v4 + 247) = v50 + 1;
      v52 = MulFD6(v51, 4095);
      v53 = *((_DWORD *)v4 + 127);
      *((_WORD *)v4 + 248) = v52 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v53, 4095) + 1;
    }
    else
    {
      LOBYTE(v28) = -1;
      v80 = 1;
      v79[3] = 1;
      v79[2] = 1;
      v79[1] = 1;
    }
    v29 = *((unsigned __int16 *)v4 + 114);
    v30 = *((unsigned __int16 *)v4 + 115);
    *((_BYTE *)v4 + 488) = v79[1];
    *((_BYTE *)v4 + 489) = v79[2];
    *((_BYTE *)v4 + 490) = v79[3];
    *((_BYTE *)v4 + 491) = v80;
    v79[2] = *((_DWORD *)v4 + 58);
    v79[0] = v29;
    v79[1] = v30;
    v79[3] = v30 + v29;
    *((_BYTE *)v4 + 492) = v28;
    v31 = ComputeChecksum((char *)v79, 0xA819203F, 0x10u);
    v25 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v31;
    if ( !v25 )
      *((_BYTE *)v4 + 74) = 3;
    result = 1414021956LL;
    *((_DWORD *)v4 + 56) |= v76;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}

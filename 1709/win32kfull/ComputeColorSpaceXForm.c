/*
 * XREFs of ComputeColorSpaceXForm @ 0x1C010DE1C
 * Callers:
 *     pDCIAdjClr @ 0x1C007828C (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C007915C (MulFD6.c)
 *     DivFD6 @ 0x1C00794D8 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C010E1AC (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x1C010E36C (ComputeInverseMatrix3x3.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeColorSpaceXForm(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v4; // r12d
  int v6; // r9d
  int v7; // r13d
  int v8; // r10d
  int v9; // r11d
  int v10; // ebx
  int v11; // r8d
  int v12; // r15d
  int v13; // r14d
  int v14; // ebx
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // r13d
  int v19; // r15d
  int v20; // r12d
  int v21; // r14d
  int v22; // esi
  int v23; // edi
  int v24; // ebx
  int v25; // esi
  int v26; // r15d
  int v27; // ecx
  int v28; // r14d
  int v29; // eax
  __int128 v30; // xmm1
  int v31; // ebx
  int v32; // r15d
  __int128 v33; // xmm0
  int v34; // ecx
  __int128 v35; // xmm1
  __int64 result; // rax
  int v37; // eax
  int v38; // [rsp+20h] [rbp-69h]
  int v39; // [rsp+24h] [rbp-65h]
  int v40; // [rsp+28h] [rbp-61h]
  int v41; // [rsp+2Ch] [rbp-5Dh]
  int v42; // [rsp+30h] [rbp-59h]
  int v43; // [rsp+34h] [rbp-55h]
  unsigned int v44; // [rsp+38h] [rbp-51h]
  int v46; // [rsp+48h] [rbp-41h]
  int v47; // [rsp+4Ch] [rbp-3Dh]
  int v48; // [rsp+50h] [rbp-39h]
  int v49; // [rsp+54h] [rbp-35h]
  int v50; // [rsp+58h] [rbp-31h]
  unsigned __int64 v51; // [rsp+60h] [rbp-29h]
  __int128 v53; // [rsp+78h] [rbp-11h] BYREF
  __int128 v54; // [rsp+88h] [rbp-1h]
  int v55; // [rsp+98h] [rbp+Fh]
  int v56; // [rsp+9Ch] [rbp+13h]

  v4 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v9 = a2[5];
  v10 = a2[8];
  v11 = a2[4];
  v42 = a4;
  v46 = *a2;
  v41 = v6;
  v48 = v7;
  v38 = v8;
  v40 = v11;
  v39 = v9;
  if ( a4 >= 0 )
  {
    v37 = a4 - 1;
    if ( v37 < 0 )
      v37 = 5;
    v42 = v37;
    v12 = 100 * StdIlluminant[2 * v37];
    a2[6] = v12;
    v13 = 100 * StdIlluminant[2 * v37 + 1];
    a2[7] = v13;
  }
  else
  {
    v12 = a2[6];
    v13 = a2[7];
  }
  *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v4, v10);
  v44 = v13;
  v43 = v12;
  LODWORD(v53) = 65539;
  v14 = v8 - v9;
  v15 = v9 - v6;
  HIDWORD(v53) = v8 - v9;
  v16 = v6 - v8;
  LODWORD(v54) = v7;
  DWORD1(v54) = v9 - v6;
  DWORD2(v54) = v11;
  HIDWORD(v54) = v6 - v8;
  v17 = MulDivFD6Pairs(&v53);
  DWORD1(v53) = MulFD6(v13, v17);
  DWORD1(v54) = v7 - v40;
  LODWORD(v53) = 65540;
  v55 = -v40;
  v56 = v38;
  *((_QWORD *)&v53 + 1) = __PAIR64__(v14, v12);
  LODWORD(v54) = -v13;
  *((_QWORD *)&v54 + 1) = __PAIR64__(v39, v7);
  v47 = MulDivFD6Pairs(&v53);
  v55 = v40;
  DWORD1(v54) = v40 - v4;
  *((_QWORD *)&v53 + 1) = __PAIR64__(v15, v12);
  DWORD2(v54) = -v4;
  HIDWORD(v54) = v39;
  LODWORD(v54) = -v13;
  v56 = v41;
  v49 = MulDivFD6Pairs(&v53);
  DWORD1(v54) = v4 - v7;
  *((_QWORD *)&v53 + 1) = __PAIR64__(v16, v12);
  v55 = -v7;
  LODWORD(v54) = -v13;
  *((_QWORD *)&v54 + 1) = __PAIR64__(v38, v4);
  v56 = v41;
  v50 = MulDivFD6Pairs(&v53);
  LODWORD(v53) = MulFD6(v4, v47);
  v18 = MulFD6(v7, v49);
  DWORD1(v53) = v18;
  DWORD2(v53) = MulFD6(v40, v50);
  v19 = DWORD2(v53);
  v20 = MulFD6(v41, v47);
  HIDWORD(v53) = v20;
  *(_DWORD *)(a3 + 48) = v20;
  v21 = MulFD6(v38, v49);
  LODWORD(v54) = v21;
  *(_DWORD *)(a3 + 52) = v21;
  DWORD1(v54) = MulFD6(v39, v50);
  v22 = DWORD1(v54);
  *(_DWORD *)(a3 + 56) = DWORD1(v54);
  v23 = MulFD6(1000000 - v41 - v46, v47);
  DWORD2(v54) = v23;
  v24 = MulFD6(1000000 - v38 - v48, v49);
  HIDWORD(v54) = v24;
  v55 = MulFD6(1000000 - v39 - v40, v50);
  v25 = v20 + v21 + v22;
  v26 = v53 + v18 + v19;
  v27 = v55;
  v51 = __PAIR64__(v25, v26);
  v28 = v23 + v55 + v24;
  v29 = 0;
  if ( v42 < 0 )
  {
    v30 = v54;
    *(_OWORD *)a3 = v53;
    *(_OWORD *)(a3 + 16) = v30;
    *(_DWORD *)(a3 + 32) = v27;
    ComputeInverseMatrix3x3(a3, &v53);
    v29 = 0;
  }
  *(_DWORD *)(a3 + 76) = v25;
  if ( v25 != 1000000 )
  {
    if ( v25 )
    {
      LODWORD(v51) = DivFD6(v26, v25);
      v26 = v51;
      v28 = DivFD6(v28, v25);
      v29 = 0;
    }
    else
    {
      v28 = 0;
      LODWORD(v51) = 0;
      v26 = 0;
    }
    v25 = 1000000;
    HIDWORD(v51) = 1000000;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v32 = 0;
  }
  else
  {
    v31 = v26 + 2 * (v25 + v28 + 4 * v25) + v25 + v28 + 4 * v25;
    v32 = DivFD6(4 * v26, v31);
    v29 = DivFD6(9 * v25, v31);
  }
  v33 = v53;
  v34 = v55;
  v35 = v54;
  *(_DWORD *)(a3 + 64) = v29;
  *(_OWORD *)a3 = v33;
  *(_DWORD *)(a3 + 68) = v43;
  result = v44;
  *(_QWORD *)(a3 + 36) = v51;
  *(_OWORD *)(a3 + 16) = v35;
  *(_DWORD *)(a3 + 44) = v28;
  *(_DWORD *)(a3 + 32) = v34;
  *(_DWORD *)(a3 + 60) = v32;
  *(_DWORD *)(a3 + 72) = v44;
  return result;
}

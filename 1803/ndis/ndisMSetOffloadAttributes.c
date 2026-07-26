/*
 * XREFs of ndisMSetOffloadAttributes @ 0x1C00C3014
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C2BB0 (NdisMSetMiniportAttributes.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisMAllocateMiniportOffload @ 0x1C001EFA0 (ndisMAllocateMiniportOffload.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisValidateOffloadCapability @ 0x1C00C3394 (ndisValidateOffloadCapability.c)
 *     ndisValidateConnectionOffload @ 0x1C00F07CC (ndisValidateConnectionOffload.c)
 */

__int64 __fastcall ndisMSetOffloadAttributes(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, _WORD *a5)
{
  unsigned int v8; // ebx
  int v9; // r14d
  int v10; // r15d
  unsigned __int16 v11; // ax
  unsigned int v12; // ecx
  unsigned __int16 v13; // cx
  unsigned __int8 v14; // al
  _BYTE *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rdx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 v35; // rax
  _DWORD *v36; // rax
  _DWORD *v37; // rax
  unsigned __int16 v39; // ax
  unsigned int v40; // r14d
  unsigned int v41; // ecx
  unsigned __int16 v42; // ax
  __int128 v43; // xmm0
  __int64 v44; // rax
  __int64 v45; // rax
  __int128 v47; // [rsp+28h] [rbp-D8h] BYREF
  int v48; // [rsp+38h] [rbp-C8h]
  __int128 v49; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+50h] [rbp-B0h]
  _OWORD v51[12]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v52[12]; // [rsp+120h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qq(0xAu, &WPP_7c9d8bcebdf13e66a2adfd9d6f9d271d_Traceguids, a1, a2);
  v8 = 188;
  memset(v51, 0, 0xBCuLL);
  memset(v52, 0, 0xBCuLL);
  v9 = 0;
  v10 = 0;
  v47 = 0uLL;
  v48 = 0;
  v49 = 0uLL;
  v50 = 0;
  if ( a2 && !a3 )
    goto LABEL_31;
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_31;
    v39 = a4[1];
    v40 = 20;
    v41 = v39;
    if ( v39 >= 0x14u )
      v41 = 20;
    memmove(&v47, a4, v41);
    v42 = a5[1];
    if ( v42 < 0x14u )
      v40 = v42;
    memmove(&v49, a5, v40);
    if ( !(unsigned __int8)ndisValidateConnectionOffload(&v47) || !(unsigned __int8)ndisValidateConnectionOffload(&v49) )
      goto LABEL_31;
    v9 = v48;
    v10 = v50;
  }
  if ( a2 )
  {
    v11 = *(_WORD *)(a2 + 2);
    v12 = v11;
    if ( v11 >= 0xBCu )
      v12 = 188;
    memmove(v51, (const void *)a2, v12);
    v13 = a3[1];
    if ( v13 < 0xBCu )
      v8 = v13;
    memmove(v52, a3, v8);
    if ( !(unsigned __int8)ndisValidateOffloadCapability(v51) || !(unsigned __int8)ndisValidateOffloadCapability(v52) )
      goto LABEL_31;
    if ( (*(_BYTE *)(a1 + 4984) & 2) != 0 )
    {
      HIDWORD(v51[6]) &= 0xFFFFFFF9;
      HIDWORD(v52[6]) &= 0xFFFFFFF9;
    }
    v14 = *(_BYTE *)(a1 + 32);
    if ( (v14 > 6u || v14 == 6 && *(_BYTE *)(a1 + 33))
      && *(_BYTE *)(a2 + 1) >= 2u
      && *(_DWORD *)(a2 + 112)
      && !*(_QWORD *)(*(_QWORD *)(a1 + 3784) + 248LL) )
    {
LABEL_31:
      v16 = -1073741637;
      goto LABEL_28;
    }
  }
  v15 = *(_BYTE **)(a1 + 4120);
  if ( v15 || (v16 = ndisMAllocateMiniportOffload(a1)) == 0 && (v15 = *(_BYTE **)(a1 + 4120)) != 0LL )
  {
    if ( a2 )
    {
      *v15 = 1;
      v17 = *(_QWORD *)(a1 + 4120) + 384LL;
      v18 = v51[1];
      *(_OWORD *)v17 = v51[0];
      *(_OWORD *)(v17 + 16) = v18;
      v19 = v51[3];
      *(_OWORD *)(v17 + 32) = v51[2];
      *(_OWORD *)(v17 + 48) = v19;
      v20 = v51[5];
      *(_OWORD *)(v17 + 64) = v51[4];
      *(_OWORD *)(v17 + 80) = v20;
      *(_OWORD *)(v17 + 96) = v51[6];
      v17 += 128LL;
      *(_OWORD *)(v17 - 16) = v51[7];
      v21 = *(_QWORD *)&v51[11];
      v22 = v51[9];
      *(_OWORD *)v17 = v51[8];
      *(_OWORD *)(v17 + 16) = v22;
      *(_OWORD *)(v17 + 32) = v51[10];
      *(_QWORD *)(v17 + 48) = v21;
      v23 = v52[0];
      *(_DWORD *)(v17 + 56) = DWORD2(v51[11]);
      v24 = v52[1];
      v25 = *(_QWORD *)(a1 + 4120) + 572LL;
      *(_OWORD *)v25 = v23;
      v26 = v52[2];
      *(_OWORD *)(v25 + 16) = v24;
      v27 = v52[3];
      *(_OWORD *)(v25 + 32) = v26;
      v28 = v52[4];
      *(_OWORD *)(v25 + 48) = v27;
      v29 = v52[5];
      *(_OWORD *)(v25 + 64) = v28;
      v30 = v52[6];
      *(_OWORD *)(v25 + 80) = v29;
      v31 = v52[7];
      *(_OWORD *)(v25 + 96) = v30;
      v25 += 128LL;
      *(_OWORD *)(v25 - 16) = v31;
      v32 = *(_QWORD *)&v52[11];
      v33 = v52[9];
      *(_OWORD *)v25 = v52[8];
      v34 = v52[10];
      *(_OWORD *)(v25 + 16) = v33;
      *(_OWORD *)(v25 + 32) = v34;
      *(_QWORD *)(v25 + 48) = v32;
      *(_DWORD *)(v25 + 56) = DWORD2(v52[11]);
      v35 = *(_QWORD *)(a1 + 4120);
      *(_OWORD *)(v35 + 8) = *(_OWORD *)(v35 + 384);
      *(_OWORD *)(v35 + 24) = *(_OWORD *)(v35 + 400);
      *(_OWORD *)(v35 + 40) = *(_OWORD *)(v35 + 416);
      *(_OWORD *)(v35 + 56) = *(_OWORD *)(v35 + 432);
      *(_OWORD *)(v35 + 72) = *(_OWORD *)(v35 + 448);
      *(_OWORD *)(v35 + 88) = *(_OWORD *)(v35 + 464);
      *(_OWORD *)(v35 + 104) = *(_OWORD *)(v35 + 480);
      *(_OWORD *)(v35 + 120) = *(_OWORD *)(v35 + 496);
      *(_OWORD *)(v35 + 136) = *(_OWORD *)(v35 + 512);
      *(_OWORD *)(v35 + 152) = *(_OWORD *)(v35 + 528);
      *(_OWORD *)(v35 + 168) = *(_OWORD *)(v35 + 544);
      *(_QWORD *)(v35 + 184) = *(_QWORD *)(v35 + 560);
      *(_DWORD *)(v35 + 192) = *(_DWORD *)(v35 + 568);
      v36 = *(_DWORD **)(a1 + 4120);
      v36[190] = 1835432;
      v36[191] = 2;
      v36[194] = 2;
      v37 = *(_DWORD **)(a1 + 4120);
      v37[197] = 1835432;
      v37[198] = 2;
      v37[201] = 2;
    }
    if ( a4 )
    {
      v43 = v47;
      *(_BYTE *)(*(_QWORD *)(a1 + 4120) + 2LL) = 1;
      v44 = *(_QWORD *)(a1 + 4120);
      *(_OWORD *)(v44 + 892) = v43;
      *(_DWORD *)(v44 + 908) = v9;
      v45 = *(_QWORD *)(a1 + 4120);
      *(_OWORD *)(v45 + 912) = v49;
      *(_DWORD *)(v45 + 928) = v10;
    }
    v16 = 0;
  }
LABEL_28:
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0xBu, &WPP_7c9d8bcebdf13e66a2adfd9d6f9d271d_Traceguids, a1, v16);
  return v16;
}

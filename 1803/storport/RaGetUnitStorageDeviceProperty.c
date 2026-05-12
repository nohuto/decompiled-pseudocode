/*
 * XREFs of RaGetUnitStorageDeviceProperty @ 0x1C005E458
 * Callers:
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C005E3F4 (RaUnitStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C00076B4 (RaidRemoveTrailingBlanks.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceProperty(__int64 a1, void *a2, unsigned int *a3)
{
  char *v3; // rdi
  unsigned __int8 v7; // cl
  unsigned int v8; // esi
  char v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int128 v12; // xmm0
  int v13; // eax
  unsigned __int16 v14; // ax
  _OWORD *v15; // rdx
  char *v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 result; // rax
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int64 v27; // xmm0_8
  unsigned __int16 v28; // di
  size_t v29; // r8
  int v30; // eax
  _OWORD *v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  _OWORD *v38; // rcx
  __int128 v39; // xmm0
  _OWORD *v40; // rdx
  __int64 v41; // rax
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  _QWORD Src[50]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = *(char **)(a1 + 96);
  memset(Src, 0, 0x18CuLL);
  v7 = v3[1];
  v8 = *a3;
  v9 = *v3;
  if ( *a3 > 0x18C )
    v8 = 396;
  Src[0] = 0x18C00000028LL;
  LOBYTE(Src[1]) = v9 & 0x1F;
  v10 = v7;
  BYTE2(Src[1]) = v7 >> 7;
  v11 = *(_QWORD *)(a1 + 24);
  BYTE1(Src[1]) = v10 & 0x7F;
  BYTE3(Src[1]) = (v3[7] & 2) != 0;
  HIDWORD(Src[3]) = *(_DWORD *)(v11 + 4356);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v17 = *(_QWORD *)(a1 + 144);
    if ( *(_BYTE *)(v17 + 8) )
    {
      v18 = *(_OWORD *)(v17 + 8);
      HIDWORD(Src[1]) = 40;
      *(_OWORD *)&Src[5] = v18;
    }
    v19 = *(_OWORD *)(v17 + 25);
    Src[2] = 0x7A00000039LL;
    v20 = *(_OWORD *)(v17 + 41);
    *(_OWORD *)((char *)&Src[7] + 1) = v19;
    v21 = *(_OWORD *)(v17 + 57);
    *(_OWORD *)((char *)&Src[9] + 1) = v20;
    v22 = *(_OWORD *)(v17 + 73);
    *(_OWORD *)((char *)&Src[11] + 1) = v21;
    v23 = *(_OWORD *)(v17 + 90);
    *(_OWORD *)((char *)&Src[13] + 1) = v22;
    *(_OWORD *)((char *)&Src[15] + 2) = v23;
    if ( !*(_WORD *)(a1 + 106) )
      goto LABEL_12;
    LODWORD(Src[3]) = 139;
    memset((char *)&Src[17] + 3, 0, 0x100uLL);
    v14 = *(_WORD *)(a1 + 104);
    v15 = *(_OWORD **)(a1 + 112);
    if ( v14 <= 0x100u )
    {
      v16 = (char *)&Src[17] + 3;
      goto LABEL_8;
    }
    v31 = (_OWORD *)((char *)&Src[17] + 3);
LABEL_25:
    v32 = v15[1];
    *v31 = *v15;
    v33 = v15[2];
    v31[1] = v32;
    v34 = v15[3];
    v31[2] = v33;
    v35 = v15[4];
    v31[3] = v34;
    v36 = v15[5];
    v31[4] = v35;
    v37 = v15[6];
    v31[5] = v36;
    v31[6] = v37;
    v38 = v31 + 8;
    v39 = v15[7];
    v40 = v15 + 8;
    *(v38 - 1) = v39;
    v41 = *((_QWORD *)v40 + 14);
    v42 = v40[1];
    *v38 = *v40;
    v43 = v40[2];
    v38[1] = v42;
    v44 = v40[3];
    v38[2] = v43;
    v45 = v40[4];
    v38[3] = v44;
    v46 = v40[5];
    v38[4] = v45;
    v47 = v40[6];
    v38[5] = v46;
    v38[6] = v47;
    *((_QWORD *)v38 + 14) = v41;
    *((_DWORD *)v38 + 30) = *((_DWORD *)v40 + 30);
    *((_WORD *)v38 + 62) = *((_WORD *)v40 + 62);
    *((_BYTE *)v38 + 126) = *((_BYTE *)v40 + 126);
    BYTE6(Src[40]) = 0;
    goto LABEL_13;
  }
  if ( !*(_QWORD *)(a1 + 136) || (*(_DWORD *)(*(_QWORD *)(v11 + 528) + 184LL) & 0x40) == 0 )
  {
    v12 = *((_OWORD *)v3 + 1);
    Src[5] = *((_QWORD *)v3 + 1);
    v13 = *((_DWORD *)v3 + 8);
    *(_OWORD *)((char *)&Src[6] + 1) = v12;
    *(_DWORD *)((char *)&Src[8] + 2) = v13;
    HIDWORD(Src[1]) = 40;
    Src[2] = 0x4200000031LL;
    if ( !*(_WORD *)(a1 + 106) )
    {
LABEL_12:
      LODWORD(Src[3]) = 0;
      goto LABEL_13;
    }
    LODWORD(Src[3]) = 71;
    memset((char *)&Src[8] + 7, 0, 0x100uLL);
    v14 = *(_WORD *)(a1 + 104);
    v15 = *(_OWORD **)(a1 + 112);
    if ( v14 <= 0x100u )
    {
      v16 = (char *)&Src[8] + 7;
LABEL_8:
      memmove(v16, v15, v14);
      goto LABEL_13;
    }
    v31 = (_OWORD *)((char *)&Src[8] + 7);
    goto LABEL_25;
  }
  v25 = *(_QWORD *)(a1 + 136);
  Src[2] = 0x5100000028LL;
  v26 = *(_OWORD *)(v25 + 16);
  *(_OWORD *)&Src[5] = *(_OWORD *)v25;
  v27 = *(_QWORD *)(v25 + 32);
  *(_QWORD *)((char *)&Src[10] + 1) = *(_QWORD *)(v25 + 41);
  *(_OWORD *)&Src[7] = v26;
  Src[9] = v27;
  if ( !*(_WORD *)(a1 + 106) )
    goto LABEL_12;
  v28 = *(_WORD *)(a1 + 104);
  v29 = 20LL;
  LODWORD(Src[3]) = 90;
  if ( v28 < 0x14u )
    v29 = v28;
  memmove((char *)&Src[11] + 2, *(const void **)(a1 + 112), v29);
  v30 = 21;
  if ( (unsigned int)v28 + 1 < 0x15uLL )
    v30 = v28 + 1;
  RaidRemoveTrailingBlanks((__int64)&Src[11] + 2, v30);
LABEL_13:
  memmove(a2, Src, v8);
  result = 0LL;
  *a3 = v8;
  return result;
}

/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x14012DF60
 * Callers:
 *     SmProcessCreateRequest @ 0x140567BBC (SmProcessCreateRequest.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x14012D4E0 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmKmStoreHelperStart @ 0x14012E34C (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x14012E3D8 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmFpPreAllocate @ 0x140168C38 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     SmKmFileInfoDuplicate @ 0x140701FA8 (SmKmFileInfoDuplicate.c)
 *     SmKmFileInfoInit @ 0x1407021E8 (SmKmFileInfoInit.c)
 */

int __fastcall SMKM_STORE<SM_TRAITS>::SmStStart(__int64 a1, int **a2)
{
  int *v2; // r14
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  char v8; // cl
  char v9; // dl
  int result; // eax
  PVOID PoolWithTag; // rax
  int v12; // eax
  int v13; // edi
  SIZE_T v14; // rbx
  PVOID v15; // rax
  int v16; // eax
  __int128 v17; // xmm0
  unsigned int v18; // [rsp+20h] [rbp-60h]
  _OWORD v19[4]; // [rsp+30h] [rbp-50h] BYREF

  v2 = *a2;
  v5 = **a2;
  if ( (unsigned __int8)v5 >= 2u )
    return -1073741811;
  if ( v2[5] )
    return -1073741811;
  if ( (unsigned int)(v2[3] - 1) > 0x3FFFF )
    return -1073741811;
  v6 = v2[2];
  if ( !v6 || ((v6 - 1) & v6) != 0 )
    return -1073741811;
  if ( (unsigned __int8)v5 == 1 && (v5 & 0x100) != 0 )
    return -1073741637;
  if ( (v5 & 0x40000) == 0 && (v5 & 0xA0000) != 0 || (v5 & 0xA0000) == 0xA0000 )
    return -1073741811;
  *(_QWORD *)(a1 + 6672) = a2[4];
  v7 = *((_DWORD *)a2 + 14);
  if ( !v7 )
    v7 = 7;
  *(_DWORD *)(a1 + 6680) = v7;
  *(_BYTE *)(a1 + 5988) = *(_BYTE *)v2;
  *(_BYTE *)(a1 + 5989) ^= (*(_BYTE *)(a1 + 5989) ^ (4 * ((unsigned int)*v2 >> 18))) & 4;
  v8 = *(_BYTE *)(a1 + 5989) ^ (*(_BYTE *)(a1 + 5989) ^ (8 * ((unsigned int)*v2 >> 17))) & 8;
  *(_BYTE *)(a1 + 5989) = v8;
  v9 = v8 ^ (v8 ^ (32 * ((unsigned int)*v2 >> 19))) & 0x20;
  *(_BYTE *)(a1 + 5989) = v9;
  *(_DWORD *)(a1 + 6176) = v2[2];
  if ( (unsigned __int8)*v2 )
  {
    SmKmFileInfoInit(a1 + 6184);
    *(_DWORD *)(a1 + 6180) = v2[3];
    v13 = v2[6];
    result = SmKmFileInfoDuplicate(a1 + 6184, *((_QWORD *)v2 + 6));
LABEL_39:
    if ( result < 0 )
      return result;
    goto LABEL_22;
  }
  if ( (v9 & 4) != 0 )
  {
    memset((void *)(a1 + 6200), 0, 0x78uLL);
    *(_WORD *)(a1 + 6208) = 0;
    *(_BYTE *)(a1 + 6210) = 6;
    *(_DWORD *)(a1 + 6212) = 0;
    *(_QWORD *)(a1 + 6224) = a1 + 6216;
    *(_QWORD *)(a1 + 6216) = a1 + 6216;
    *(_WORD *)(a1 + 6232) = 0;
    *(_BYTE *)(a1 + 6234) = 6;
    *(_DWORD *)(a1 + 6236) = 0;
    *(_QWORD *)(a1 + 6248) = a1 + 6240;
    *(_QWORD *)(a1 + 6240) = a1 + 6240;
    memset((void *)(a1 + 6320), 0, 0x78uLL);
    *(_WORD *)(a1 + 6328) = 0;
    *(_BYTE *)(a1 + 6330) = 6;
    *(_DWORD *)(a1 + 6332) = 0;
    *(_QWORD *)(a1 + 6344) = a1 + 6336;
    *(_QWORD *)(a1 + 6336) = a1 + 6336;
    *(_WORD *)(a1 + 6352) = 0;
    *(_BYTE *)(a1 + 6354) = 6;
    *(_DWORD *)(a1 + 6356) = 0;
    *(_QWORD *)(a1 + 6368) = a1 + 6360;
    *(_QWORD *)(a1 + 6360) = a1 + 6360;
    memset((void *)(a1 + 6440), 0, 0x50uLL);
    *(_WORD *)(a1 + 6448) = 0;
    *(_BYTE *)(a1 + 6450) = 6;
    *(_DWORD *)(a1 + 6452) = 0;
    *(_QWORD *)(a1 + 6464) = a1 + 6456;
    *(_QWORD *)(a1 + 6456) = a1 + 6456;
    *(_WORD *)(a1 + 6472) = 0;
    *(_BYTE *)(a1 + 6474) = 6;
    *(_DWORD *)(a1 + 6476) = 0;
    *(_QWORD *)(a1 + 6488) = a1 + 6480;
    *(_QWORD *)(a1 + 6480) = a1 + 6480;
    *(_QWORD *)(a1 + 6504) = a1 + 6496;
    *(_QWORD *)(a1 + 6496) = 0LL;
    *(_QWORD *)(a1 + 6512) = 0LL;
    *(_QWORD *)(a1 + 6536) = a2[5];
    result = SmKmStoreHelperStart(a1 + 6200, a2[6]);
    if ( result < 0 )
      return result;
    result = SmKmStoreHelperStart(a1 + 6320, a2[6]);
    if ( result < 0 )
      return result;
    if ( (*(_BYTE *)(a1 + 5989) & 8) != 0 )
      *(_QWORD *)(a1 + 6304) = &unk_1403FA418;
    *(_QWORD *)(a1 + 6432) = &dword_1403FA430;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6C526D73u);
    *(_QWORD *)(a1 + 6192) = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, 0x50uLL);
    if ( !(unsigned int)SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6176), 1, 0) )
      return -1073741670;
    *(_BYTE *)(a1 + 5989) |= 0x10u;
  }
  v12 = v2[3];
  *(_DWORD *)(a1 + 6180) = v12;
  v13 = 0;
  v14 = (unsigned int)(8 * v12);
  v15 = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x67526D73u);
  if ( !v15 )
    return -1073741670;
  *(_QWORD *)(a1 + 6184) = v15;
  memset(v15, 0, (unsigned int)v14);
  if ( (*(_BYTE *)(a1 + 5989) & 4) == 0 )
  {
    v18 = (*(_DWORD *)(a1 + 6176) & 0xFFFF000 | 0x10000500u) >> 8;
    result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 6560));
    goto LABEL_39;
  }
LABEL_22:
  memset(v19, 0, sizeof(v19));
  v16 = *(_DWORD *)(a1 + 6180);
  v17 = *(_OWORD *)v2;
  LODWORD(v19[1]) = v13;
  *((_QWORD *)&v19[1] + 1) = a1;
  v19[0] = v17;
  HIDWORD(v19[0]) = v16;
  *(_QWORD *)&v19[3] = a2[3];
  if ( (unsigned __int8)*v2 )
    *((_QWORD *)&v19[3] + 1) = *((_QWORD *)v2 + 8);
  *(_QWORD *)&v19[2] = a2[1];
  DWORD2(v19[2]) = *((_DWORD *)a2 + 4);
  LODWORD(v19[0]) = (DWORD2(v19[2]) == 0 ? 0x800 : 0) | v19[0] & 0xFFFFF7FF;
  result = ST_STORE<SM_TRAITS>::StStart(a1, (__int64)v19);
  if ( result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 5989) & 4) == 0 )
      goto LABEL_29;
    result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
               a1,
               a2[6],
               SMKM_STORE<SM_TRAITS>::SmStReadThread,
               a1 + 6440,
               v18);
    if ( result >= 0 )
      result = 0;
    if ( result >= 0 )
    {
LABEL_29:
      result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                 a1,
                 a2[6],
                 SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                 a1 + 6168,
                 v18);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}

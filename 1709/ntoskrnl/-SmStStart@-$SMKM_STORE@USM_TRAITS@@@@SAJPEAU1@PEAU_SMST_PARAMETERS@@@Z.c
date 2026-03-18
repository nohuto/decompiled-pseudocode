/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004C74
 * Callers:
 *     SmProcessCreateRequest @ 0x140444D8C (SmProcessCreateRequest.c)
 * Callees:
 *     SmKmStoreHelperStart @ 0x140005060 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1400050EC (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400051F8 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmAcquireReleaseCharges @ 0x1400059FC (SmAcquireReleaseCharges.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SmFpPreAllocate @ 0x140272FBC (SmFpPreAllocate.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SmKmFileInfoDuplicate @ 0x14073A2A4 (SmKmFileInfoDuplicate.c)
 *     SmKmFileInfoInit @ 0x14073A4E4 (SmKmFileInfoInit.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStStart(__int64 a1, int **a2)
{
  int *v2; // r14
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  char v8; // cl
  char v9; // dl
  __int64 result; // rax
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
    return 3221225485LL;
  if ( v2[5] )
    return 3221225485LL;
  if ( (unsigned int)(v2[3] - 1) > 0x3FFFF )
    return 3221225485LL;
  v6 = v2[2];
  if ( !v6 || ((v6 - 1) & v6) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)v5 == 1 && (v5 & 0x100) != 0 )
    return 3221225659LL;
  if ( (v5 & 0x40000) == 0 && (v5 & 0xA0000) != 0 || (v5 & 0xA0000) == 0xA0000 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 6704) = a2[4];
  v7 = *((_DWORD *)a2 + 14);
  if ( !v7 )
    v7 = 7;
  *(_DWORD *)(a1 + 6712) = v7;
  *(_BYTE *)(a1 + 6020) = *(_BYTE *)v2;
  *(_BYTE *)(a1 + 6021) ^= (*(_BYTE *)(a1 + 6021) ^ (4 * ((unsigned int)*v2 >> 18))) & 4;
  v8 = *(_BYTE *)(a1 + 6021) ^ (*(_BYTE *)(a1 + 6021) ^ (8 * ((unsigned int)*v2 >> 17))) & 8;
  *(_BYTE *)(a1 + 6021) = v8;
  v9 = v8 ^ (v8 ^ (32 * ((unsigned int)*v2 >> 19))) & 0x20;
  *(_BYTE *)(a1 + 6021) = v9;
  *(_DWORD *)(a1 + 6208) = v2[2];
  if ( (unsigned __int8)*v2 )
  {
    SmKmFileInfoInit(a1 + 6216);
    *(_DWORD *)(a1 + 6212) = v2[3];
    v13 = v2[6];
    result = SmKmFileInfoDuplicate(a1 + 6216, *((_QWORD *)v2 + 6));
LABEL_39:
    if ( (int)result < 0 )
      return result;
    goto LABEL_22;
  }
  if ( (v9 & 4) != 0 )
  {
    memset((void *)(a1 + 6232), 0, 0x78uLL);
    *(_WORD *)(a1 + 6240) = 0;
    *(_BYTE *)(a1 + 6242) = 6;
    *(_DWORD *)(a1 + 6244) = 0;
    *(_QWORD *)(a1 + 6256) = a1 + 6248;
    *(_QWORD *)(a1 + 6248) = a1 + 6248;
    *(_WORD *)(a1 + 6264) = 0;
    *(_BYTE *)(a1 + 6266) = 6;
    *(_DWORD *)(a1 + 6268) = 0;
    *(_QWORD *)(a1 + 6280) = a1 + 6272;
    *(_QWORD *)(a1 + 6272) = a1 + 6272;
    memset((void *)(a1 + 6352), 0, 0x78uLL);
    *(_WORD *)(a1 + 6360) = 0;
    *(_BYTE *)(a1 + 6362) = 6;
    *(_DWORD *)(a1 + 6364) = 0;
    *(_QWORD *)(a1 + 6376) = a1 + 6368;
    *(_QWORD *)(a1 + 6368) = a1 + 6368;
    *(_WORD *)(a1 + 6384) = 0;
    *(_BYTE *)(a1 + 6386) = 6;
    *(_DWORD *)(a1 + 6388) = 0;
    *(_QWORD *)(a1 + 6400) = a1 + 6392;
    *(_QWORD *)(a1 + 6392) = a1 + 6392;
    memset((void *)(a1 + 6472), 0, 0x50uLL);
    *(_WORD *)(a1 + 6480) = 0;
    *(_BYTE *)(a1 + 6482) = 6;
    *(_DWORD *)(a1 + 6484) = 0;
    *(_QWORD *)(a1 + 6496) = a1 + 6488;
    *(_QWORD *)(a1 + 6488) = a1 + 6488;
    *(_WORD *)(a1 + 6504) = 0;
    *(_BYTE *)(a1 + 6506) = 6;
    *(_DWORD *)(a1 + 6508) = 0;
    *(_QWORD *)(a1 + 6520) = a1 + 6512;
    *(_QWORD *)(a1 + 6512) = a1 + 6512;
    *(_QWORD *)(a1 + 6536) = a1 + 6528;
    *(_QWORD *)(a1 + 6528) = 0LL;
    *(_QWORD *)(a1 + 6544) = 0LL;
    *(_QWORD *)(a1 + 6568) = a2[5];
    result = SmKmStoreHelperStart(a1 + 6232, a2[6]);
    if ( (int)result < 0 )
      return result;
    result = SmKmStoreHelperStart(a1 + 6352, a2[6]);
    if ( (int)result < 0 )
      return result;
    if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
      *(_QWORD *)(a1 + 6336) = &unk_14041B3E8;
    *(_QWORD *)(a1 + 6464) = &dword_14041B400;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6C526D73u);
    *(_QWORD *)(a1 + 6224) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x50uLL);
    if ( !(unsigned int)SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1LL, 0LL) )
      return 3221225626LL;
    *(_BYTE *)(a1 + 6021) |= 0x10u;
  }
  v12 = v2[3];
  *(_DWORD *)(a1 + 6212) = v12;
  v13 = 0;
  v14 = (unsigned int)(8 * v12);
  v15 = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x67526D73u);
  if ( !v15 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 6216) = v15;
  memset(v15, 0, (unsigned int)v14);
  if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
  {
    v18 = (*(_DWORD *)(a1 + 6208) & 0xFFFF000 | 0x10000500u) >> 8;
    result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 6592));
    goto LABEL_39;
  }
LABEL_22:
  memset(v19, 0, sizeof(v19));
  v16 = *(_DWORD *)(a1 + 6212);
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
  LODWORD(v19[0]) = v19[0] & 0xFFFFF7FF | (DWORD2(v19[2]) == 0 ? 0x800 : 0);
  result = ST_STORE<SM_TRAITS>::StStart(a1, v19);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
      goto LABEL_29;
    result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
               a1,
               a2[6],
               SMKM_STORE<SM_TRAITS>::SmStReadThread,
               a1 + 6472,
               v18);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
LABEL_29:
      result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                 a1,
                 a2[6],
                 SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                 a1 + 6200,
                 v18);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}

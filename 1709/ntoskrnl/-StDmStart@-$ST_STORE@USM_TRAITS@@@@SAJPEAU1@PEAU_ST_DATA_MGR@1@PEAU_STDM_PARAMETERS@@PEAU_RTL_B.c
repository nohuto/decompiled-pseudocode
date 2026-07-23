/*
 * XREFs of ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140005504
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400051F8 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 * Callees:
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x14000577C (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     SmHpChunkHeapInitialize @ 0x140006308 (SmHpChunkHeapInitialize.c)
 *     SmHpChunkHeapCleanup @ 0x140006D44 (SmHpChunkHeapCleanup.c)
 *     RtlSetAllBits @ 0x14012CF30 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ST_STORE<SM_TRAITS>::StDmStart(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  PVOID PoolWithTag; // rcx
  PVOID v15; // rdx
  __int64 v16; // rsi
  NTSTATUS result; // eax
  _QWORD v18[5]; // [rsp+28h] [rbp-41h] BYREF
  _QWORD SystemInformation[7]; // [rsp+50h] [rbp-19h] BYREF

  v6 = *a3;
  *(_OWORD *)(a2 + 776) = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 792) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 808) = *(_OWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 832) = v6;
  v11 = a1 + 5736;
  *(_QWORD *)(a2 + 824) = v10;
  v12 = (*(_DWORD *)(a2 + 776) & 0x40000) == 0;
  v13 = *(_QWORD *)(a1 + 4016);
  *(_QWORD *)(a2 + 1920) = v11;
  *(_QWORD *)(a2 + 896) = v13;
  *(_QWORD *)(a2 + 1000) = *(_QWORD *)(a1 + 3952);
  *(_QWORD *)(a2 + 1016) = a1 + 4064;
  *(_QWORD *)(a2 + 1784) = *(_QWORD *)(a1 + 4208);
  *(_QWORD *)(a2 + 1912) = a1 + 5744;
  *(_WORD *)(a2 + 992) = *(_WORD *)(a1 + 4032);
  *(_QWORD *)(a2 + 936) = a2 + 24;
  *(_QWORD *)(a2 + 944) = a2 + 88;
  *(_QWORD *)(a2 + 928) = v13;
  if ( !v12 )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    4 * (unsigned int)(((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
                    0x74536D73u);
    if ( !PoolWithTag )
      return -1073741670;
    *(_DWORD *)(a2 + 840) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a2 + 848) = PoolWithTag;
  }
  if ( (*(_DWORD *)(a2 + 776) & 0x40000) != 0 )
    RtlSetAllBits((PRTL_BITMAP)(a2 + 840));
  v15 = ExAllocatePoolWithTag(
          NonPagedPoolNx,
          4 * (unsigned int)(((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
          0x74536D73u);
  if ( !v15 )
    return -1073741670;
  *(_DWORD *)(a2 + 1072) = *(_DWORD *)(a1 + 12);
  *(_QWORD *)(a2 + 1080) = v15;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 1072));
  LODWORD(v16) = 16;
  *(_QWORD *)(a2 + 1032) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 1040) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 1048) = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 856) = a6;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 1016) + 24LL) )
  {
    SmHpChunkHeapCleanup(a2 + 192);
    SmHpChunkHeapInitialize((void *)(a2 + 192));
  }
  memset(v18, 0, sizeof(v18));
  if ( (*a3 & 8) != 0 )
  {
    result = ZwQuerySystemInformation(SystemMemoryUsageInformation, SystemInformation, 0x38u, 0LL);
    if ( result < 0 )
      return result;
    if ( SystemInformation[0] >> 21 >= 0x10uLL )
    {
      v16 = SystemInformation[0] >> 21;
      if ( SystemInformation[0] >> 21 > 0xFFFFFFFFuLL )
        LODWORD(v16) = -1;
    }
    v18[0] = (unsigned int)v16 | 0x400000000LL;
  }
  else
  {
    LODWORD(v18[0]) = -1;
  }
  v18[1] = ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes;
  v18[2] = ST_STORE<SM_TRAITS>::StNpLeafPageOut;
  v18[3] = ST_STORE<SM_TRAITS>::StNpLeafPageIn;
  v18[4] = ST_STORE<SM_TRAITS>::StNpLeafDelete;
  result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1376), (struct NP_CONTEXT::_NP_PARAMETERS *)v18);
  if ( result >= 0 )
  {
    result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1512), (struct NP_CONTEXT::_NP_PARAMETERS *)v18);
    if ( result >= 0 )
    {
      result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1648), (struct NP_CONTEXT::_NP_PARAMETERS *)v18);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}

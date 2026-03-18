/*
 * XREFs of ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400051F8
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004C74 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140005504 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x1400057FC (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x140127EC0 (RtlGetCompressionWorkSpaceSize.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SmCrEncStart @ 0x14073BF9C (SmCrEncStart.c)
 */

int __fastcall ST_STORE<SM_TRAITS>::StStart(__int64 a1, __int64 a2)
{
  unsigned int v4; // edx
  int v5; // r10d
  unsigned int v6; // ecx
  int v7; // r8d
  int v8; // edx
  SIZE_T v9; // rsi
  PVOID PoolWithTag; // rax
  int result; // eax
  ULONG v12; // ecx
  ULONG v13; // eax
  bool v14; // cc
  PVOID v15; // rax
  __int64 v16; // rax
  PVOID v17; // rax
  int v18; // r9d
  int v19; // esi
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  int v24; // r9d
  unsigned int v25; // r8d
  _DWORD *v26; // rax
  unsigned int v27; // esi
  PVOID v28; // rax
  unsigned int v29; // esi
  PVOID v30; // rax
  unsigned int v31; // [rsp+78h] [rbp+48h] BYREF
  ULONG CompressBufferWorkSpaceSize; // [rsp+80h] [rbp+50h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+88h] [rbp+58h] BYREF

  v4 = *(_DWORD *)(a2 + 8);
  if ( !v4 || ((v4 - 1) & v4) != 0 || v4 - 4096 > 0x1F000 )
    return -1073741453;
  v5 = *(_DWORD *)(a2 + 12);
  if ( (unsigned int)(v5 - 1) > 0x3FFFF )
    return -1073741811;
  v6 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
    return -1073741811;
  if ( (unsigned __int8)v6 == 1 )
  {
    v25 = *(_DWORD *)(a2 + 16);
    if ( !v25 )
      return -1073741811;
    if ( ((v25 - 1) & v25) != 0 )
      return -1073741811;
    if ( v25 > v4 )
      return -1073741811;
    v26 = *(_DWORD **)(a2 + 56);
    if ( !v26 || *v26 != v5 )
      return -1073741811;
  }
  else if ( !(_BYTE)v6 && (*(_DWORD *)(a2 + 16) || *(_QWORD *)(a2 + 56)) )
  {
    return -1073741811;
  }
  if ( (unsigned __int8)v6 >= 2u
    || v6 >= 0x100000
    || (*(_DWORD *)a2 & 0x600) == 0x600
    || (v6 & 0x10400) == 0x10400
    || (*(_QWORD *)(a2 + 32) == 0LL) != (*(_DWORD *)(a2 + 40) == 0) )
  {
    return -1073741811;
  }
  v7 = 0;
  if ( v4 > 0x10 )
  {
    do
      ++v7;
    while ( 16 << v7 < v4 );
  }
  *(_DWORD *)(a1 + 36) = v7;
  v8 = 1 << v7;
  *(_DWORD *)(a1 + 40) = 1 << v7;
  *(_DWORD *)(a1 + 32) = (1 << v7) - 1;
  if ( *(_DWORD *)(a2 + 8) == 0x20000 )
    v8 = (1 << v7) - 1;
  *(_DWORD *)(a1 + 40) = v8;
  if ( (unsigned __int8)*(_DWORD *)a2 )
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 40) != 0 ? 16 : 4;
  *(_DWORD *)(a1 + 44) = (unsigned int)(*(_DWORD *)(a1 + 48) + 4111) >> 4;
  if ( *(_DWORD *)(a2 + 12) > (unsigned int)(1 << (32 - v7)) )
    return -1073741306;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  v9 = (unsigned int)(2 * *(_DWORD *)(a2 + 12));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x74536D73u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, (unsigned int)v9);
  if ( (unsigned __int8)*(_DWORD *)a2 == 1 )
  {
    v27 = *(_DWORD *)(a2 + 12);
    v28 = ExAllocatePoolWithTag(NonPagedPoolNx, v27, 0x74536D73u);
    *(_QWORD *)(a1 + 64) = v28;
    if ( !v28 )
      return -1073741670;
    memset(v28, 0, v27);
    v29 = *(_DWORD *)(a2 + 12);
    v30 = ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x74536D73u);
    *(_QWORD *)(a1 + 72) = v30;
    if ( !v30 )
      return -1073741670;
    memset(v30, 0, v29);
  }
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    *(_WORD *)(a1 + 4032) = 3;
  else
    *(_WORD *)(a1 + 4032) = 4;
  result = RtlGetCompressionWorkSpaceSize(
             *(_WORD *)(a1 + 4032),
             &CompressBufferWorkSpaceSize,
             &CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    v12 = CompressBufferWorkSpaceSize;
    v13 = CompressFragmentWorkSpaceSize;
    v14 = CompressBufferWorkSpaceSize <= CompressFragmentWorkSpaceSize;
    *(_DWORD *)(a1 + 4028) = CompressBufferWorkSpaceSize;
    if ( v14 )
      v12 = v13;
    *(_DWORD *)(a1 + 4024) = v13;
    CompressBufferWorkSpaceSize = v12;
    if ( v12 )
    {
      v15 = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x74536D73u);
      *(_QWORD *)(a1 + 4016) = v15;
      if ( !v15 )
        return -1073741670;
    }
    v16 = *(_QWORD *)(a2 + 48);
    if ( v16 )
    {
      *(_QWORD *)(a1 + 3952) = v16;
    }
    else
    {
      result = StEtaHelper::StartHelper((struct _ST_ETA_CONTEXT *)(a1 + 3960), 0);
      if ( result < 0 )
        return result;
      *(_QWORD *)(a1 + 3952) = a1 + 3960;
    }
    if ( !(unsigned __int8)*(_DWORD *)a2 )
    {
      if ( *(_DWORD *)(a2 + 40) )
        return -1073741066;
      goto LABEL_36;
    }
    if ( !*(_DWORD *)(a2 + 40) )
      goto LABEL_36;
    result = SmCrEncStart(a1 + 4064, *(_QWORD *)(a2 + 32));
    if ( result < 0 )
      return result;
    if ( ((*(_DWORD *)(a1 + 4072) + 15) & ~(*(_DWORD *)(a1 + 4072) - 1)) == 0x10 )
    {
LABEL_36:
      v17 = ExAllocatePoolWithTag(
              NonPagedPoolNx,
              (-(__int64)((*(_DWORD *)a2 & 0x8000) != 0) & 0x1000) + 4096,
              0x74536D73u);
      *(_QWORD *)(a1 + 4208) = v17;
      if ( v17 )
      {
        if ( (unsigned __int8)*(_DWORD *)a2 != 1 )
        {
          v19 = 0;
LABEL_39:
          v20 = *(_DWORD *)a2;
          if ( !v19 || (v20 & 0x4000) != 0 )
            v21 = 0;
          else
            v21 = 8;
          if ( (_BYTE)v20 )
          {
            v23 = v21 & 0xFFFFFF9F | (*(_DWORD *)a2 >> 8) & 1;
          }
          else
          {
            v22 = v21 & 0xFFFFFF9F | (*(_DWORD *)a2 >> 8) & 1 | 0x40;
            v31 = v22;
            if ( (v20 & 0x40000) == 0 )
            {
LABEL_45:
              result = ST_STORE<SM_TRAITS>::StDmStart(a1, (int)a1 + 80, (unsigned int)&v31, v18);
              if ( result >= 0 )
              {
                if ( !v19 )
                  return 0;
                v31 = v31 & 0xFFFFFFE0 | 0x16;
                result = ST_STORE<SM_TRAITS>::StDmStart(a1, (int)a1 + 2016, (unsigned int)&v31, v24);
                if ( result >= 0 )
                  return 0;
              }
              return result;
            }
            v23 = v22 | 0x60;
          }
          v31 = v23;
          goto LABEL_45;
        }
        v19 = 1;
        if ( RtlNumberOfSetBits(*(PRTL_BITMAP *)(a2 + 56)) > 1 )
          goto LABEL_39;
        return -1073741811;
      }
      return -1073741670;
    }
    return -1073741453;
  }
  return result;
}

/*
 * XREFs of ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005D274
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14011FD90 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 * Callees:
 *     MmAreMdlPagesCached @ 0x140022450 (MmAreMdlPagesCached.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14005DCDC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024B13C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRetrieve(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // r12d
  bool v7; // zf
  __int64 v8; // xmm1_8
  _BYTE *v9; // r15
  int v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // r14d
  __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-48h]
  unsigned int v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  _BYTE v24[16]; // [rsp+60h] [rbp-20h] BYREF

  v19 = 0LL;
  v20 = (__int64 *)&v19;
  v4 = *(_DWORD *)(a3 + 8);
  v5 = a2;
  *(_BYTE *)(a3 + 8) = 0;
  v7 = *(_QWORD *)(a2 + 48) == 0LL;
  v8 = *(_QWORD *)(a3 + 24);
  v22 = *(_OWORD *)(a3 + 8);
  v21 = (unsigned __int8)v4;
  v23 = v8;
  if ( !v7 && !(unsigned int)MmAreMdlPagesCached(*(_DWORD **)(a3 + 16)) )
    *(_DWORD *)(a3 + 8) |= 0x8000000u;
  v9 = v24;
  v10 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, v5, (unsigned int)&v22, a3, (__int64)v24);
  v11 = v22;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = v23;
    while ( 1 )
    {
      v14 = (__int64)(v9 + 16);
      if ( v12 != 259 )
        v14 = (__int64)v9;
      v9 = (_BYTE *)v14;
      v11 ^= (unsigned __int8)(v11 ^ (v11 + 1));
      LODWORD(v22) = v11;
      if ( (unsigned __int8)v11 >= v21 )
        break;
      LODWORD(v23) = ++v13;
      v12 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, v5, (unsigned int)&v22, a3, v14);
      if ( v12 < 0 )
        goto LABEL_12;
    }
    v12 = 0;
  }
LABEL_12:
  if ( (unsigned __int8)v11 != *(_BYTE *)(a3 + 8) )
    *(_BYTE *)(a3 + 8) = v22;
  v15 = v20;
  if ( v20 != (__int64 *)&v19 )
  {
    while ( v15 != (__int64 *)&v19 )
    {
      v17 = v19;
      v19 = (__int64 *)(*v19 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v17 == v15 )
      {
        v19 = 0LL;
        v20 = (__int64 *)&v19;
      }
      else
      {
        *v15 = *v15 & 7 | (8 * ((unsigned __int64)*v15 >> 3) - 8);
      }
      if ( (*((_DWORD *)v17 + 7) & 1) == 0 )
      {
        *((_DWORD *)v17 + 7) |= 1u;
        v18 = v17[2];
        if ( v18 )
          *(_DWORD *)(v18 + 4) = v12;
        else
          *((_DWORD *)v17 + 2) = v12;
      }
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v17);
      v15 = v20;
    }
    return 259;
  }
  return (unsigned int)v12;
}

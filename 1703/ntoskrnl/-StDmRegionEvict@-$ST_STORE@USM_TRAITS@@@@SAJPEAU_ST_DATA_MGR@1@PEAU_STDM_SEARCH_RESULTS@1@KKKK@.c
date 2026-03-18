/*
 * XREFs of ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14024C0D0
 * Callers:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14024C4D8 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400587E0 (SmEtwEnabled.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005B2AC (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x14024C278 (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 *     SmEtwLogRegionOp @ 0x14024D7AC (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionEvict(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // ebx
  __int64 v6; // r13
  ULONGLONG *v8; // rax
  __int64 v9; // rdx
  char v10; // r8
  void *v11; // rsp
  int Keys; // r14d
  __int64 v13; // rbx
  int v14; // eax
  int *v15; // rbx
  int *v16; // rdi
  int v17; // ecx
  _DWORD Base[240]; // [rsp+20h] [rbp-400h] BYREF
  size_t NumOfElements; // [rsp+420h] [rbp+0h] BYREF
  _DWORD v21[8]; // [rsp+428h] [rbp+8h] BYREF
  __int64 v22; // [rsp+448h] [rbp+28h]

  v5 = a2;
  v22 = a2;
  v6 = a3;
  memset(v21, 0, sizeof(v21));
  v21[4] |= 1u;
  v21[0] = v21[0] & 0xFFFFFFF8 | 1;
  v8 = SmEtwEnabled(0);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 1032);
    if ( v9 )
      v10 = *(_BYTE *)(v6 + v9);
    else
      v10 = 0;
    SmEtwLogRegionOp((_DWORD)v8, 3, a1, v6, 0, *(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v6), v10);
  }
  v11 = alloca(1024LL);
  do
  {
    LODWORD(NumOfElements) = 256;
    Keys = ST_STORE<SM_TRAITS>::StDmRegionGetKeys(a1, v5, v6, 0, a5, (__int64)Base, (__int64)&NumOfElements);
    if ( Keys < 0 || !(_DWORD)NumOfElements )
      break;
    v13 = (unsigned int)NumOfElements;
    qsort(Base, (unsigned int)NumOfElements, 4uLL, ST_STORE<SM_TRAITS>::StpKeyCompare);
    v14 = Base[0];
    v15 = &Base[v13];
    v21[2] = Base[0];
    v16 = Base;
    v17 = 0;
LABEL_10:
    if ( v14 != *v16 )
      goto LABEL_13;
    while ( 1 )
    {
      ++v17;
      if ( ++v16 < v15 )
      {
        ++v14;
        goto LABEL_10;
      }
      if ( v16 != v15 )
        break;
LABEL_13:
      v21[3] = v17;
      Keys = ST_STORE<SM_TRAITS>::StDmPageRemove((struct NP_CONTEXT::NP_CTX *)a1, (__int64)v21);
      if ( Keys < 0 )
        return (unsigned int)Keys;
      v14 = *v16;
      v17 = 0;
      v21[2] = *v16;
    }
    v5 = v22;
  }
  while ( (unsigned int)NumOfElements >= 0x100 );
  return (unsigned int)Keys;
}

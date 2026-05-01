/*
 * XREFs of ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180019D90
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019990 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019AF8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180019F48 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 */

struct _RM_PSM_APP_FAMILY *__fastcall RmpPsmAppFamilyTableFind(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_APP_FAMILY_ID *a2)
{
  WCHAR *v2; // rsi
  WCHAR *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r10
  int v11; // r9d
  WCHAR v13; // [rsp+40h] [rbp+8h]

  v2 = (WCHAR *)((char *)a2 + 464);
  v5 = (WCHAR *)a2;
  v6 = 314159LL;
  if ( a2 < (struct _RM_PSM_APP_FAMILY_ID *)((char *)a2 + 464) )
  {
    do
    {
      v13 = RtlUpcaseUnicodeChar(*v5++);
      v6 = HIBYTE(v13) + 37 * ((unsigned __int8)v13 + 37 * v6);
    }
    while ( v5 < v2 );
  }
  v7 = 9LL;
  do
  {
    v8 = *(unsigned __int8 *)v2;
    v2 += 4;
    v6 = *((unsigned __int8 *)v2 - 1)
       + 37
       * (*((unsigned __int8 *)v2 - 2)
        + 37
        * (*((unsigned __int8 *)v2 - 3)
         + 37
         * (*((unsigned __int8 *)v2 - 4)
          + 37
          * (*((unsigned __int8 *)v2 - 5)
           + 37 * (*((unsigned __int8 *)v2 - 6) + 37 * (*((unsigned __int8 *)v2 - 7) + 37 * (v8 + 37 * v6)))))));
    --v7;
  }
  while ( v7 );
  v9 = 0LL;
LABEL_6:
  v10 = v6 & (-1LL << (*((_BYTE *)a1 + 1572) & 0x1F));
  if ( v9 )
    goto LABEL_9;
  v11 = *((_DWORD *)a1 + 393) >> 5;
  if ( v11 )
  {
    v9 = *((_QWORD *)a1 + 197)
       + 8LL
       * ((37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v10)) & (unsigned int)(v11 - 1));
LABEL_9:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v10 == ((-1LL << (*((_BYTE *)a1 + 1572) & 0x1F)) & *(_QWORD *)(v9 + 8)) )
      {
        if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v9, a2) )
          goto LABEL_6;
        return (struct _RM_PSM_APP_FAMILY *)v9;
      }
    }
  }
  return 0LL;
}

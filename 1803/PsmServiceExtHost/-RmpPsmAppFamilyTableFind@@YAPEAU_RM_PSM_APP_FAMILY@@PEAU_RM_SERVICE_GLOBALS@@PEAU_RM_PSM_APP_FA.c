/*
 * XREFs of ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000CF70
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000230C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800092B8 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000C1E4 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800523C4 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x1800526DC (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpActivityHostFindMixedHostForHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU1@@Z @ 0x180054550 (-RmpActivityHostFindMixedHostForHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU1@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18000BCB4 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 */

struct _RM_PSM_APP_FAMILY *__fastcall RmpPsmAppFamilyTableFind(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_APP_FAMILY_ID *a2)
{
  WCHAR *v2; // rsi
  struct _RM_SERVICE_GLOBALS *v4; // r9
  WCHAR *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // r10d
  __int64 v11; // r11
  __int64 v12; // r9
  unsigned int v13; // r10d
  int v14; // eax
  WCHAR v17; // [rsp+68h] [rbp+10h]

  v2 = (WCHAR *)((char *)a2 + 464);
  v4 = a1;
  v5 = (WCHAR *)a2;
  v6 = 314159LL;
  if ( a2 < (struct _RM_PSM_APP_FAMILY_ID *)((char *)a2 + 464) )
  {
    do
    {
      v17 = RtlUpcaseUnicodeChar(*v5++);
      v6 = HIBYTE(v17) + 37 * ((unsigned __int8)v17 + 37 * v6);
    }
    while ( v5 < v2 );
    v4 = a1;
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
LABEL_7:
  v10 = *((_DWORD *)v4 + 499);
  v11 = -1LL << (*((_BYTE *)v4 + 1996) & 0x1F);
  v12 = v6 & v11;
  if ( v9 )
    goto LABEL_10;
  v13 = v10 >> 5;
  if ( v13 )
  {
    v9 = *((_QWORD *)a1 + 250)
       + 8
       * ((((v6 & (unsigned __int64)v11) >> 56)
         + 37
         * ((unsigned __int8)((v6 & (unsigned __int64)v11) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v6 & (unsigned __int64)v11) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v6 & (unsigned __int64)v11) >> 32)
            + 37
            * ((((unsigned int)v6 & (unsigned int)v11) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v6 & (unsigned int)v11) >> 16)
              + 37 * ((unsigned __int8)((unsigned __int16)(v6 & v11) >> 8) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (v13 - 1));
LABEL_10:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v9 + 8)) )
      {
        if ( v9 )
        {
          v14 = RmpPsmAppFamilyCompareForHashTable((const wchar_t *)v9, (const wchar_t *)a2);
          v4 = a1;
          if ( !v14 )
            goto LABEL_7;
        }
        return (struct _RM_PSM_APP_FAMILY *)v9;
      }
    }
  }
  return 0LL;
}

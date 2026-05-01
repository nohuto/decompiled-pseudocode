/*
 * XREFs of ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D710
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180020220 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18005B68C (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18000BCB4 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000C350 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x18000CE50 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E028 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D5F8 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180054BE0 (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  ExecutionModel::ResourceManager *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r13
  WCHAR *v6; // rbx
  __int64 v7; // rdi
  WCHAR *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r11
  __int64 v13; // r9
  int v14; // r10d
  struct _RM_ACTIVITY_HOST *v15; // rbx
  WCHAR v16; // [rsp+20h] [rbp-458h]
  __int64 v18; // [rsp+30h] [rbp-448h]
  wchar_t v19[232]; // [rsp+40h] [rbp-438h] BYREF
  WCHAR v20[40]; // [rsp+210h] [rbp-268h] BYREF
  char v21[464]; // [rsp+260h] [rbp-218h] BYREF

  v3 = this;
  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities((unsigned __int64)this, a2);
  if ( *((_DWORD *)a2 + 156) == 2 && !RmpActivityHostIsPple(a2) )
  {
    v4 = *((_QWORD *)a2 + 6);
    v5 = 0LL;
    v18 = v4;
    if ( CempPackageFamilyNameFromPsmKey((__int64)a2 + 88, (__int64)v21) >= 0 )
    {
      RmpPsmAppFamilyIdInitialize(
        v21,
        (struct _RM_ACTIVITY_HOST *)((char *)a2 + 552),
        *((_DWORD *)a2 + 155),
        (struct _RM_PSM_APP_FAMILY_ID *)v19);
      v6 = v19;
      v7 = 314159LL;
      do
      {
        v16 = RtlUpcaseUnicodeChar(*v6++);
        v7 = HIBYTE(v16) + 37 * ((unsigned __int8)v16 + 37 * v7);
      }
      while ( v6 < v20 );
      v8 = v20;
      v9 = 9LL;
      do
      {
        v10 = *(unsigned __int8 *)v8;
        v8 += 4;
        v7 = *((unsigned __int8 *)v8 - 1)
           + 37
           * (*((unsigned __int8 *)v8 - 2)
            + 37
            * (*((unsigned __int8 *)v8 - 3)
             + 37
             * (*((unsigned __int8 *)v8 - 4)
              + 37
              * (*((unsigned __int8 *)v8 - 5)
               + 37 * (*((unsigned __int8 *)v8 - 6) + 37 * (*((unsigned __int8 *)v8 - 7) + 37 * (v10 + 37 * v7)))))));
        --v9;
      }
      while ( v9 );
      v11 = 0LL;
LABEL_9:
      v12 = -1LL << (*(_BYTE *)(v4 + 1996) & 0x1F);
      v13 = v7 & v12;
      if ( v11 )
      {
        v4 = v18;
LABEL_12:
        while ( 1 )
        {
          v11 = *(_QWORD *)v11;
          if ( (v11 & 1) != 0 )
            break;
          if ( v13 == (v12 & *(_QWORD *)(v11 + 8)) )
          {
            if ( !(unsigned int)RmpPsmAppFamilyCompareForHashTable((const wchar_t *)v11, v19) )
              goto LABEL_9;
            v3 = this;
            if ( v11 )
              v5 = v11;
            goto LABEL_17;
          }
        }
      }
      else
      {
        v14 = *(_DWORD *)(v4 + 1996) >> 5;
        if ( v14 )
        {
          v4 = v18;
          v11 = *(_QWORD *)(v18 + 2000)
              + 8
              * ((((v7 & (unsigned __int64)v12) >> 56)
                + 37
                * ((unsigned __int8)((v7 & (unsigned __int64)v12) >> 48)
                 + 37
                 * ((unsigned __int8)((unsigned __int16)((v7 & (unsigned __int64)v12) >> 32) >> 8)
                  + 37
                  * ((unsigned __int8)((v7 & (unsigned __int64)v12) >> 32)
                   + 37
                   * ((((unsigned int)v7 & (unsigned int)v12) >> 24)
                    + 37
                    * ((unsigned __int8)(((unsigned int)v7 & (unsigned int)v12) >> 16)
                     + 37
                     * ((unsigned __int8)((unsigned __int16)(v7 & v12) >> 8) + 37 * ((unsigned __int8)v13 + 11623883)))))))) & (unsigned int)(v14 - 1));
          goto LABEL_12;
        }
      }
      v3 = this;
    }
LABEL_17:
    v15 = *(struct _RM_ACTIVITY_HOST **)(v5 + 568);
    if ( v15 )
    {
      if ( RmpActivityHostTryGetPpleResourceSet(v15) )
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities((unsigned __int64)v3, v15);
    }
  }
}

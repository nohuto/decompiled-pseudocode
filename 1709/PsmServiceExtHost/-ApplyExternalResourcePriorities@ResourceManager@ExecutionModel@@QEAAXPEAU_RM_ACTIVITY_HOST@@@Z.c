/*
 * XREFs of ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EEC0
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180011C00 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x1800124B4 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EE44 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018F44 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180019BA0 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180019C70 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180019F48 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036608 (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  WCHAR *v6; // rbx
  __int64 v7; // rdi
  WCHAR *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r10
  int v13; // r9d
  struct _RM_ACTIVITY_HOST *v14; // rbx
  WCHAR v15; // [rsp+20h] [rbp-428h]
  _BYTE v16[464]; // [rsp+30h] [rbp-418h] BYREF
  WCHAR v17[40]; // [rsp+200h] [rbp-248h] BYREF
  unsigned __int16 v18[232]; // [rsp+250h] [rbp-1F8h] BYREF

  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities((unsigned __int64)this, a2);
  if ( !*((_DWORD *)a2 + 14) && *((_DWORD *)a2 + 156) == 2 && !RmpActivityHostIsPple(a2) )
  {
    v4 = *((_QWORD *)a2 + 5);
    v5 = 0LL;
    if ( (int)CempPackageFamilyNameFromPsmKey((char *)a2 + 88, v18) >= 0 )
    {
      RmpPsmAppFamilyIdInitialize(
        v18,
        (struct _RM_ACTIVITY_HOST *)((char *)a2 + 552),
        *((_DWORD *)a2 + 155),
        (struct _RM_PSM_APP_FAMILY_ID *)v16);
      v6 = (WCHAR *)v16;
      v7 = 314159LL;
      do
      {
        v15 = RtlUpcaseUnicodeChar(*v6++);
        v7 = HIBYTE(v15) + 37 * ((unsigned __int8)v15 + 37 * v7);
      }
      while ( v6 < v17 );
      v8 = v17;
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
LABEL_10:
      v12 = v7 & (-1LL << (*(_BYTE *)(v4 + 1572) & 0x1F));
      if ( v11 )
        goto LABEL_13;
      v13 = *(_DWORD *)(v4 + 1572) >> 5;
      if ( v13 )
      {
        v11 = *(_QWORD *)(v4 + 1576)
            + 8LL
            * ((37
              * (BYTE6(v12)
               + 37
               * (BYTE5(v12)
                + 37
                * (BYTE4(v12)
                 + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
              + HIBYTE(v12)) & (unsigned int)(v13 - 1));
LABEL_13:
        while ( 1 )
        {
          v11 = *(_QWORD *)v11;
          if ( (v11 & 1) != 0 )
            break;
          if ( v12 == ((-1LL << (*(_BYTE *)(v4 + 1572) & 0x1F)) & *(_QWORD *)(v11 + 8)) )
          {
            if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v11, v16) )
              goto LABEL_10;
            if ( v11 )
              v5 = v11;
            break;
          }
        }
      }
    }
    v14 = *(struct _RM_ACTIVITY_HOST **)(v5 + 568);
    if ( v14 )
    {
      if ( RmpActivityHostTryGetPpleResourceSet(v14) )
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities((unsigned __int64)this, v14);
    }
  }
}

/*
 * XREFs of ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800023B0
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000230C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180004D64 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18002511C (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180025180 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AB0 (-HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065334 (-HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  char *v5; // rbx
  __int64 v7; // rsi
  int v8; // edi
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v10; // r14
  int v11; // eax
  int v12; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
  {
    v5 = (char *)a4 + 16;
    v7 = a3;
    do
    {
      if ( v5[5] )
      {
        v13[1] = a2;
        v13[0] = RmpActivityHostEnumerateResourceSetGetFirst(a5, a2, 0LL);
        v8 = 101;
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v13);
        if ( Next )
        {
          v10 = *((int *)v5 - 4);
          do
          {
            v11 = *((_DWORD *)Next + v10 + 402);
            if ( v8 < v11 )
              v11 = v8;
            v8 = v11;
            Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v13);
          }
          while ( Next );
        }
        if ( v8 >= *(_DWORD *)v5 )
          v8 = *(_DWORD *)v5;
        *(_DWORD *)v5 = v8;
        if ( (*((_BYTE *)a5 + 804) & 1) != 0 )
        {
          HampHostAcquireLockShared((struct _RM_ACTIVITY_HOST *)((char *)a5 + 64));
          if ( (unsigned int)HampHostHasExternalResourceAccess((char *)a5 + 64, *((unsigned int *)v5 - 4)) )
          {
            v12 = *(_DWORD *)v5;
            if ( *(int *)v5 > 2 )
              v12 = 2;
            *(_DWORD *)v5 = v12;
          }
          HampHostReleaseLockShared((struct _RM_ACTIVITY_HOST *)((char *)a5 + 64));
        }
      }
      v5 += 24;
      --v7;
    }
    while ( v7 );
  }
}

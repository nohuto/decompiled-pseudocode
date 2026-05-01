/*
 * XREFs of ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B5CC
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B54C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  __int64 v6; // rsi
  char *v7; // rbx
  int v8; // edi
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v10; // rbp
  int v11; // eax
  int v12; // eax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 )
  {
    v6 = a3;
    v7 = (char *)a4 + 16;
    do
    {
      if ( v7[5] )
      {
        v13[1] = a2;
        v13[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a5, a2, 0);
        v8 = 101;
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v13);
        if ( Next )
        {
          v10 = *((int *)v7 - 4);
          do
          {
            v11 = *((_DWORD *)Next + v10 + 404);
            if ( v8 >= v11 )
              v8 = v11;
            Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v13);
          }
          while ( Next );
        }
        v12 = *(_DWORD *)v7;
        if ( v8 < *(_DWORD *)v7 )
          v12 = v8;
        *(_DWORD *)v7 = v12;
      }
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
}

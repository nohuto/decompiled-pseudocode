/*
 * XREFs of ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18004F56C
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 * Callees:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18001E5F8 (-IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18001E708 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x18001ED78 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::TransitionResources(
        char ***this,
        struct ExecutionModel::ResourceSet *a2,
        struct ExecutionModel::ResourceSet *a3)
{
  unsigned __int64 v5; // rax
  bool v6; // zf
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  ExecutionModel::_ResourceSetInfo *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(this, (const unsigned __int16 **)a2, &v12);
  v5 = *((_QWORD *)a3 + 232);
  if ( !v5 )
  {
    v5 = v12;
    if ( !v12 || *((_QWORD *)a2 + 28) <= v12 )
      v5 = *((_QWORD *)a2 + 28);
  }
  v6 = *((_QWORD *)a3 + 190) == 0LL;
  *((_QWORD *)a3 + 28) = v5;
  if ( v6 )
  {
    *((_QWORD *)a3 + 190) = *((_QWORD *)a2 + 190);
    *((_QWORD *)a3 + 185) = *((_QWORD *)a2 + 185);
    *((_QWORD *)a3 + 189) = *((_QWORD *)a2 + 189);
    *((_QWORD *)a3 + 227) = *((_QWORD *)a2 + 227);
  }
  *((_QWORD *)a2 + 28) = 0LL;
  v7 = *((_QWORD *)a3 + 233);
  if ( v7 )
  {
    v8 = *((_QWORD *)a2 + 31);
    if ( v8 > v7 )
    {
      ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a3, 2u, v8 - v7);
      v7 = *((_QWORD *)a3 + 233);
    }
  }
  else if ( ExecutionModel::_ResourceSetInfo::IsPaused((struct ExecutionModel::ResourceSet *)((char *)a3 + 1456))
         || ExecutionModel::_ResourceSetInfo::IsFrozen(v9) )
  {
    ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a3, 2u, *((_QWORD *)a2 + 31));
    v7 = 0LL;
  }
  else
  {
    v7 = *((_QWORD *)a2 + 31);
  }
  *((_QWORD *)a3 + 31) = v7;
  *((_QWORD *)a2 + 31) = 0LL;
  v10 = *((_QWORD *)a3 + 231);
  v11 = *((_QWORD *)a2 + 25);
  if ( v11 > v10 )
    ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a2, 0, v11 - v10);
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a3 + 25) = *((_QWORD *)a3 + 231);
}

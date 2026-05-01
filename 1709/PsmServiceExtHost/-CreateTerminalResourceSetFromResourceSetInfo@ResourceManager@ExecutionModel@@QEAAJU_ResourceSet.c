/*
 * XREFs of ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x180003200
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x180001944 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 *     ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x1800334DC (-RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSet.c)
 * Callees:
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180001F40 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x1800101CC (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001F378 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
        ExecutionModel::ResourceManager *a1,
        __int64 a2,
        struct _RM_PARTITION *a3,
        const unsigned __int16 *a4,
        union _RM_SID *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct ExecutionModel::ResourceSet **a9)
{
  int v11; // ecx
  _DWORD *v14; // rax
  __int64 v15; // rdx
  bool IsFrozen; // al
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r8d
  _DWORD *v22; // rdi
  __int64 i; // rcx
  _QWORD *v24; // rsi
  unsigned __int64 v25; // rax
  int v26; // eax
  struct ExecutionModel::ResourceSet *v27; // rdi
  int v28; // ebx
  __int64 v29; // rcx
  int v30; // ebx
  struct ExecutionModel::ResourceSet *v32; // [rsp+90h] [rbp-58h] BYREF
  union _RM_SID *v33; // [rsp+98h] [rbp-50h]

  v32 = 0LL;
  *(_WORD *)(a2 + 40) |= 2u;
  v11 = *((_DWORD *)a1 + 17);
  v33 = a5;
  v14 = (_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 8) = v11;
  *(_DWORD *)(a2 + 32) = v11;
  v15 = 3LL;
  do
  {
    *v14 = v11;
    v14 += 6;
    --v15;
  }
  while ( v15 );
  IsFrozen = ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)a2);
  ExecutionModel::_ResourceSetInfo::SetAmount(a2, v17, !IsFrozen);
  ExecutionModel::_ResourceSetInfo::SetAmount(v18, 1, 0LL);
  ExecutionModel::_ResourceSetInfo::SetAmount(v19, 2, v20);
  v22 = (_DWORD *)(a2 + 160);
  for ( i = (unsigned int)(v21 + 50); i; --i )
    *v22++ = v21 + 101;
  v24 = operator new((unsigned int)(v21 + 32), (const struct std::nothrow_t *)&unk_180052630);
  if ( v24 )
  {
    *v24 = &ExecutionModel::TerminalResourceSetCallback::`vftable';
    v24[1] = 0LL;
    v24[2] = 0LL;
    *((_DWORD *)v24 + 6) = 1;
    *((_BYTE *)v24 + 28) = 0;
    v25 = HamObjectIdGenerate(1LL);
    v26 = ExecutionModel::ResourceManager::AcquireResourceSet(
            a1,
            (const struct ExecutionModel::_ResourceSetInfo *)a2,
            a3,
            0LL,
            (struct ExecutionModel::IResourceSetCallback *)v24,
            0LL,
            a4,
            v33,
            a6,
            a7,
            a8,
            0,
            0LL,
            0LL,
            0LL,
            v25,
            &v32);
    v27 = v32;
    v28 = v26;
    if ( v26 >= 0 )
    {
      *((_DWORD *)v32 + 363) |= 2u;
      v29 = v24[1];
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v24[1] = v27;
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v27 + 8LL))(v27);
      v30 = TpAllocWork(v24 + 2, ExecutionModel::TerminalResourceSetCallback::RevokeWorkerCallback, v24, 0LL);
      if ( v30 >= 0 )
        v30 = 0;
      v28 = v30 | 0x10000000;
      if ( v28 >= 0 )
      {
        *a9 = v27;
        v28 = 0;
        v27 = 0LL;
      }
    }
    if ( v27 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)v27 + 32LL))(v27, 0LL);
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v28;
}

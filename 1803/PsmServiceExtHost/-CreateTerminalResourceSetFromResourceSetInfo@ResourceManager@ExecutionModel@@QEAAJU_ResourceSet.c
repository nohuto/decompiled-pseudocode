/*
 * XREFs of ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x18004EB24
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x18005A9D4 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180011D10 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18001E708 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F5B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18004CBB0 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
        ExecutionModel::ResourceManager *a1,
        __int64 a2,
        struct _RM_PARTITION *a3,
        wchar_t *a4,
        void *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct ExecutionModel::ResourceSet **a9)
{
  _DWORD *v13; // rax
  __int64 v14; // rcx
  bool IsFrozen; // al
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r8d
  _DWORD *v20; // rdi
  __int64 i; // rcx
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rax
  int v24; // eax
  struct ExecutionModel::ResourceSet *v25; // rdi
  int v26; // ebx
  __int64 v27; // rcx
  int v28; // ebx
  struct ExecutionModel::ResourceSet *v30; // [rsp+90h] [rbp-58h] BYREF
  PSID Sid; // [rsp+98h] [rbp-50h]

  v30 = 0LL;
  *(_WORD *)(a2 + 40) |= 2u;
  Sid = a5;
  *(_DWORD *)(a2 + 8) = 16;
  v13 = (_DWORD *)(a2 + 96);
  *(_DWORD *)(a2 + 32) = 16;
  v14 = 3LL;
  do
  {
    *v13 = 16;
    v13 += 6;
    --v14;
  }
  while ( v14 );
  IsFrozen = ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)a2);
  ExecutionModel::_ResourceSetInfo::SetAmount(a2, 0, !IsFrozen);
  ExecutionModel::_ResourceSetInfo::SetAmount(v16, 1, 0LL);
  ExecutionModel::_ResourceSetInfo::SetAmount(v17, 2, v18);
  v20 = (_DWORD *)(a2 + 152);
  for ( i = (unsigned int)(v19 + 50); i; --i )
    *v20++ = v19 + 101;
  v22 = operator new((unsigned int)(v19 + 32), (const struct std::nothrow_t *)&std::nothrow);
  if ( v22 )
  {
    *v22 = &ExecutionModel::TerminalResourceSetCallback::`vftable';
    v22[1] = 0LL;
    v22[2] = 0LL;
    *((_DWORD *)v22 + 6) = 1;
    *((_BYTE *)v22 + 28) = 0;
    v23 = HamObjectIdGenerate(1);
    v24 = ExecutionModel::ResourceManager::AcquireResourceSet(
            a1,
            (const struct ExecutionModel::_ResourceSetInfo *)a2,
            a3,
            0LL,
            (struct ExecutionModel::IResourceSetCallback *)v22,
            0LL,
            a4,
            Sid,
            a6,
            a7,
            a8,
            0,
            0LL,
            0LL,
            0LL,
            v23,
            &v30);
    v25 = v30;
    v26 = v24;
    if ( v24 >= 0 )
    {
      *((_DWORD *)v30 + 363) |= 2u;
      v27 = v22[1];
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v22[1] = v25;
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v25 + 8LL))(v25);
      v28 = TpAllocWork(v22 + 2, ExecutionModel::TerminalResourceSetCallback::RevokeWorkerCallback, v22, 0LL);
      if ( v28 >= 0 )
        v28 = 0;
      v26 = v28 | 0x10000000;
      if ( v26 >= 0 )
      {
        *a9 = v25;
        v26 = 0;
        v25 = 0LL;
      }
    }
    if ( v25 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)v25 + 32LL))(v25, 0LL);
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v26;
}

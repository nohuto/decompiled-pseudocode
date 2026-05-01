/*
 * XREFs of RmCoreRpcSrvAcquireResourceSet @ 0x18001ADA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800100E0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180018934 (-RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x18001AF30 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18001AF60 (-RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@P.c)
 *     RmpResourceLimitsAreLegal @ 0x18001B01C (RmpResourceLimitsAreLegal.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001F378 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmCoreRpcSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS **a1,
        __int64 a2,
        unsigned __int64 a3,
        wchar_t *a4,
        _BYTE *a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        struct ExecutionModel::ResourceSet **a10)
{
  __int64 v13; // r10
  struct ExecutionModel::_ResourceSetInfo *v14; // r8
  ExecutionModel *v15; // r10
  struct ExecutionModel::IResourceSetCallback *v16; // rdi
  struct ExecutionModel::ResourceSet *v17; // rsi
  int v18; // ebx
  unsigned int v19; // ebx
  unsigned int (__fastcall *v20)(ResourceSetCallbackThunk *__hidden); // rax
  bool v22; // [rsp+70h] [rbp-1D8h] BYREF
  _BYTE v23[384]; // [rsp+80h] [rbp-1C8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v23);
  if ( (unsigned int)RmpResourceLimitsAreLegal(v13 + 40, 0LL, 0LL) )
  {
    ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(v15, (struct _RM_RESOURCE_SET_PROPERTIES *)v23, v14);
    v16 = (struct ExecutionModel::IResourceSetCallback *)operator new(
                                                           0x10uLL,
                                                           (const struct std::nothrow_t *)&unk_18005268A);
    if ( v16 )
    {
      *(_QWORD *)v16 = &ResourceSetCallbackThunk::`vftable';
      *((_DWORD *)v16 + 2) = 1;
    }
    else
    {
      v16 = 0LL;
    }
    if ( v16 )
    {
      v17 = (struct ExecutionModel::ResourceSet *)HamObjectIdGenerate(1LL);
      v18 = RmSrvAcquireResourceSet(
              *a1,
              (struct ExecutionModel::_ResourceSetInfo *)v23,
              v16,
              0LL,
              a4,
              a5,
              a7,
              a8,
              a9,
              0,
              a3,
              v17,
              (struct _RM_ACTIVATOR *)a1,
              &v22);
      if ( v18 < 0 )
      {
        v19 = v18 & 0xEFFFFFFF;
      }
      else
      {
        *a10 = v17;
        RmSrvResourceSetSetAutoRelease(*a1, (unsigned __int64)v17, 0);
        v19 = v22 ? 0x103 : 0;
      }
      v20 = *(unsigned int (__fastcall **)(ResourceSetCallbackThunk *__hidden))(*(_QWORD *)v16 + 16LL);
      if ( v20 == ResourceSetCallbackThunk::Release )
        ResourceSetCallbackThunk::Release(v16);
      else
        v20(v16);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v19;
}

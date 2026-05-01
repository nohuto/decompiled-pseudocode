/*
 * XREFs of ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x180066FC0
 * Callers:
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x1800670EC (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 *     ?HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x1800671A8 (-HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x180026F7C (-HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPEND.c)
 *     ?HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x180028D4C (-HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HO.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180067604 (-HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEP.c)
 */

__int64 __fastcall HampDepGroupRemoveDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        char a3)
{
  __int64 v3; // rax
  int v5; // eax
  struct _HAM_DEPENDENCY_GROUP *v6; // rbx
  unsigned int v7; // edi
  struct _HAM_DEPENDENCY_LINK *DepLink; // rax
  __int64 DependencyByType; // rdi
  int v10; // edx
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // rax
  struct _HAM_DEPENDENCY_GROUP *v14; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  struct _HAM_DEPENDENCY_GROUP *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]

  v3 = *((_QWORD *)a1 - 4);
  v14 = 0LL;
  v15[0] = v3;
  v15[1] = *((_QWORD *)a2 - 4);
  v5 = HampDepGroupVerifyHostDispositionAndEnterWorker(a1, a2, &v14);
  v6 = v14;
  v7 = v5;
  if ( v5 >= 0 )
  {
    DepLink = HampDepGroupFindDepLink(v14, (struct _HAM_DEPENDENCY_LINK_ID *)v15);
    if ( DepLink && (DependencyByType = HampDepLinkGetDependencyByType((__int64)DepLink, a3)) != 0 )
    {
      HampDepGroupAcquireLockExclusive(v6);
      *(_DWORD *)(DependencyByType + 36) |= 1u;
      HampDepGroupReleaseLockExclusive(v6);
      if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
      {
        v12 = *(_QWORD *)DependencyByType;
        v19 = 0;
        v22 = 0;
        v17 = v12 + 40;
        v18 = v10;
        v20 = v6;
        v21 = v10;
        TlgWrite(v11, &unk_1800834BC, 0LL, 0LL, 4u, &pData);
      }
      v7 = 0;
    }
    else
    {
      v7 = -1073741072;
    }
  }
  if ( v6 )
  {
    HampDepGroupRunStateChangeWorker(v6);
    HampDepGroupDereference(v6);
  }
  return v7;
}

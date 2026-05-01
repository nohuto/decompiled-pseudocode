/*
 * XREFs of ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@@Z @ 0x180045834
 * Callers:
 *     ?HampRmContextAllocateState@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z @ 0x18004597C (-HampRmContextAllocateState@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047ED8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800100E0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001F378 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpResourceSetPropertyOverridesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18004193C (-RmpResourceSetPropertyOverridesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPER.c)
 *     ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@PEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180048478 (-HampRpGetActivityResourceSetInfo@@YAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_RESOURCE.c)
 */

__int64 __fastcall HampRmContextAcquireResourceSet(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  signed int ActivityResourceSetInfo; // ecx
  struct ExecutionModel::_ResourceSetInfo *v6; // r8
  void *v7; // rax
  __int64 v8; // r8
  int v9; // ecx
  bool v11; // [rsp+70h] [rbp-1A8h] BYREF
  _BYTE v12[384]; // [rsp+80h] [rbp-198h] BYREF

  v3 = a2;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v12);
  v4 = *(_QWORD *)(a1 + 8);
  ActivityResourceSetInfo = HampRpGetActivityResourceSetInfo(
                              *(_QWORD *)((*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 56),
                              v4 + 104,
                              (unsigned int)v3,
                              v12);
  if ( ActivityResourceSetInfo < 0 )
    goto LABEL_8;
  if ( (_DWORD)v3 == 1 )
    ExecutionModel::RmpResourceSetPropertyOverridesToResourceSetInfo(
      (ExecutionModel *)(v4 + 376),
      (struct _RM_RESOURCE_SET_PROPERTIES *)v12,
      v6);
  v7 = (void *)HamObjectIdGenerate(1);
  *(_QWORD *)(a1 + 8 * v3 + 16) = v7;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
  v9 = RmSrvAcquireResourceSet(
         RmSvcGlobals,
         (struct ExecutionModel::_ResourceSetInfo *)v12,
         (struct ExecutionModel::IResourceSetCallback *)a1,
         v7,
         (wchar_t *)(v8 + 24),
         (_BYTE *)(v8 + 488),
         *(_DWORD *)(v8 + 556),
         *(_DWORD *)(v8 + 560),
         *(_QWORD *)(v8 + 568),
         0,
         0xFFFFFFFFFFFFFFFFuLL,
         (struct ExecutionModel::ResourceSet *)v7,
         0LL,
         &v11);
  ActivityResourceSetInfo = v9 >= 0 ? 0 : v9 | 0xC0000000;
  if ( ActivityResourceSetInfo < 0 )
LABEL_8:
    *(_QWORD *)(a1 + 8 * v3 + 16) = -1LL;
  return (unsigned int)ActivityResourceSetInfo;
}

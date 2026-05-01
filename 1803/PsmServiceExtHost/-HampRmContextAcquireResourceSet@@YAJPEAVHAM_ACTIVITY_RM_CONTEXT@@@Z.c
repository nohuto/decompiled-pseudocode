/*
 * XREFs of ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z @ 0x180023170
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180011D10 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E620 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180023270 (-RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_Re.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HampRmContextAcquireResourceSet(struct HAM_ACTIVITY_RM_CONTEXT *a1)
{
  struct ExecutionModel::_ResourceSetInfo *v2; // r8
  void *v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax
  bool v7; // [rsp+70h] [rbp-1A8h] BYREF
  _BYTE v8[384]; // [rsp+80h] [rbp-198h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v8);
  ExecutionModel::RmpActivityPropertiesToResourceSetInfo(
    (ExecutionModel *)(*((_QWORD *)a1 + 1) + 112LL),
    (struct _HAM_ACTIVITY_PROPERTIES *)v8,
    v2);
  v3 = (void *)HamObjectIdGenerate(1);
  v4 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 2) = v3;
  v5 = RmSrvAcquireResourceSet(
         RmSvcGlobals,
         (struct ExecutionModel::_ResourceSetInfo *)v8,
         a1,
         v3,
         (wchar_t *)(*(_QWORD *)(v4 + 80) + 24LL),
         (SID *)(*(_QWORD *)(v4 + 80) + 488LL),
         *(_DWORD *)(*(_QWORD *)(v4 + 80) + 556LL),
         *(_DWORD *)(*(_QWORD *)(v4 + 80) + 560LL),
         *(_QWORD *)(*(_QWORD *)(v4 + 80) + 568LL),
         0,
         0xFFFFFFFFFFFFFFFFuLL,
         (unsigned __int64)v3,
         0LL,
         &v7);
  if ( v5 < 0 )
    result = v5 | 0xC0000000;
  else
    result = 0LL;
  if ( (int)result < 0 )
    *((_QWORD *)a1 + 2) = -1LL;
  return result;
}

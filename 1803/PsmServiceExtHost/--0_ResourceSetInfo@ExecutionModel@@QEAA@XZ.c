/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E620
 * Callers:
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x18001F654 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180020794 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z @ 0x180023170 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x1800273D0 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x18002C8A0 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18003855C (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x1800405A0 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18004118C (-HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x18004DBD8 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 *     ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x1800515FC (-RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x1800661EC (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceSetInfo *__fastcall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  __int64 v1; // r8
  char *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  ExecutionModel::_ResourceSetInfo *result; // rax

  *(_DWORD *)this = -1;
  v1 = 3LL;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 12) = 0;
  v2 = (char *)this + 80;
  *((_QWORD *)this + 7) = 0LL;
  v3 = 3LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 2) = 101;
  *((_DWORD *)this + 3) = 32;
  do
  {
    *(_DWORD *)v2 = -1;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 4) = 101;
    *((_WORD *)v2 + 10) = 0;
    v2 += 24;
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 88) = 0;
  v4 = (_QWORD *)((char *)this + 152);
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 26) = 1;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 32) = 2;
  do
  {
    *v4 = 0x6500000065LL;
    v4[1] = 0x6500000065LL;
    v4[2] = 0x6500000065LL;
    v4 += 8;
    *(v4 - 5) = 0x6500000065LL;
    *(v4 - 4) = 0x6500000065LL;
    *(v4 - 3) = 0x6500000065LL;
    *(v4 - 2) = 0x6500000065LL;
    *(v4 - 1) = 0x6500000065LL;
    --v1;
  }
  while ( v1 );
  *v4 = 0x6500000065LL;
  *((_DWORD *)this + 93) = 0;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 42) = 0;
  *((_DWORD *)this + 11) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  result = this;
  *((_DWORD *)this + 8) = 101;
  return result;
}

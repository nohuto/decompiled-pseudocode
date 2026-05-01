/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800100E0
 * Callers:
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180010A48 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180012124 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x18001ADA0 (RmCoreRpcSrvAcquireResourceSet.c)
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180030570 (RmtSrv_RM_CreateTerminalResourceSet.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180030928 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 *     ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x180034510 (-RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@@Z @ 0x180045834 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_T.c)
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x1800480E0 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@PEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180048478 (-HampRpGetActivityResourceSetInfo@@YAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_RESOURCE.c)
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceSetInfo *__fastcall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  char *v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  ExecutionModel::_ResourceSetInfo *result; // rax

  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 101;
  *((_DWORD *)this + 3) = 32;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 8) = 0LL;
  v2 = (char *)this + 88;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  v3 = 3LL;
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
  *((_DWORD *)this + 90) = 0;
  v4 = (_DWORD *)((char *)this + 160);
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 28) = 1;
  v5 = 50LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 34) = 2;
  while ( v5 )
  {
    *v4++ = 101;
    --v5;
  }
  *((_DWORD *)this + 95) = 0;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 42) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 11) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  result = this;
  *((_DWORD *)this + 8) = 101;
  return result;
}

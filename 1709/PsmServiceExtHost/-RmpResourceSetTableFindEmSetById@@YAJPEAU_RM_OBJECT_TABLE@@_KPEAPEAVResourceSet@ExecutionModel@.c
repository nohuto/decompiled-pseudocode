/*
 * XREFs of ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x180013940
 * Callers:
 *     ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x1800011BC (-RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800185D0 (-RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PE.c)
 *     ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180018934 (-RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18001BF30 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 *     ?RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z @ 0x18003436C (-RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z.c)
 *     ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x180034510 (-RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpResourceSetTableFindEmSetById(
        struct _RM_OBJECT_TABLE *a1,
        __int64 a2,
        struct ExecutionModel::ResourceSet **a3)
{
  __int64 v6; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // r11
  __int64 v10; // r10
  int v11; // edi
  int v12; // ebx
  struct ExecutionModel::ResourceSet *v13; // rcx
  void (*v14)(void); // rax
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-E8h] BYREF

  v6 = 0LL;
  RtlAcquireSRWLockShared((char *)a1 + 16);
  v7 = *((_DWORD *)a1 + 1);
  v8 = 0LL;
  v9 = -1LL << (*((_BYTE *)a1 + 4) & 0x1F);
  v10 = v9 & (HIBYTE(a2)
            + 37
            * (BYTE6(a2)
             + 37
             * (BYTE5(a2)
              + 37
              * (BYTE4(a2)
               + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v8 )
    goto LABEL_5;
  if ( v7 >> 5 )
  {
    v8 = *((_QWORD *)a1 + 1)
       + 8LL
       * ((37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v10)) & ((v7 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( v10 == (v9 & *(_QWORD *)(v8 + 8)) )
      {
        if ( a2 != *(_QWORD *)(v8 + 24) )
          goto LABEL_2;
        v11 = 0;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 16)) < 1 )
        {
          memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
          pExceptionRecord.ExceptionCode = -1073741675;
          pExceptionRecord.ExceptionFlags = 1;
          RaiseFailFastException(&pExceptionRecord, 0LL, 0);
        }
        goto LABEL_10;
      }
    }
  }
  v8 = v10;
  v11 = -1073741275;
LABEL_10:
  RtlReleaseSRWLockShared((char *)a1 + 16);
  if ( v11 >= 0 )
    v6 = v8;
  v12 = 0;
  if ( v11 < 0 )
    v12 = v11;
  if ( v12 >= 0 )
  {
    v13 = *(struct ExecutionModel::ResourceSet **)(v6 + 40);
    *a3 = v13;
    v14 = *(void (**)(void))(*(_QWORD *)v13 + 8LL);
    if ( (char *)v14 == (char *)ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef(v13);
    else
      v14();
    v12 = 0;
  }
  if ( v6 )
    RmpObjectRelease((char *)v6);
  return (unsigned int)v12;
}

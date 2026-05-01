/*
 * XREFs of ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001FF90
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18001EC40 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x1800234A0 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180023600 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180025324 (-RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x180025500 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002EF70 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180020710 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Release(ExecutionModel::ResourceSet *this)
{
  int v1; // ebx
  void *(__fastcall *v3)(ExecutionModel::ResourceSet *__hidden, unsigned int); // rax
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 39);
  if ( v1 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  else if ( !v1 && this )
  {
    v3 = *(void *(__fastcall **)(ExecutionModel::ResourceSet *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v3 == ExecutionModel::ResourceSet::`scalar deleting destructor' )
      ExecutionModel::ResourceSet::`scalar deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return (unsigned int)v1;
}

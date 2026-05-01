/*
 * XREFs of ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1800591A8
 * Callers:
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1801E16B0 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c35d5355421e51b91e1b7dc40faf7951___::Run_::_1_::dtor$0 @ 0x1801E9074 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c35d5355421e51b91e1b7dc40faf7951___--Run_-.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$1 @ 0x1801EC6D8 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$2 @ 0x1801EC6E4 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  CoTaskMemFree(v2);
}

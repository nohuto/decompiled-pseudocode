/*
 * XREFs of ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x18008DE60
 * Callers:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18008DBC0 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 * Callees:
 *     <none>
 */

struct _RTL_SRWLOCK *__fastcall Microsoft::WRL::Details::ModuleBase::GetLock(Microsoft::WRL::Details::ModuleBase *this)
{
  return (struct _RTL_SRWLOCK *)&Microsoft::WRL::Details::ModuleBase::moduleLock_;
}

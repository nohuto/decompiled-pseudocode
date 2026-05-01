/*
 * XREFs of ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x180003BE0
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800036C0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     <none>
 */

struct _RTL_SRWLOCK *__fastcall Microsoft::WRL::Details::ModuleBase::GetLock(Microsoft::WRL::Details::ModuleBase *this)
{
  return &Microsoft::WRL::Details::ModuleBase::moduleLock_;
}

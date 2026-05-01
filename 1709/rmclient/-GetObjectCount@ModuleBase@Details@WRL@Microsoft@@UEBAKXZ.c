/*
 * XREFs of ?GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ @ 0x180003C20
 * Callers:
 *     DllCanUnloadNow @ 0x1800019C0 (DllCanUnloadNow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ModuleBase::GetObjectCount(Microsoft::WRL::Details::ModuleBase *this)
{
  return Microsoft::WRL::Details::ModuleBase::objectCount_;
}

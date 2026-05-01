/*
 * XREFs of ?GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180002D30
 * Callers:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180002010 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 * Callees:
 *     <none>
 */

const struct Microsoft::WRL::Details::CreatorMap **__fastcall Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer(
        Microsoft::WRL::Details::ModuleBase *this)
{
  return (const struct Microsoft::WRL::Details::CreatorMap **)&_pobjectentrylast;
}

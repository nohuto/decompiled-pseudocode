/*
 * XREFs of ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180002D50
 * Callers:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180002010 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 * Callees:
 *     <none>
 */

const struct Microsoft::WRL::Details::CreatorMap **__fastcall Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer(
        Microsoft::WRL::Details::ModuleBase *this)
{
  return (const struct Microsoft::WRL::Details::CreatorMap **)&_pobjectentryfirst;
}

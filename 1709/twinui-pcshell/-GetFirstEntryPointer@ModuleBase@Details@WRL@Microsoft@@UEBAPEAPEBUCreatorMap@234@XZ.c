/*
 * XREFs of ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x1800025B0
 * Callers:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x18000573C (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

const struct Microsoft::WRL::Details::CreatorMap **__fastcall Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer(
        Microsoft::WRL::Details::ModuleBase *this)
{
  return (const struct Microsoft::WRL::Details::CreatorMap **)&_pobjectentryfirst;
}

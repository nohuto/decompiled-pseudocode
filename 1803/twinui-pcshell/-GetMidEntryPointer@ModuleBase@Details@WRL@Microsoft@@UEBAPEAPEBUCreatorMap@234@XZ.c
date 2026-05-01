/*
 * XREFs of ?GetMidEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x18008DE70
 * Callers:
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18008DAE4 (--$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

const struct Microsoft::WRL::Details::CreatorMap **__fastcall Microsoft::WRL::Details::ModuleBase::GetMidEntryPointer(
        Microsoft::WRL::Details::ModuleBase *this)
{
  return (const struct Microsoft::WRL::Details::CreatorMap **)&_pobjectentrymid;
}

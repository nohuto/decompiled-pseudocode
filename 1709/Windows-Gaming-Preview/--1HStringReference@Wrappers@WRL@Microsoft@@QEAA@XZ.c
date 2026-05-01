/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18001434C
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$0 @ 0x180042F40 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFileDescription.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$6 @ 0x1800430FF (_JsonDocumentFromGameConfigValues_--_1_--dtor$6.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$7 @ 0x18004310B (_JsonDocumentFromGameConfigValues_--_1_--dtor$7.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$8 @ 0x180043117 (_JsonDocumentFromGameConfigValues_--_1_--dtor$8.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$9 @ 0x180043123 (_JsonDocumentFromGameConfigValues_--_1_--dtor$9.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$10 @ 0x18004312F (_JsonDocumentFromGameConfigValues_--_1_--dtor$10.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$11 @ 0x18004313B (_JsonDocumentFromGameConfigValues_--_1_--dtor$11.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$12 @ 0x180043147 (_JsonDocumentFromGameConfigValues_--_1_--dtor$12.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$13 @ 0x180043153 (_JsonDocumentFromGameConfigValues_--_1_--dtor$13.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$15 @ 0x18004316B (_JsonDocumentFromGameConfigValues_--_1_--dtor$15.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath_::_1_::dtor$2 @ 0x180043874 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_CreateStorageFil_ea_180043874.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$4 @ 0x1800438A4 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_1800438A4.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}

/*
 * XREFs of ??1?$unique_ptr@$$BY0A@$$CBGU?$default_delete@$$BY0A@$$CBG@std@@@std@@QEAA@XZ @ 0x1800165A8
 * Callers:
 *     _DoWorkOnGameConfigStore_::_1_::dtor$0 @ 0x180042FB8 (_DoWorkOnGameConfigStore_--_1_--dtor$0.c)
 *     _DoWorkOnGameConfigStore_::_1_::dtor$2 @ 0x180043009 (_DoWorkOnGameConfigStore_--_1_--dtor$2.c)
 *     _GetRelatedProcessesFromGameConfigStore_::_1_::dtor$0 @ 0x1800430AB (_GetRelatedProcessesFromGameConfigStore_--_1_--dtor$0.c)
 *     __lambda_e55ccab858df802f1f19496ef6f8fbee_::operator()_::_1_::dtor$4 @ 0x180043434 (__lambda_e55ccab858df802f1f19496ef6f8fbee_--operator()_--_1_--dtor$4.c)
 *     _CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor$0 @ 0x180043D39 (_CQueryKnownGameList--GetGameEntryFromPID_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryFromGameConfig_::_1_::dtor$0 @ 0x180043D45 (_CQueryKnownGameList--GetGameEntryFromGameConfig_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$0 @ 0x180043D81 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$4 @ 0x180043DB1 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$4.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$5 @ 0x180043DBD (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$5.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$6 @ 0x180043DC9 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$6.c)
 *     _CQueryKnownGameList::GetProcessWorkingDirectoryByPID_::_1_::dtor$0 @ 0x180043DE1 (_CQueryKnownGameList--GetProcessWorkingDirectoryByPID_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<unsigned short const [0]>::~unique_ptr<unsigned short const [0]>(
        void **a1,
        unsigned __int64 a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, a2);
}

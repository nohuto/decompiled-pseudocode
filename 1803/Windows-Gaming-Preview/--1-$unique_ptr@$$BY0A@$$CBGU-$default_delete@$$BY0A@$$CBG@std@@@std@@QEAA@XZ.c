/*
 * XREFs of ??1?$unique_ptr@$$BY0A@$$CBGU?$default_delete@$$BY0A@$$CBG@std@@@std@@QEAA@XZ @ 0x180040A18
 * Callers:
 *     _CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor$0 @ 0x180044CCD (_CQueryKnownGameList--GetGameEntryFromPID_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$4 @ 0x180044D45 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$4.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$5 @ 0x180044D51 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$5.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$6 @ 0x180044D5D (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$6.c)
 *     _CQueryKnownGameList::GetProcessWorkingDirectoryByPID_::_1_::dtor$0 @ 0x180044D75 (_CQueryKnownGameList--GetProcessWorkingDirectoryByPID_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetProcessWorkingDirectoryByPID_::_1_::dtor$1 @ 0x180044D81 (_CQueryKnownGameList--GetProcessWorkingDirectoryByPID_--_1_--dtor$1.c)
 *     _CQueryKnownGameList::GetProcessArgsByPID_::_1_::dtor$0 @ 0x180044D8D (_CQueryKnownGameList--GetProcessArgsByPID_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<unsigned short const [0]>::~unique_ptr<unsigned short const [0]>(void **a1)
{
  operator delete(*a1);
}

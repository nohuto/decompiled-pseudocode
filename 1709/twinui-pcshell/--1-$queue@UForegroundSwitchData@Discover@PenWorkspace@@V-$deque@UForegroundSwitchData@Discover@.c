/*
 * XREFs of ??1?$queue@UForegroundSwitchData@Discover@PenWorkspace@@V?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@@std@@QEAA@XZ @ 0x1800E5964
 * Callers:
 *     _PenWorkspaceDiscoverBroker::RuntimeClassInitialize_::_1_::dtor$6 @ 0x1801EC247 (_PenWorkspaceDiscoverBroker--RuntimeClassInitialize_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::queue<PenWorkspace::Discover::ForegroundSwitchData>::~queue<PenWorkspace::Discover::ForegroundSwitchData,std::deque<PenWorkspace::Discover::ForegroundSwitchData>>(
        __int64 a1)
{
  return std::deque<PenWorkspace::Discover::ForegroundSwitchData>::~deque<PenWorkspace::Discover::ForegroundSwitchData>(a1);
}

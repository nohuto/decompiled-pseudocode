/*
 * XREFs of ??1PolicyManagerLock@@QEAA@XZ @ 0x18005BC84
 * Callers:
 *     _CAudioSession::SetVolumeAllStreams_::_1_::dtor$0 @ 0x180039086 (_CAudioSession--SetVolumeAllStreams_--_1_--dtor$0.c)
 *     _CAudioSession::AddStream_::_1_::dtor$0 @ 0x18003909E (_CAudioSession--AddStream_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall PolicyManagerLock::~PolicyManagerLock(PolicyManagerLock *this)
{
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
}

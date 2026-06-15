/*
 * XREFs of ??1PolicyManagerLock@@QEAA@XZ @ 0x1800989FC
 * Callers:
 *     _CAudioSession::SetVolumeAllStreams_::_1_::dtor$0 @ 0x180067311 (_CAudioSession--SetVolumeAllStreams_--_1_--dtor$0.c)
 *     _CAudioSession::AddStream_::_1_::dtor$0 @ 0x18006A820 (_CAudioSession--AddStream_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PolicyManagerLock::~PolicyManagerLock(PolicyManagerLock *this)
{
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 248LL))(g_PolicyManager);
}

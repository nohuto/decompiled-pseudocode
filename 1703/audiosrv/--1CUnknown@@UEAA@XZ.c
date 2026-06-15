/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x18002F970
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$0 @ 0x18005A7C0 (_CAudioStream--_CAudioStream_--_1_--dtor$0.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$0 @ 0x18005A910 (_CAudioStream--CAudioStream_--_1_--dtor$0.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x18005B0C4 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _CAudioSessionManager::CreateAudioSessionControl_::_1_::dtor$2 @ 0x18005B1CA (_CAudioSessionManager--CreateAudioSessionControl_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}

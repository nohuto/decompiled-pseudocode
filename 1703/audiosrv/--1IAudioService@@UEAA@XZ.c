/*
 * XREFs of ??1IAudioService@@UEAA@XZ @ 0x18002F9D0
 * Callers:
 *     _CAudioSrv::CAudioSrv_::_1_::dtor$0 @ 0x18005C232 (_CAudioSrv--CAudioSrv_--_1_--dtor$0.c)
 *     _CAudioSrv::_CAudioSrv_::_1_::dtor$0 @ 0x180080455 (_CAudioSrv--_CAudioSrv_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall IAudioService::~IAudioService(IAudioService *this)
{
  *(_QWORD *)this = &IAudioService::`vftable';
}

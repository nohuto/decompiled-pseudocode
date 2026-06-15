/*
 * XREFs of ??1IAudioService@@UEAA@XZ @ 0x180031ED4
 * Callers:
 *     _CAudioSrv::CAudioSrv_::_1_::dtor$0 @ 0x180060BF3 (_CAudioSrv--CAudioSrv_--_1_--dtor$0.c)
 *     _CAudioSrv::_CAudioSrv_::_1_::dtor$0 @ 0x180060F45 (_CAudioSrv--_CAudioSrv_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall IAudioService::~IAudioService(IAudioService *this)
{
  *(_QWORD *)this = &IAudioService::`vftable';
}

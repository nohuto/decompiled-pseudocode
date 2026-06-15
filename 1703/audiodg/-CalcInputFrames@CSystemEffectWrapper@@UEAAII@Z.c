/*
 * XREFs of ?CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x1400474B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004720C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?GetAPOExceptionCrashPolicy@@YAHXZ @ 0x140047678 (-GetAPOExceptionCrashPolicy@@YAHXZ.c)
 */

__int64 __fastcall CSystemEffectWrapper::CalcInputFrames(CSystemEffectWrapper *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13));
}

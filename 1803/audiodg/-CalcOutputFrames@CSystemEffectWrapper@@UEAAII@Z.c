/*
 * XREFs of ?CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x1400467B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004643C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?GetAPOExceptionCrashPolicy@@YAHXZ @ 0x1400468C8 (-GetAPOExceptionCrashPolicy@@YAHXZ.c)
 */

__int64 __fastcall CSystemEffectWrapper::CalcOutputFrames(CSystemEffectWrapper *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
}

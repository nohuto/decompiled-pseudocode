/*
 * XREFs of ?AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140046570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004643C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?GetAPOExceptionCrashPolicy@@YAHXZ @ 0x1400468C8 (-GetAPOExceptionCrashPolicy@@YAHXZ.c)
 */

void __fastcall CSystemEffectWrapper::AcceptInput(
        CSystemEffectWrapper *this,
        __int64 a2,
        const struct APO_CONNECTION_PROPERTY *a3)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 38, 2, 1) == 1 )
    (*(void (__fastcall **)(_QWORD, __int64, const struct APO_CONNECTION_PROPERTY *))(**((_QWORD **)this + 16) + 24LL))(
      *((_QWORD *)this + 16),
      a2,
      a3);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 38, 1, 2);
}

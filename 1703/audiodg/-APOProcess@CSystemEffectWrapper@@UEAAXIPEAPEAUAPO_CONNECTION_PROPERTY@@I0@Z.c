/*
 * XREFs of ?APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x140047160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004720C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?GetAPOExceptionCrashPolicy@@YAHXZ @ 0x140047678 (-GetAPOExceptionCrashPolicy@@YAHXZ.c)
 */

void __fastcall CSystemEffectWrapper::APOProcess(
        CSystemEffectWrapper *this,
        __int64 a2,
        struct APO_CONNECTION_PROPERTY **a3)
{
  (*(void (__fastcall **)(_QWORD, __int64, struct APO_CONNECTION_PROPERTY **))(**((_QWORD **)this + 13) + 24LL))(
    *((_QWORD *)this + 13),
    a2,
    a3);
}

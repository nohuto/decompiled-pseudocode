/*
 * XREFs of ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400141F0
 * Callers:
 *     ?NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013FA0 (-NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004823C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140048634 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::QIInternal(CSystemEffectWrapper *this, const struct _GUID *a2, void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 9))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}

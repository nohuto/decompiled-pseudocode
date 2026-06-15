/*
 * XREFs of ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140048440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004823C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140048634 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::AddAuxiliaryInput(
        CSystemEffectWrapper *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 *a4,
        struct APO_CONNECTION_DESCRIPTOR *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int8 *, struct APO_CONNECTION_DESCRIPTOR *))(**((_QWORD **)this + 15) + 24LL))(
           *((_QWORD *)this + 15),
           a2,
           a3,
           a4,
           a5);
}

/*
 * XREFs of ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140013D70
 * Callers:
 *     ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140013260 (-GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004823C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140048634 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetEffectsList(
        CSystemEffectWrapper *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *, void *))(**((_QWORD **)this + 15) + 24LL))(
           *((_QWORD *)this + 15),
           a2,
           a3,
           a4);
}

/*
 * XREFs of ?Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z @ 0x140013B00
 * Callers:
 *     ?Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z @ 0x140013050 (-Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004643C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140046854 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::Initialize(CSystemEffectWrapper *this, __int64 a2, unsigned __int8 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int8 *))(**((_QWORD **)this + 15) + 48LL))(
           *((_QWORD *)this + 15),
           a2,
           a3);
}

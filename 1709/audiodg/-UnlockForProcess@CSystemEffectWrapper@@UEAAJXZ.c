/*
 * XREFs of ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x140048BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004823C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140048634 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::UnlockForProcess(CSystemEffectWrapper *this)
{
  while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 42, 0, 1) != 1 )
    Sleep(1u);
  return _guard_dispatch_icall_fptr();
}

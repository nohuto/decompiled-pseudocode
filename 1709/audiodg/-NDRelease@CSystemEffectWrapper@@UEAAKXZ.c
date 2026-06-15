/*
 * XREFs of ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140013ED0
 * Callers:
 *     ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x140013D30 (-Release@CSystemEffectWrapper@@UEAAKXZ.c)
 * Callees:
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140014260 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004823C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140048634 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDRelease(CSystemEffectWrapper *this)
{
  unsigned __int32 v2; // ebx
  __int64 v4; // rcx
  void *(__fastcall *v5)(CSystemEffectWrapper *__hidden, unsigned int); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 16);
  if ( !v2 )
  {
    v4 = *((_QWORD *)this + 9);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 9) = 0LL;
    }
    v5 = *(void *(__fastcall **)(CSystemEffectWrapper *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v5 == CSystemEffectWrapper::`scalar deleting destructor' )
      CSystemEffectWrapper::`scalar deleting destructor'(this, 1u);
    else
      v5(this, 1u);
  }
  return v2;
}

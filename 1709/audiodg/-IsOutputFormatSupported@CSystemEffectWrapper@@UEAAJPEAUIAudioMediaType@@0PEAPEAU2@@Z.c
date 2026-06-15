/*
 * XREFs of ?IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140048950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004823C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140048634 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::IsOutputFormatSupported(
        CSystemEffectWrapper *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(**((_QWORD **)this + 14) + 64LL))(
           *((_QWORD *)this + 14),
           a2,
           a3,
           a4);
}

/*
 * XREFs of ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x1800EFF3C
 * Callers:
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1801E7360 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$CommitActivationTimeoutPolicy@AEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E3958 (--$CommitActivationTimeoutPolicy@AEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Inter.c)
 */

void __fastcall ViewWrapperBase::CommitActivationTimeoutPolicy(ViewWrapperBase *this)
{
  char *v2; // rdi
  __int64 v3; // r8

  if ( *((_QWORD *)this + 24) )
  {
    v2 = (char *)this + 344;
    v3 = *((unsigned int *)this + 86);
    LOBYTE(v3) = (_DWORD)v3 == 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 21) + 520LL) + 88LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 520LL),
      *((_QWORD *)this + 24),
      v3);
    ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int const &,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy const &>(
      (char *)this + 148,
      v2);
  }
}

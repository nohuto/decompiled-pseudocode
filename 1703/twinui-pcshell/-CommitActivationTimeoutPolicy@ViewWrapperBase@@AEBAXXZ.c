/*
 * XREFs of ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x180116FB8
 * Callers:
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x180113BB0 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 *     ?SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180116AB0 (-SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@S.c)
 * Callees:
 *     ??$CommitActivationTimeoutPolicy@AEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180119E18 (--$CommitActivationTimeoutPolicy@AEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Inter.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::CommitActivationTimeoutPolicy(ViewWrapperBase *this)
{
  char *v2; // rdi
  __int64 v3; // r8

  if ( *((_QWORD *)this + 21) )
  {
    v2 = (char *)this + 320;
    v3 = *((unsigned int *)this + 80);
    LOBYTE(v3) = (_DWORD)v3 == 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 19) + 448LL) + 80LL))(
      *(_QWORD *)(*((_QWORD *)this + 19) + 448LL),
      *((_QWORD *)this + 21),
      v3);
    ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int const &,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy const &>(
      (char *)this + 132,
      v2);
  }
}

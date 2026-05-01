/*
 * XREFs of ??0ViewEventArgsBase@@QEAA@XZ @ 0x1800046AC
 * Callers:
 *     ??0ViewEventArgsForSelectTargetView@@QEAA@XZ @ 0x180004550 (--0ViewEventArgsForSelectTargetView@@QEAA@XZ.c)
 *     ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x180004A44 (--0ViewEventArgsForShowAsStandalone@@QEAA@XZ.c)
 *     ??0ViewEventArgsForNavigationRequest@@QEAA@XZ @ 0x1800F1940 (--0ViewEventArgsForNavigationRequest@@QEAA@XZ.c)
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x1800F1AFC (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ??0ViewEventArgsForShowAsViewMode@@QEAA@XZ @ 0x1801C7F04 (--0ViewEventArgsForShowAsViewMode@@QEAA@XZ.c)
 *     ??0ViewEventArgsForSwitch@@QEAA@XZ @ 0x1801C7FB8 (--0ViewEventArgsForSwitch@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

ViewEventArgsBase *__fastcall ViewEventArgsBase::ViewEventArgsBase(ViewEventArgsBase *this)
{
  ViewEventArgsBase *result; // rax

  Microsoft::WRL::FtmBase::FtmBase((ViewEventArgsBase *)((char *)this + 8));
  *(_QWORD *)this = &ViewEventArgsBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  return result;
}

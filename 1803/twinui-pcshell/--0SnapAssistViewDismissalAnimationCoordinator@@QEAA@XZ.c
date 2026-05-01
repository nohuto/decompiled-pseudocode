/*
 * XREFs of ??0SnapAssistViewDismissalAnimationCoordinator@@QEAA@XZ @ 0x180285514
 * Callers:
 *     ??$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewDismissalAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Z @ 0x180285474 (--$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@Weak.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0MultitaskingViewDismissalAnimationCoordinator@@QEAA@XZ @ 0x18028457C (--0MultitaskingViewDismissalAnimationCoordinator@@QEAA@XZ.c)
 */

SnapAssistViewDismissalAnimationCoordinator *__fastcall SnapAssistViewDismissalAnimationCoordinator::SnapAssistViewDismissalAnimationCoordinator(
        SnapAssistViewDismissalAnimationCoordinator *this)
{
  MultitaskingViewDismissalAnimationCoordinator::MultitaskingViewDismissalAnimationCoordinator(this);
  *((_QWORD *)this + 27) = 0LL;
  *(_QWORD *)this = &SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  *((_QWORD *)this + 22) = &SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::`vftable';
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &SnapAssistViewDismissalAnimationCoordinator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  *((_QWORD *)this + 22) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::`vftable';
  *((_DWORD *)this + 59) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SnapAssistViewDismissalAnimationCoordinator::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &SnapAssistViewDismissalAnimationCoordinator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  *((_QWORD *)this + 22) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::`vftable';
  return this;
}

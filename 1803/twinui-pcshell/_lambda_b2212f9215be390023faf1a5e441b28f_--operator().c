/*
 * XREFs of _lambda_b2212f9215be390023faf1a5e441b28f_::operator() @ 0x180143E30
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b2212f9215be390023faf1a5e441b28f___::Run @ 0x180144970 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b2212f9215be390023faf1a5e441b28f___--Run.c)
 * Callees:
 *     ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009E0BC (--$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@-$com_ptr_t@UIS.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b2212f9215be390023faf1a5e441b28f_::operator()(__int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  __int64 result; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v1 = (_QWORD *)wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
                     (_QWORD *)(*(_QWORD *)a1 + 168LL),
                     (__int64)&v6);
    v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        199LL,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v2);
    result = wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v6);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xC9,
             (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
             v4);
  }
  return result;
}

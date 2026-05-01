/*
 * XREFs of ??1?$com_ptr_t@VViewHandledEventArgs@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801EFBD0
 * Callers:
 *     _WindowWrapperBase::OnBackComplete_::_1_::dtor$3 @ 0x1801F2BC3 (_WindowWrapperBase--OnBackComplete_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180263C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 */

__int64 __fastcall wil::com_ptr_t<ViewHandledEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewHandledEventArgs,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}

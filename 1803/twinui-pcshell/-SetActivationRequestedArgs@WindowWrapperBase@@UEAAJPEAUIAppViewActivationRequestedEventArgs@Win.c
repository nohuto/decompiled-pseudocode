/*
 * XREFs of ?SetActivationRequestedArgs@WindowWrapperBase@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801F3490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::SetActivationRequestedArgs(
        WindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *a2)
{
  __int64 v4; // rdi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 168LL))(*((_QWORD *)this + 37));
  v4 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}

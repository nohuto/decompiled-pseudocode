/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_639d6738ffd80580db82ce4ed229ae7f_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180070E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U?$InterfaceList@UISplashScreen@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EA00 (-Release@-$RuntimeClass@U-$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_639d6738ffd80580db82ce4ed229ae7f_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  volatile signed __int64 *v4; // rcx
  __int64 v5; // rcx

  v4 = (volatile signed __int64 *)Block[3];
  if ( v4 )
  {
    Block[3] = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v4);
  }
  v5 = Block[2];
  if ( v5 )
  {
    Block[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}

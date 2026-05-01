/*
 * XREFs of _lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x18007292C
 * Callers:
 *     _CSplashScreen::add_Dismissed_::_1_::dtor$2 @ 0x1801E9582 (_CSplashScreen--add_Dismissed_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180060610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_(__int64 *a1)
{
  volatile signed __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = (volatile signed __int64 *)a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}

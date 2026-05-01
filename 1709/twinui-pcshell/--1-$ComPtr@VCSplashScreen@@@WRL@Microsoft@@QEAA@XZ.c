/*
 * XREFs of ??1?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ @ 0x18005C6F8
 * Callers:
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$0 @ 0x1801E9522 (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$0.c)
 *     _CSplashScreen::add_Dismissed_::_1_::dtor$1 @ 0x1801E9576 (_CSplashScreen--add_Dismissed_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180060610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CSplashScreen>::~ComPtr<CSplashScreen>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}

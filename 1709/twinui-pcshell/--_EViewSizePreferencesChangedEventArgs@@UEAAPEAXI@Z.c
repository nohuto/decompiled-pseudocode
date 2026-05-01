/*
 * XREFs of ??_EViewSizePreferencesChangedEventArgs@@UEAAPEAXI@Z @ 0x18010B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnToastActivator@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180060524 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnToastActivator@Noti.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewSizePreferencesChangedEventArgs *__fastcall ViewSizePreferencesChangedEventArgs::`vector deleting destructor'(
        ViewSizePreferencesChangedEventArgs *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

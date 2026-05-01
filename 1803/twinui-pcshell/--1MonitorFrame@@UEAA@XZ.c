/*
 * XREFs of ??1MonitorFrame@@UEAA@XZ @ 0x180207580
 * Callers:
 *     ??_GMonitorFrame@@UEAAPEAXI@Z @ 0x180208AB0 (--_GMonitorFrame@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?remove@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180216074 (-remove@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInterna.c)
 */

void __fastcall MonitorFrame::~MonitorFrame(MonitorFrame *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &MonitorFrame::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 && *((_QWORD *)this + 10) )
  {
    WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemInvoked::remove(
      v2,
      *((_QWORD *)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  __abi_winrt_ptr_dtor(*((_QWORD *)this + 12));
  __abi_winrt_ptr_dtor(*((_QWORD *)this + 11));
  __abi_winrt_ptr_dtor(*((_QWORD *)this + 9));
  __abi_winrt_ptr_dtor(*((_QWORD *)this + 8));
  __abi_winrt_ptr_dtor(*((_QWORD *)this + 7));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 5);
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
}

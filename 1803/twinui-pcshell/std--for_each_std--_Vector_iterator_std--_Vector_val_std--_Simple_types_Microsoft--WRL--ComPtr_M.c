/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x180204E0C
 * Callers:
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x180208F58 (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x18020A864 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18020E4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObs_ea_18020E4C0.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v6; // r15
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+70h] [rbp+18h]
  _QWORD *v15; // [rsp+78h] [rbp+20h]

  v15 = a4;
  v12 = a1;
  v6 = a2;
  if ( a2 != a3 )
  {
    v13 = (__int64 *)&v12;
    do
    {
      v12 = (_QWORD *)*v6;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
      v8 = __abi_winrt_cast_to(
             0,
             *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(*a4 + 200LL),
             (__int64)&_uuidof__AUIMonitorFrameDismissAnimationCallback__);
      v14 = v8;
      MonitorFrame::DismissAnimated(v12, v8);
      __abi_winrt_ptr_dtor(v8);
      v9 = (__int64)v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      ++v6;
    }
    while ( v6 != a3 );
  }
  *a1 = 0LL;
  v10 = *a4;
  if ( a1 != a4 )
  {
    *a1 = v10;
    *a4 = 0LL;
    v10 = 0LL;
  }
  if ( v10 )
  {
    *a4 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(v10);
  }
  return a1;
}

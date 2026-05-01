/*
 * XREFs of ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180136050
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x18011E678 (-ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnPropertyChanged(
        RTL_SRWLOCK **this,
        int (__fastcall ***a2)(struct IMessageProxy *, GUID *, __int64 *),
        __int16 a3)
{
  int (__fastcall **v6)(struct IMessageProxy *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+20h] BYREF

  v12[1] = -2LL;
  try
  {
    v12[0] = 0LL;
    v6 = *a2;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v12);
    if ( (*v6)((struct IMessageProxy *)a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, v7) >= 0 && a3 == 6 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12[0] + 152LL))(v12[0], &v15);
      if ( v8 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x3A9,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12[0] + 72LL))(v12[0], &v14);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x3AC,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v9);
      ViewEventDispatcher::ViewNavigationLevelChanged(this[10], v15, v14);
    }
    v10 = v12[0];
    if ( v12[0] )
    {
      v12[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  catch ( ... )
  {
  }
  return 0LL;
}

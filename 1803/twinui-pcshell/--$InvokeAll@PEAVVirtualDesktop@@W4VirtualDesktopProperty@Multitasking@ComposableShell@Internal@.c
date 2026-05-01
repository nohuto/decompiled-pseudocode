/*
 * XREFs of ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800FB1A8
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1802623F0 (-CurrentVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1802627F4 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e___ @ 0x1800FB0D4 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Composabl.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  *(_QWORD *)&v4 = &v5;
  *((_QWORD *)&v4 + 1) = &v6;
  return Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e___(
           a1,
           &v4);
}

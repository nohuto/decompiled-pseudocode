/*
 * XREFs of ?MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAXXZ @ 0x180171DC8
 * Callers:
 *     ?MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@WIA@E$AAAXXZ @ 0x1801782B0 (-MonitorFrameDismissAnimationCompleted@-QIMonitorFrameDismissAnimationCallback@@Xam_ea_1801782B0.c)
 *     ?__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAJXZ @ 0x18017830C (-__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCom_ea_18017830C.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___ @ 0x180175914 (CreationThreadDispatcher--RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _MonitorFrameDismissAnimationCompleted__QIMonitorFrameDismissAnimationCallback__XamlAllUpViewController__UE_AAAXXZ(
        __int64 a1)
{
  __int64 WeakReference; // rax
  __int64 v3; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]
  __int64 v8; // [rsp+50h] [rbp+18h]

  WeakReference = Platform::Details::GetWeakReference(a1);
  v3 = WeakReference;
  v7 = WeakReference;
  v8 = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  v6 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = CreationThreadDispatcher::RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___(*(_QWORD *)(a1 + 88), &v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}

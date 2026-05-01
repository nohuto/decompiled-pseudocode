/*
 * XREFs of ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1801B9154
 * Callers:
 *     ?VirtualDesktopCreated@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1801B8E40 (-VirtualDesktopCreated@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1801B8E80 (-VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1801B8F14 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B9468 (--$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@.c)
 */

__int64 __fastcall VirtualDesktop::UpdateDesktopIndex(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  PVOID Ptr; // rsi
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 33;
  AcquireSRWLockShared(this + 33);
  Ptr = this[17].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  v4 = VirtualDesktop::CalculateDesktopIndex(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( this[17].Ptr != Ptr )
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
        &this[11],
        this,
        1LL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xBA,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}

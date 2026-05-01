/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1801B8EC0
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B9468 (--$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@.c)
 */

__int64 __fastcall VirtualDesktop::CurrentVirtualDesktopChanged(
        VirtualDesktop *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  if ( (unsigned int)SHIsSameObject(
                       (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
                       *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 12))
    || (unsigned int)SHIsSameObject(
                       (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a3,
                       *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 12)) )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
      (char *)this + 72,
      (char *)this - 16,
      2LL);
  }
  return 0LL;
}

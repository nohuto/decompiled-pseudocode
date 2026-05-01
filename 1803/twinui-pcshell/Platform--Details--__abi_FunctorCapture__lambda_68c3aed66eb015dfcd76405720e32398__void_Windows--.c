/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_68c3aed66eb015dfcd76405720e32398__void_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64_::Invoke @ 0x18020C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@EventType@IVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4VirtualDesktopCollectionChangedEventType@3456@XZ @ 0x180215D64 (-get@EventType@IVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@W.c)
 *     ?ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ @ 0x180216160 (-ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ.c)
 */

__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_68c3aed66eb015dfcd76405720e32398__void_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs::EventType::get(a3);
  if ( (_DWORD)result == 2 )
    return IXamlSwitcherWindowInteractionEvents::ViewLoaded(*(_QWORD *)(a1 + 8), v5);
  return result;
}

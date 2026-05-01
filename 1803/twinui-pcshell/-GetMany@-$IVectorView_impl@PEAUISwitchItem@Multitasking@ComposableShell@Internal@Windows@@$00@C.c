/*
 * XREFs of ?GetMany@?$IVectorView_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x18023A010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IVectorView_impl<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  return Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVector_impl<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,1>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>(
           a1,
           a2,
           a3,
           a4,
           a5);
}

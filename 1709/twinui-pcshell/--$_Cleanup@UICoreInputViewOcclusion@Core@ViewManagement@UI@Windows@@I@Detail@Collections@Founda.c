/*
 * XREFs of ??$_Cleanup@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@3@I@Z @ 0x180196B9C
 * Callers:
 *     ?GetMany@?$IVectorView_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x180195550 (-GetMany@-$IVectorView_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@C.c)
 *     ?GetMany@?$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x180196BE0 (-GetMany@-$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}

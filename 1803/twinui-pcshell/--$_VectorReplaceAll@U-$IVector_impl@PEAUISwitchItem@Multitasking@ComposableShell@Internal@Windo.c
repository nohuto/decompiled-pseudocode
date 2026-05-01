/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@123@IPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@3@@Z @ 0x180239438
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@U?$AggregateType@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@PEAUICoreInputViewOcclusion@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@4@@Z @ 0x18023A630 (-ReplaceAll@-$IVector_impl@U-$AggregateType@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Wi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,1>,Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v6; // esi
  unsigned int v7; // ebx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *a3);
        if ( v6 < 0 )
          break;
        ++v7;
        ++a3;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    }
  }
  return (unsigned int)v6;
}

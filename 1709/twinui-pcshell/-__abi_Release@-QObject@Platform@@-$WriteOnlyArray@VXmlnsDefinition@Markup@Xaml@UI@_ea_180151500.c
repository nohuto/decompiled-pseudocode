/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x180151500
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAAKXZ @ 0x1801513A0 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBA@E$AAAKXZ @ 0x180151430 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShel.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBI@E$AAAKXZ @ 0x180151470 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@C_ea_180151470.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCA@E$AAAKXZ @ 0x180151590 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@C_ea_180151590.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  Platform::Details::ControlBlock *v6; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 56);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 56));
  if ( !v3 )
  {
    v4 = (a1 + 8) & -(__int64)(a1 != 0);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
      if ( v5 < 0 )
        __abi_WinRTraiseException(v5);
    }
    v6 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1 )
    {
      if ( *((_BYTE *)v6 + 25) )
        Platform::Details::Heap::AlignedFree(v6);
      else
        Platform::Details::Heap::Free(v6);
    }
  }
  return v3;
}

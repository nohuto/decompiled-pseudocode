/*
 * XREFs of ?get@?QIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@Item@EvaluateItemEventArgs@2345@UE$AAAPE$AAUISwitchItem@2345@XZ @ 0x18016AA8C
 * Callers:
 *     ?get@?QISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@Item@SwitchItemCollectionChangedEventArgs@2345@W7E$AAAPE$AAUISwitchItem@2345@XZ @ 0x18016AAC0 (-get@-QISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@Item.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _get__QIEvaluateItemEventArgs_Multitasking_ComposableShell_Internal_Windows__Item_EvaluateItemEventArgs_2345_UE_AAAPE_AAUISwitchItem_2345_XZ(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*(_QWORD *)(a1 + 40));
  return v1;
}

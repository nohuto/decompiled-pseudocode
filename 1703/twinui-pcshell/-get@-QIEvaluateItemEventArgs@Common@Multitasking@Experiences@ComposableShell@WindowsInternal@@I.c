/*
 * XREFs of ?get@?QIEvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Item@EvaluateItemEventArgs@23456@UE$AAAPE$AAUISwitchItem@23456@XZ @ 0x1801356CC
 * Callers:
 *     ?get@?QISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Item@SwitchItemCollectionChangedEventArgs@23456@W7E$AAAPE$AAUISwitchItem@23456@XZ @ 0x180135700 (-get@-QISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@Compos_ea_180135700.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _get__QIEvaluateItemEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__Item_EvaluateItemEventArgs_23456_UE_AAAPE_AAUISwitchItem_23456_XZ(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*(_QWORD *)(a1 + 40));
  return v1;
}

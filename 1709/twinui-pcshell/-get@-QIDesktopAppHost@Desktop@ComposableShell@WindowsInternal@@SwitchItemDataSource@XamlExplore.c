/*
 * XREFs of ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@UE$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x180148874
 * Callers:
 *     ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@W7E$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x1801497D0 (-get@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSourc_ea_1801497D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
PVOID __fastcall _get__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__SwitchItemDataSource_XamlExplorerHost__UE_AAAPE_AAUISwitchItemDataSource_Multitasking_3Internal_Windows__XZ(
        RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // rbx

  v2 = a1 + 11;
  AcquireSRWLockShared(a1 + 11);
  Ptr = a1[8].Ptr;
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return Ptr;
}

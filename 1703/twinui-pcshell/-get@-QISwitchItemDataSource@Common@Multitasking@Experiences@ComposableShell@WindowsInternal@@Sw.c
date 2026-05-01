/*
 * XREFs of ?get@?QISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItems@SwitchItemDataViewImpl@23456@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@XZ @ 0x18013DC50
 * Callers:
 *     ?get@?QISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItems@SwitchItemDataViewImpl@23456@WBA@E$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@XZ @ 0x18013DD70 (-get@-QISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@Window_ea_18013DD70.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??0?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x180139548 (--0-$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U.c)
 *     ?Append@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18013AD5C (-Append@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShe_ea_18013AD5C.c)
 *     ??0?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@4@@Z @ 0x18013DB30 (--0-$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInterna.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _get__QISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItems_SwitchItemDataViewImpl_23456_UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__XZ(
        RTL_SRWLOCK *a1)
{
  void *v2; // rax
  __int64 *v3; // rsi
  __int64 *Ptr; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 *i; // rax
  void *v9; // rax
  __int64 v10; // rbx
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+18h]

  v2 = Platform::Details::Heap::Allocate(0x88uLL, 0xB0uLL);
  v3 = (__int64 *)Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>,1>::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>,1>((__int64)v2);
  v13 = v3;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 7, &SRWLock);
  Ptr = (__int64 *)a1[13].Ptr;
  v5 = (__int64 *)*Ptr;
  while ( v5 != Ptr )
  {
    v6 = v5[5];
    if ( !*(_DWORD *)(v6 + 8) )
      _Append__Q__IVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXPE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Z(
        (__int64)v3,
        *(unsigned int (__fastcall ****)(__int64, GUID *, __int64 *))v6);
    if ( !*((_BYTE *)v5 + 25) )
    {
      v7 = (__int64 *)v5[2];
      if ( *((_BYTE *)v7 + 25) )
      {
        for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v5 = i;
        v5 = i;
      }
      else
      {
        do
        {
          v5 = v7;
          v7 = (__int64 *)*v7;
        }
        while ( !*((_BYTE *)v7 + 25) );
      }
    }
  }
  v9 = Platform::Details::Heap::Allocate(0x68uLL, 0x80uLL);
  v10 = Platform::Collections::VectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>,1>::VectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>,1>(
          (__int64)v9,
          v3 + 10,
          v3 + 12);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  if ( v3 )
    (*(void (__fastcall **)(__int64 *))(*v3 + 16))(v3);
  return v10;
}

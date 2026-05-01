/*
 * XREFs of ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItems@SwitchItemDataViewImpl@2345@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@5@XZ @ 0x180168DAC
 * Callers:
 *     ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItems@SwitchItemDataViewImpl@2345@WBA@E$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@5@XZ @ 0x180168EE0 (-get@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchI_ea_180168EE0.c)
 * Callees:
 *     ??0?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x180164730 (--0-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE$AAUI.c)
 *     ?Append@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x180165F48 (-Append@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows_ea_180165F48.c)
 *     ??0?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180168C8C (--0-$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _get__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItems_SwitchItemDataViewImpl_2345_UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_5_XZ(
        RTL_SRWLOCK *a1)
{
  void *v2; // rax
  __int64 *v3; // rsi
  RTL_SRWLOCK *v4; // rbp
  __int64 *Ptr; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 *i; // rax
  __int64 v10; // rbx
  void *v12; // [rsp+60h] [rbp+18h]

  v2 = Platform::Details::Heap::Allocate(0x88uLL, 0xB0uLL);
  v3 = (__int64 *)Platform::Collections::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>((__int64)v2);
  v4 = a1 + 7;
  AcquireSRWLockShared(a1 + 7);
  Ptr = (__int64 *)a1[13].Ptr;
  v6 = (__int64 *)*Ptr;
  while ( v6 != Ptr )
  {
    v7 = v6[5];
    if ( !*(_DWORD *)(v7 + 8) )
      _Append__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4__Z(
        (__int64)v3,
        *(unsigned int (__fastcall ****)(__int64, GUID *, __int64 *))v7);
    if ( !*((_BYTE *)v6 + 25) )
    {
      v8 = (__int64 *)v6[2];
      if ( *((_BYTE *)v8 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        do
        {
          v6 = v8;
          v8 = (__int64 *)*v8;
        }
        while ( !*((_BYTE *)v8 + 25) );
      }
    }
  }
  v12 = Platform::Details::Heap::Allocate(0x68uLL, 0x80uLL);
  v10 = Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>(
          (__int64)v12,
          v3 + 10,
          v3 + 12);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( v3 )
    (*(void (__fastcall **)(__int64 *))(*v3 + 16))(v3);
  return v10;
}

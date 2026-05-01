/*
 * XREFs of ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Z @ 0x18016A0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x180168EEC (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180169FB0 (-RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXP.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x18016C2DC (--0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18016C39C (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::OnSourceCollectionChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r8
  void *v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp+20h]

  v5 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(a3);
  v12 = v5;
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 48LL))(a3, &v11);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  AcquireSRWLockExclusive(a1 + 7);
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v11 == 1 )
    {
      Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem(a1, v5);
    }
    else
    {
      v10 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
      v7 = Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
             v10,
             v5,
             (unsigned int)v11);
      v8 = v7;
      v11 = v7;
      if ( v7 )
        v9 = v7 + 8;
      else
        v9 = 0LL;
      (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, __int64))a1->Ptr + 8))(
        a1,
        (unsigned __int64)&a1[2] & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
        v9);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem(a1, v5);
  }
  if ( a1 != (RTL_SRWLOCK *)-56LL )
    ReleaseSRWLockExclusive(a1 + 7);
  if ( v5 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
}

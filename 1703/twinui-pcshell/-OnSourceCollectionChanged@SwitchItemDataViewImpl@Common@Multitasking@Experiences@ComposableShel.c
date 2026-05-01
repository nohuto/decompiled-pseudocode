/*
 * XREFs of ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItemDataSource@23456@PE$AAUISwitchItemCollectionChangedEventArgs@23456@@Z @ 0x180133C10
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUISwitchItem@34567@XZ @ 0x180133A88 (-get@Item@ISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@.c)
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180133AFC (-RemoveSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Windows.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180134DE8 (-AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItem@12345@W4SwitchItemCollectionChangedEventType@12345@@Z @ 0x1801363FC (--0SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::OnSourceCollectionChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  void *v11; // [rsp+50h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h] BYREF

  v5 = WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs::Item::get(a3);
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a3 + 48LL))(a3, &v11);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  wil::srwlock::lock_exclusive(a1 + 7, &SRWLock);
  v7 = (unsigned int)v11;
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v11 == 1 )
    {
      WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::RemoveSwitchItem(
        a1,
        v5);
    }
    else
    {
      v11 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
      v8 = WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
             v11,
             v5,
             v7);
      v9 = v8;
      v11 = (void *)v8;
      if ( v8 )
        v10 = v8 + 8;
      else
        v10 = 0LL;
      (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, __int64))a1->Ptr + 7))(
        a1,
        (unsigned __int64)&a1[2] & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
        v10);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::AddSwitchItem(a1, v5);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v5 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
}

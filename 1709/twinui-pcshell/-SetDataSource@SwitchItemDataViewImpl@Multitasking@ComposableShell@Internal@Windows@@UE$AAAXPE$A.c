/*
 * XREFs of ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x18016C710
 * Callers:
 *     _lambda_439a64ed92fed00dbcb4e6e66f12d415_::operator() @ 0x18015A2FC (_lambda_439a64ed92fed00dbcb4e6e66f12d415_--operator().c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180003B78 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180148D3C (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x180148DB0 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ??$?0VSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@P801234@E$AAAXPE$AAUISwitchItemDataSource@1234@PE$AAUISwitchItemCollectionChangedEventArgs@1234@@Z@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@2@P834562@E$AAAXPE$AAUISwitchItemDataSource@4562@PE$AAUISwitchItemCollectionChangedEventArgs@4562@@ZW4CallbackContext@Platform@@_N@Z @ 0x1801699BC (--$-0VSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@P801234@E$AAAXPE$AAU.c)
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180169FB0 (-RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXP.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18016C39C (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  bool v4; // bl
  void *v5; // rcx
  char v6; // al
  __int64 Ptr; // rdi
  int v8; // eax
  PVOID v9; // rcx
  __int64 v10; // r12
  int v11; // eax
  int i; // r15d
  unsigned __int64 Instance; // rbx
  __int64 v14; // rbx
  int v15; // eax
  PVOID v16; // rcx
  void *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int128 v25; // [rsp+58h] [rbp-19h] BYREF
  RTL_SRWLOCK *v26; // [rsp+68h] [rbp-9h]
  char v27; // [rsp+70h] [rbp-1h]
  __int64 v28; // [rsp+78h] [rbp+7h]
  __int64 v29; // [rsp+80h] [rbp+Fh]
  __int64 v30; // [rsp+88h] [rbp+17h]
  __int64 v31; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  void *v33; // [rsp+E0h] [rbp+6Fh] BYREF
  unsigned __int64 v34; // [rsp+E8h] [rbp+77h] BYREF
  __int64 v35; // [rsp+F0h] [rbp+7Fh]

  LODWORD(v33) = 0;
  v35 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !a2 )
    goto LABEL_7;
  v33 = 0LL;
  v4 = (**(int (__fastcall ***)(__int64, GUID *, void **))a2)(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v33) >= 0;
  v5 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = 1;
  if ( v4 )
LABEL_7:
    v6 = 0;
  if ( v6 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\switchitemdataview.h",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  AcquireSRWLockExclusive(a1 + 7);
  Ptr = (__int64)a1[11].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(a1[11].Ptr);
    v34 = Ptr;
    v8 = (*(__int64 (__fastcall **)(PVOID, PVOID))(*(_QWORD *)a1[11].Ptr + 80LL))(a1[11].Ptr, a1[12].Ptr);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = a1[11].Ptr;
    if ( v9 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
      a1[11].Ptr = 0LL;
    }
    v10 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(Ptr);
    v33 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v10 + 56LL))(v10, &v33);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    for ( i = (int)v33; i >= 0; --i )
    {
      Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
                   v10,
                   (unsigned int)i);
      *(_QWORD *)&v25 = Instance;
      v33 = 0LL;
      Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem(a1, Instance);
      if ( Instance )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)Instance + 16LL))(Instance);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( a2 )
  {
    v33 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    *(_QWORD *)&v25 = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::OnSourceCollectionChanged;
    DWORD2(v25) = 0;
    v14 = Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>(
            (__int64)v33,
            (__int64)a1,
            &v25);
    v34 = v14;
    v33 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a2 + 72LL))(a2, v14, &v33);
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
    a1[12].Ptr = v33;
    if ( (PVOID)a2 != a1[11].Ptr )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v16 = a1[11].Ptr;
      if ( v16 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 16LL))(v16);
      a1[11].Ptr = (PVOID)a2;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1);
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1);
    v26 = a1;
    v27 = 1;
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
    v17 = (void *)Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a2);
    v18 = (__int64)v17;
    v33 = v17;
    if ( v17 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
    *(_QWORD *)&v25 = v18;
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
    v19 = 0LL;
    LODWORD(v33) = 1;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v28 = v18;
    v29 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v18 + 56LL))(v18, &v34);
    if ( v20 < 0 )
      __abi_WinRTraiseException(v20);
    v21 = (unsigned int)v34;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v30 = v18;
    v22 = (unsigned int)v21;
    v31 = v21;
    LODWORD(v33) = 3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( (_DWORD)v21 )
    {
      do
      {
        v23 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
                v18,
                (unsigned int)v19);
        v24 = v23;
        v34 = v23;
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        v34 = v24;
        if ( v24 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 16LL))(v24);
        Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem((__int64)a1, v24);
        if ( v24 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 16LL))(v24);
        ++v19;
      }
      while ( v19 != v22 );
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  }
  if ( a1 != (RTL_SRWLOCK *)-56LL )
    ReleaseSRWLockExclusive(a1 + 7);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
}

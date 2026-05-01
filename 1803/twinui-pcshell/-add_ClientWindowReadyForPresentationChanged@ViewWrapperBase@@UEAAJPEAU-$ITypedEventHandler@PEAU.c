/*
 * XREFs of ?add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180053F60
 * Callers:
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1800472EC (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A25C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180054180 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800549E8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180054B70 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F8AA8 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall ViewWrapperBase::add_ClientWindowReadyForPresentationChanged(
        __int64 a1,
        struct IUnknown *a2,
        struct IUnknown **a3)
{
  _QWORD *v3; // rdi
  int v6; // ebx
  struct IUnknown v7; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r12
  _QWORD *v9; // rcx
  __int64 v10; // rax
  volatile int *v11; // rdx
  Microsoft::WRL::Details::EventTargetArray *v12; // r10
  void *(__fastcall *v13)(Microsoft::WRL::Details::EventTargetArray *__hidden, unsigned int); // rax
  void (*v14)(void); // rax
  _QWORD *v15; // rax
  void **v16; // r14
  struct IUnknown **i; // rbx
  Microsoft::WRL::Details::EventTargetArray *v18; // rcx
  int v20[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+70h] [rbp+40h] BYREF
  __int64 v23; // [rsp+78h] [rbp+48h] BYREF
  char v24; // [rsp+88h] [rbp+58h] BYREF

  v3 = (_QWORD *)(a1 + 448);
  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v20[0]);
    return (unsigned int)v6;
  }
  v7.lpVtbl = a2->lpVtbl;
  v23 = 0LL;
  QueryInterface = v7.lpVtbl[1].QueryInterface;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v24, a1 + 464);
  v9 = (_QWORD *)*v3;
  v22 = 0LL;
  if ( v9 )
    v10 = ((__int64)(v9[3] - v9[2]) >> 3) + 1;
  else
    v10 = 1LL;
  *(_QWORD *)v20 = v10;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v22,
         v20);
  if ( v6 >= 0 )
  {
    v15 = (_QWORD *)*v3;
    if ( *v3 )
    {
      v16 = (void **)v15[4];
      for ( i = (struct IUnknown **)v15[2]; i != (struct IUnknown **)v15[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v22, *i, *v16);
        v15 = (_QWORD *)*v3;
        ++v16;
      }
    }
    v18 = v22;
    *a3 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v18, a2, QueryInterface);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v20, v3 + 1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v23, v3);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v3, &v22);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v20);
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v22);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v24);
    if ( v23 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v23);
    v6 = 0;
  }
  else
  {
    if ( v22
      && !Microsoft::WRL::Details::SafeUnknownDecrementReference(
            (Microsoft::WRL::Details::EventTargetArray *)((char *)v22 + 12),
            v11) )
    {
      v13 = *(void *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *__hidden, unsigned int))(*(_QWORD *)v12 + 24LL);
      if ( v13 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
        Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v12, 1u);
      else
        v13(v12, 1u);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v14 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( (char *)v14 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        else
          v14();
      }
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v24);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(&v23);
  }
  if ( v6 < 0 )
    goto LABEL_27;
  return (unsigned int)v6;
}

/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18003AA14
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x18001B5A0 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Wind.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x180053F30 (-remove_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJUEventRegistrationToken@@@.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x1801F5840 (-remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800549E8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180094564 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  PVOID v5; // rbx
  _QWORD *Ptr; // rax
  int v7; // edi
  struct IUnknown **v8; // rcx
  Microsoft::WRL::Details::EventTargetArray *v9; // rdi
  bool v10; // r12
  __int64 v11; // r13
  __int64 v12; // r13
  volatile int *v13; // rdx
  Microsoft::WRL::Details::EventTargetArray *v14; // r10
  void *(__fastcall *v15)(Microsoft::WRL::Details::EventTargetArray *__hidden, unsigned int); // rax
  void (*v16)(void); // rax
  struct IUnknown **v17; // r15
  void **v18; // rbp
  PVOID v19; // rcx
  Microsoft::WRL::Details::EventTargetArray *v20; // rax
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v24; // [rsp+78h] [rbp+20h] BYREF

  v2 = a1 + 2;
  v5 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v24 = v2;
  if ( !Ptr )
  {
    v7 = 0;
LABEL_15:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v24);
    return (unsigned int)v7;
  }
  v8 = (struct IUnknown **)Ptr[2];
  v9 = 0LL;
  v10 = 0;
  v11 = Ptr[3] - (_QWORD)v8;
  v22 = 0LL;
  v12 = (v11 >> 3) - 1;
  v23 = v12;
  if ( v12 )
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           &v22,
           &v23);
    if ( v7 < 0 )
    {
      if ( v22
        && !Microsoft::WRL::Details::SafeUnknownDecrementReference(
              (Microsoft::WRL::Details::EventTargetArray *)((char *)v22 + 12),
              v13) )
      {
        v15 = *(void *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *__hidden, unsigned int))(*(_QWORD *)v14 + 24LL);
        if ( v15 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
          Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v14, 1u);
        else
          v15(v14, 1u);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v16 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
          if ( (char *)v16 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
            Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
          else
            v16();
        }
      }
      goto LABEL_15;
    }
    v9 = v22;
    v17 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v17 == *((struct IUnknown ***)a1->Ptr + 3) )
      goto LABEL_32;
    v18 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v10 || a2 != *v17 )
      {
        if ( !v12 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v17, *v18++);
        --v12;
      }
      else
      {
        v10 = 1;
      }
      ++v17;
    }
    while ( v17 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
  }
  else
  {
    v10 = *v8 == a2;
  }
  if ( v10 )
  {
    AcquireSRWLockExclusive(a1 + 1);
    v19 = a1->Ptr;
    if ( &v22 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      a1->Ptr = 0LL;
      v5 = v19;
      v19 = 0LL;
    }
    v20 = v9;
    v9 = 0LL;
    a1->Ptr = v20;
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    if ( a1 == (RTL_SRWLOCK *)-8LL )
      goto LABEL_34;
    ReleaseSRWLockExclusive(a1 + 1);
  }
LABEL_32:
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9);
LABEL_34:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v7 = 0;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  return (unsigned int)v7;
}

/*
 * XREFs of ?Remove@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJUEventRegistrationToken@@@Z @ 0x1800E3B48
 * Callers:
 *     ?remove_PrepareforInitialPresentation@Win32BackedViewHostItem@@UEAAJUEventRegistrationToken@@@Z @ 0x1800E2BF0 (-remove_PrepareforInitialPresentation@Win32BackedViewHostItem@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_PrepareforInitialPresentation@ApplicationViewBackedViewHostItem@@UEAAJUEventRegistrationToken@@@Z @ 0x1800E6630 (-remove_PrepareforInitialPresentation@ApplicationViewBackedViewHostItem@@UEAAJUEventRegistration.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18005D2A8 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18005F930 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  volatile signed __int32 *v4; // rdi
  _QWORD *Ptr; // rax
  int v6; // ebx
  Microsoft::WRL::Details::EventTargetArray *v7; // rbx
  bool v8; // r13
  __int64 v9; // r12
  struct IUnknown **v10; // r15
  void **v11; // rdi
  volatile signed __int32 *v12; // rcx
  Microsoft::WRL::Details::EventTargetArray *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  PSRWLOCK v16; // [rsp+70h] [rbp+40h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+50h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  wil::srwlock::lock_exclusive(a1 + 2, &SRWLock);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0;
  }
  v7 = 0LL;
  v8 = 0;
  v9 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) - 1;
  v16 = 0LL;
  v18 = v9;
  if ( v9 )
  {
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
           (volatile signed __int32 **)&v16,
           (unsigned __int64 *)&v18);
    if ( v6 < 0 )
    {
      if ( v16 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v16);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      goto LABEL_35;
    }
    v7 = (Microsoft::WRL::Details::EventTargetArray *)v16;
    v10 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v10 == *((struct IUnknown ***)a1->Ptr + 3) )
      goto LABEL_28;
    v11 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v8 || a2 != *v10 )
      {
        if ( !v9 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v7, *v10, *v11++);
        --v9;
      }
      else
      {
        v8 = 1;
      }
      ++v10;
    }
    while ( v10 != *((struct IUnknown ***)a1->Ptr + 3) );
    v4 = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)Ptr[2] == (_QWORD)a2;
  }
  if ( v8 )
  {
    wil::srwlock::lock_exclusive(a1 + 1, &v16);
    v4 = 0LL;
    if ( &v18 != (__int64 *)a1 )
    {
      v4 = (volatile signed __int32 *)a1->Ptr;
      a1->Ptr = 0LL;
    }
    v12 = (volatile signed __int32 *)a1->Ptr;
    v13 = v7;
    v7 = 0LL;
    a1->Ptr = v13;
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
    if ( !v16 )
      goto LABEL_30;
    ReleaseSRWLockExclusive(v16);
  }
LABEL_28:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v7);
LABEL_30:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  v6 = 0;
LABEL_35:
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15AE,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}

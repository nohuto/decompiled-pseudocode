/*
 * XREFs of ?RegisterForViewEvents@HolographicPositioner@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800D90D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18005D2A8 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18005F930 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x1800DFDD8 (--$Make@U-$GitInvokeHelper@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::RegisterForViewEvents(__int64 a1, __int64 a2, struct IUnknown **a3)
{
  __int64 v3; // r14
  signed int AgileReference; // edi
  struct IUnknown **v7; // rax
  struct IUnknown *v8; // rbx
  __int64 v9; // rcx
  struct IUnknownVtbl *lpVtbl; // rcx
  struct IUnknown *v11; // rcx
  struct IUnknown *v12; // r15
  void *v13; // r12
  struct IUnknown *v14; // rbx
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  Microsoft::WRL::Details::EventTargetArray *v17; // rsi
  void **v18; // rdi
  struct IUnknown **i; // rbx
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rcx
  struct IUnknown *v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  struct IUnknown *v27; // [rsp+80h] [rbp+48h] BYREF
  struct IUnknown *v28; // [rsp+88h] [rbp+50h] BYREF
  PSRWLOCK v29; // [rsp+90h] [rbp+58h] BYREF
  __int64 v30; // [rsp+98h] [rbp+60h] BYREF

  v3 = a1 + 136;
  *a3 = 0LL;
  if ( !a2 )
  {
    AgileReference = -2147024809;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15AE,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)AgileReference);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x348,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)AgileReference);
    return (unsigned int)AgileReference;
  }
  v28 = 0LL;
  v7 = (struct IUnknown **)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>>,2>>(&v30);
  v8 = 0LL;
  if ( &v27 != v7 )
  {
    v8 = *v7;
    *v7 = 0LL;
  }
  v9 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  AgileReference = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    lpVtbl = v8[5].lpVtbl;
    if ( lpVtbl )
    {
      v8[5].lpVtbl = 0LL;
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
    }
    v27 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_d751e20a_9eb1_5432_b47a_399f5fb761c2, a2, &v27);
    if ( AgileReference < 0 )
    {
      v11 = v27;
    }
    else
    {
      v11 = (struct IUnknown *)v8[5].lpVtbl;
      v8[5].lpVtbl = (struct IUnknownVtbl *)v27;
      v27 = v11;
    }
    if ( v11 )
    {
      v27 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
    }
    if ( AgileReference >= 0 )
      AgileReference = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))v8->lpVtbl->QueryInterface)(
                         v8,
                         &GUID_d751e20a_9eb1_5432_b47a_399f5fb761c2,
                         &v28);
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  }
  if ( AgileReference < 0 )
  {
    v14 = v27;
  }
  else
  {
    v12 = v28;
    v13 = *(void **)(*(_QWORD *)a2 + 24LL);
    if ( !v28 )
    {
      v14 = v27;
      AgileReference = -2147024809;
      goto LABEL_47;
    }
    v14 = 0LL;
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v3 + 16), &SRWLock);
    v15 = *(_QWORD *)v3;
    v29 = 0LL;
    if ( v15 )
      v24 = ((__int64)(*(_QWORD *)(v15 + 24) - *(_QWORD *)(v15 + 16)) >> 3) + 1;
    else
      v24 = 1LL;
    AgileReference = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
                       (volatile signed __int32 **)&v29,
                       (unsigned __int64 *)&v24);
    if ( AgileReference >= 0 )
    {
      v16 = *(_QWORD **)v3;
      v17 = (Microsoft::WRL::Details::EventTargetArray *)v29;
      if ( *(_QWORD *)v3 )
      {
        v18 = (void **)v16[4];
        for ( i = (struct IUnknown **)v16[2]; i != (struct IUnknown **)v16[3]; ++i )
        {
          Microsoft::WRL::Details::EventTargetArray::AddTail(v17, *i, *v18);
          v16 = *(_QWORD **)v3;
          ++v18;
        }
      }
      v14 = v12;
      Microsoft::WRL::Details::EventTargetArray::AddTail(v17, v12, v13);
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v3 + 8), &v29);
      v20 = 0LL;
      if ( &v24 != (__int64 *)v3 )
      {
        v20 = *(volatile signed __int32 **)v3;
        *(_QWORD *)v3 = 0LL;
      }
      v21 = *(volatile signed __int32 **)v3;
      *(_QWORD *)v3 = v17;
      if ( v21 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v21);
      if ( v29 )
        ReleaseSRWLockExclusive(v29);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( v20 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v20);
      AgileReference = 0;
    }
    else
    {
      if ( v29 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v29);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
  }
  v22 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  }
LABEL_47:
  if ( AgileReference < 0 )
    goto LABEL_48;
  *a3 = v14;
  return 0LL;
}

/*
 * XREFs of ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180048F1C
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x180047AE4 (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002F4C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004378 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800451F4 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18004701C (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800495C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(
        __int64 a1,
        MobilityExperience::ActivityWrapper *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // eax
  void *v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  HANDLE Event; // r12
  void *v13; // rbx
  DWORD LastError; // r15d
  __int64 v15; // r8
  const char *v16; // r9
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // r12
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 v22; // r15
  __int64 v23; // r13
  struct Windows::Internal::IComPoolTask *v24; // rdi
  _DWORD *v25; // rax
  _DWORD *v26; // rbx
  int v27; // eax
  DWORD CurrentThreadId; // eax
  int v29; // ebx
  __int64 v30; // rcx
  int v31; // [rsp+58h] [rbp-29h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v34; // [rsp+100h] [rbp+7Fh]

  MobilityExperience::ActivityWrapper::SetActivityComplete(a2);
  v7 = *((_QWORD *)a2 + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  LOBYTE(v6) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 128LL))(v7, v6);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v13 = *(void **)(a1 + 88);
    if ( v13 )
    {
      LastError = GetLastError();
      if ( !CloseHandle(v13) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v15, v16);
        __debugbreak();
      }
      SetLastError(LastError);
    }
    *(_QWORD *)(a1 + 88) = Event;
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 80);
      while ( v17 >= 0 )
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v17 + 1, v17);
        if ( v18 == v17 )
          goto LABEL_15;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v17 + 16));
    }
LABEL_15:
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v19 = a1;
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 80);
      while ( v20 >= 0 )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v20 + 1, v20);
        if ( v21 == v20 )
          goto LABEL_22;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v20 + 16));
LABEL_22:
      v19 = a1;
    }
    v34 = *(_DWORD *)a2;
    v31 = *(_DWORD *)a2;
    v22 = *((_QWORD *)a2 + 1);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v23 = a3;
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v24 = 0LL;
    v25 = operator new(0x38uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    v26 = v25;
    if ( v25 )
    {
      *(_QWORD *)v25 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
      v25[3] = 1;
      *(_QWORD *)v25 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v27 = v31;
      }
      else
      {
        v27 = v34;
      }
      *(_QWORD *)v26 = off_1800C5000;
      v19 = 0LL;
      *((_QWORD *)v26 + 2) = a1;
      *((_QWORD *)v26 + 3) = a1;
      v26[8] = v27;
      *((_QWORD *)v26 + 5) = v22;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      v23 = 0LL;
      *((_QWORD *)v26 + 6) = a3;
      v24 = (struct Windows::Internal::IComPoolTask *)v26;
    }
    CurrentThreadId = GetCurrentThreadId();
    v29 = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v24, 0LL);
    if ( v24 )
      (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(v19);
    if ( v29 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x11D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v29);
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
    if ( a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(a1);
    v30 = *((_QWORD *)a2 + 1);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  else
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v9, v10, v11);
  }
}

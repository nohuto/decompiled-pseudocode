/*
 * XREFs of ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x18004CAE0
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x18004B79C (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032AC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x18000462C (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180048F24 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18004AD20 (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004D150 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004D1F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_18004D1F0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(
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
  HANDLE Event; // r14
  void *v13; // rbx
  DWORD LastError; // r12d
  BOOL v15; // eax
  __int64 v16; // r8
  const char *v17; // r9
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // r13
  struct Windows::Internal::IComPoolTask *v22; // rdi
  _DWORD *v23; // rax
  _DWORD *v24; // rbx
  int v25; // eax
  __int64 v26; // rbx
  DWORD CurrentThreadId; // eax
  wil::details::in1diag3 *v28; // rcx
  __int64 result; // rax
  __int64 v30; // rcx
  __int64 v31; // [rsp+38h] [rbp-39h]
  int v32; // [rsp+50h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v35; // [rsp+F0h] [rbp+7Fh]
  int v36; // [rsp+F0h] [rbp+7Fh]

  MobilityExperience::ActivityWrapper::SetActivityComplete(a2);
  v7 = *((_QWORD *)a2 + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  LOBYTE(v6) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 128LL))(v7, v6);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_45;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
LABEL_47:
    wil::details::in1diag3::Throw_GetLastError(retaddr, v9, v10, v11);
    JUMPOUT(0x18004CE11LL);
  }
  GetLastError();
  v13 = *(void **)(a1 + 80);
  if ( v13 )
  {
    LastError = GetLastError();
    v15 = CloseHandle(v13);
    v18 = retaddr;
    if ( v15 )
    {
      SetLastError(LastError);
      goto LABEL_10;
    }
LABEL_45:
    wil::details::in1diag3::_FailFast_GetLastError(v18, (void *)0x879, v16, v17);
LABEL_46:
    wil::details::in1diag3::Throw_Hr(
      v28,
      (void *)0x11D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)result);
    goto LABEL_47;
  }
LABEL_10:
  *(_QWORD *)(a1 + 80) = Event;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::AddRef(a1);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v19 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::AddRef(a1);
  v35 = *(_DWORD *)a2;
  v32 = *(_DWORD *)a2;
  v20 = *((_QWORD *)a2 + 1);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v21 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v22 = 0LL;
  v23 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v24 = v23;
  v31 = a3;
  if ( v23 )
  {
    *(_QWORD *)v23 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    v23[3] = 1;
    *(_QWORD *)v23 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v25 = v32;
    }
    else
    {
      v25 = v35;
    }
    *(_QWORD *)v24 = off_1800D36A8;
    v19 = 0LL;
    *((_QWORD *)v24 + 2) = a1;
    *((_QWORD *)v24 + 3) = a1;
    v24[8] = v25;
    *((_QWORD *)v24 + 5) = v20;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v21 = 0LL;
    *((_QWORD *)v24 + 6) = a3;
    v22 = (struct Windows::Internal::IComPoolTask *)v24;
    v26 = 0LL;
    v31 = 0LL;
  }
  else
  {
    v26 = a3;
  }
  CurrentThreadId = GetCurrentThreadId();
  v36 = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v22, 0LL);
  if ( v22 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v22 + 16LL))(v22);
    v26 = v31;
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v19 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(v19);
  v28 = retaddr;
  result = (unsigned int)v36;
  if ( v36 < 0 )
    goto LABEL_46;
  if ( a3 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a1 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(a1);
  v30 = *((_QWORD *)a2 + 1);
  if ( v30 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return result;
}

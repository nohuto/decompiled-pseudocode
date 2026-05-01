/*
 * XREFs of ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18014F860
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105__2__1_::Invoke @ 0x1801506A0 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windo_ea_1801506A0.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x1800472D0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_e8d75694a036b21790d666e0494687c0___ @ 0x1801512AC (Windows--Internal--ComTaskPool--WrapWithTask__lambda_e8d75694a036b21790d666e0494687c0___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(
        struct IUnknown *a1)
{
  int v1; // eax
  wil::details::in1diag3 *v2; // rcx
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  IUnknown *v5; // rbx
  DWORD CurrentThreadId; // eax
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v12; // [rsp+68h] [rbp+18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF

  v12 = 0LL;
  v1 = CMarshaledInterface::Marshal(&v12, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, a1, 1);
  v2 = retaddr;
  if ( v1 < 0 )
  {
    v3 = (unsigned int)v1;
    v4 = 48LL;
LABEL_11:
    wil::details::in1diag3::_Log_Hr(
      v2,
      (void *)v4,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v3);
    goto LABEL_12;
  }
  v10[0] = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v10[1] = StartWindowTelemetry::StartRecoveryDuringShutdown;
  v5 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_e8d75694a036b21790d666e0494687c0___(&v13, v10);
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0x7D0u, v5, 0LL);
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  v2 = retaddr;
  if ( v7 < 0 )
  {
    v3 = (unsigned int)v7;
    v4 = 70LL;
    goto LABEL_11;
  }
LABEL_12:
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}

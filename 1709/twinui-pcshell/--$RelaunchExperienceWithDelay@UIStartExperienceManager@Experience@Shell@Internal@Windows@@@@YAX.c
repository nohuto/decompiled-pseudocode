/*
 * XREFs of ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1801844A4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180185640 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180185640.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_f11545691eb1c18d1795497ebae59dd5___ @ 0x180184FB0 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_f11545691eb1c18d1795497ebae59dd5___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(
        struct IUnknown *a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  wil::details::in1diag3 *v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v1 = CMarshaledInterface::Marshal(&v12, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, a1, 1);
  v4 = retaddr;
  if ( v1 < 0 )
  {
    v5 = (unsigned int)v1;
    v6 = 46LL;
LABEL_9:
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v6,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v5);
    goto LABEL_10;
  }
  v7 = v12;
  v10[0] = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v10[1] = StartWindowTelemetry::StartRecoveryDuringShutdown;
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_f11545691eb1c18d1795497ebae59dd5___(
         v7,
         v2,
         v3,
         v10,
         -2LL);
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  v4 = retaddr;
  if ( v8 < 0 )
  {
    v5 = (unsigned int)v8;
    v6 = 68LL;
    goto LABEL_9;
  }
LABEL_10:
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}

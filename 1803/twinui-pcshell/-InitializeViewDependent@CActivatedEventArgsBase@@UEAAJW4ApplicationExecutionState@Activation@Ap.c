/*
 * XREFs of ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x180071A50
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180070F64 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18030C674 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::InitializeViewDependent(__int64 a1, int a2, int a3, IUnknown *a4, char a5)
{
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  bool v12; // zf
  int v14[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+50h] [rbp+8h] BYREF
  IUnknown *v17; // [rsp+68h] [rbp+20h] BYREF

  wil::srwlock::lock_exclusive(a1 + 96, v14);
  if ( a4
    && (v16 = 2,
        v17 = a4,
        Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)(a1 + 64)),
        Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)(a1 + 64)),
        v10 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                (__int64 *)(a1 + 64),
                &GUID_ca4d975c_d4d6_43f0_97c0_0833c6391c24,
                &v17,
                &v16),
        v11 = v10,
        v10 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v10,
      v14[0]);
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 72) == 0;
    *(_BYTE *)(a1 + 88) = a5;
    *(_DWORD *)(a1 + 60) = a2;
    if ( v12 )
      *(_DWORD *)(a1 + 72) = a3;
    else
      MicrosoftTelemetryAssertTriggeredNoArgs(v9);
    v11 = 0;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)v14);
  return v11;
}

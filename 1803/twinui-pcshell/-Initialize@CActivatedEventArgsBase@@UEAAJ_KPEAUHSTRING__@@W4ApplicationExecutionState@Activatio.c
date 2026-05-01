/*
 * XREFs of ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE@Z @ 0x180071B20
 * Callers:
 *     <none>
 * Callees:
 *     ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180071870 (-v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18030C674 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::Initialize(__int64 a1, __int64 a2, HSTRING a3, int a4, char a5, char a6)
{
  unsigned int v8; // ebx
  enum Windows::ApplicationModel::Activation::ActivationKind *v9; // r8
  CActivatedEventArgsBase *v10; // rcx
  __int64 (__fastcall *v11)(CActivatedEventArgsBase *, HSTRING, enum Windows::ApplicationModel::Activation::ActivationKind *); // rax
  int ActivationKind; // eax

  v8 = *(_BYTE *)(a1 + 77) != 0 ? 0x8000FFFF : 0;
  if ( *(_BYTE *)(a1 + 77) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs(a1);
    RoOriginateError(v8, 0LL);
  }
  else
  {
    v9 = (enum Windows::ApplicationModel::Activation::ActivationKind *)(a1 + 56);
    *(_BYTE *)(a1 + 78) = a6;
    *(_BYTE *)(a1 + 76) = a5;
    *(_QWORD *)(a1 + 80) = a2;
    *(_DWORD *)(a1 + 60) = a4;
    v10 = (CActivatedEventArgsBase *)(a1 - 16);
    v11 = *(__int64 (__fastcall **)(CActivatedEventArgsBase *, HSTRING, enum Windows::ApplicationModel::Activation::ActivationKind *))(*(_QWORD *)v10 + 80LL);
    if ( v11 == CActivatedEventArgsBase::v_GetActivationKind )
      ActivationKind = CActivatedEventArgsBase::v_GetActivationKind(v10, a3, v9);
    else
      ActivationKind = v11(v10, a3, v9);
    v8 = ActivationKind;
    if ( ActivationKind >= 0 )
      *(_BYTE *)(a1 + 77) = 1;
  }
  return v8;
}

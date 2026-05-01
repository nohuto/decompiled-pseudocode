/*
 * XREFs of ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x18000C948
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18000C760 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x1800196DC (CDelayIAMOperations--AddOperation__lambda_bb299bb733d931796faa9380238be063___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_AttemptPendingActivationTracking(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplication *a3)
{
  HWND ForegroundWindow; // rax
  HWND v7; // rdi
  _QWORD v8[6]; // [rsp+28h] [rbp-30h] BYREF

  ForegroundWindow = GetForegroundWindow();
  v7 = ForegroundWindow;
  if ( !ForegroundWindow || ForegroundWindow == a2 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 8LL))(a3);
    v8[0] = this;
    v8[1] = a2;
    v8[2] = v7;
    v8[3] = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 8LL))(a3);
    CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___(*((_QWORD *)this + 101), v8);
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 16LL))(a3);
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 16LL))(a3);
    }
  }
}

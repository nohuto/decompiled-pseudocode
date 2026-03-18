/*
 * XREFs of InitiateWaitForInjectionCompletion @ 0x1C00122E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C0013D90 (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall InitiateWaitForInjectionCompletion(void (*a1)(void))
{
  char v2; // bl
  CMouseProcessor *v3; // rax

  v2 = 0;
  v3 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( v3 )
    return CMouseProcessor::InitiateWaitForInjectionCompletion(v3, a1);
  return v2;
}

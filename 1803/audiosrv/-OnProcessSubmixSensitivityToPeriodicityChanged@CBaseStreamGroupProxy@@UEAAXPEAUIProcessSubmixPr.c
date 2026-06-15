/*
 * XREFs of ?OnProcessSubmixSensitivityToPeriodicityChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800CA7E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::OnProcessSubmixSensitivityToPeriodicityChanged(
        CBaseStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  char v3; // al

  v3 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 120LL))(a2);
  CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(this, v3 != 0 ? 1 : -1);
}

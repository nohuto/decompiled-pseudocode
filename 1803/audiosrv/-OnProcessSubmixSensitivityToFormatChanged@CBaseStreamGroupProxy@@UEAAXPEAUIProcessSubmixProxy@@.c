/*
 * XREFs of ?OnProcessSubmixSensitivityToFormatChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800CA7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::OnProcessSubmixSensitivityToFormatChanged(
        CBaseStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  char v3; // al

  v3 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 128LL))(a2);
  CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, v3 != 0 ? 1 : -1);
}

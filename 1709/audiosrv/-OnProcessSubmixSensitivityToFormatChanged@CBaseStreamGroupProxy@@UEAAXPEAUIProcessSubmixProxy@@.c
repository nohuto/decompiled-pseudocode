/*
 * XREFs of ?OnProcessSubmixSensitivityToFormatChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800947B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::OnProcessSubmixSensitivityToFormatChanged(
        CBaseStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  int v3; // edx

  if ( (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 128LL))(a2) )
    v3 = 1;
  else
    v3 = -1;
  CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, v3);
}

/*
 * XREFs of ?OnProcessSubmixLazyRequestStatusChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x180094770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::OnProcessSubmixLazyRequestStatusChanged(
        CBaseStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  int v3; // edx

  if ( (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 136LL))(a2) )
    v3 = 1;
  else
    v3 = -1;
  CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(this, v3);
}

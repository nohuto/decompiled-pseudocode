/*
 * XREFs of DxgkSetPowerComponentResidencyCB @ 0x1C0034A80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C002272C (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DxgkSetPowerComponentResidencyCB(__int64 a1, int a2, __int64 a3)
{
  _BYTE v6[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v6);
  DXGADAPTER::SetPowerComponentResidencyCB(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3704LL), a2, a3);
  if ( v6[0] )
    KeUnstackDetachProcess(&ApcState);
}

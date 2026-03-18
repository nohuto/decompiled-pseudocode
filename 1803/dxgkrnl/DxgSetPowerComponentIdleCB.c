/*
 * XREFs of DxgSetPowerComponentIdleCB @ 0x1C002E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0026DB8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgSetPowerComponentIdleCB(__int64 a1, int a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v4);
  DXGADAPTER::SetPowerComponentIdleCB(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3728LL), a2);
  if ( v4[0] )
    KeUnstackDetachProcess(&ApcState);
}

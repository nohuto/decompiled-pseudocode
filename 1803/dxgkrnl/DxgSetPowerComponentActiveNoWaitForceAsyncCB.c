/*
 * XREFs of DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C002E850
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00269A0 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DxgSetPowerComponentActiveNoWaitForceAsyncCB(__int64 a1, unsigned int a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v4);
  DXGADAPTER::SetPowerComponentActiveCBInternal(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3728LL), a2, 0, 2u);
  if ( v4[0] )
    KeUnstackDetachProcess(&ApcState);
}

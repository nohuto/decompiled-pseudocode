/*
 * XREFs of DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C0025810
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001F944 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
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

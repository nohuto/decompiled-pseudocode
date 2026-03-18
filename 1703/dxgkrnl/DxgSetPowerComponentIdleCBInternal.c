/*
 * XREFs of DxgSetPowerComponentIdleCBInternal @ 0x1C00133B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0006884 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall DxgSetPowerComponentIdleCBInternal(__int64 a1, unsigned int a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v4);
  DXGADAPTER::SetPowerComponentIdleCBInternal(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3704LL), a2, 0);
  if ( v4[0] )
    KeUnstackDetachProcess(&ApcState);
}

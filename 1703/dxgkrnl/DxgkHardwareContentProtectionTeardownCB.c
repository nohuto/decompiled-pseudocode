/*
 * XREFs of DxgkHardwareContentProtectionTeardownCB @ 0x1C00347B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C0021968 (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgkHardwareContentProtectionTeardownCB(__int64 a1, int a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v4);
  DXGADAPTER::NotifyHardwareContentProtectionTeardown(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3704LL), a2);
  if ( v4[0] )
    KeUnstackDetachProcess(&ApcState);
}

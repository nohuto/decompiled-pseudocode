/*
 * XREFs of DxgkMitigatedRangeUpdateCB @ 0x1C0034820
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     DpiMitigatedRangeUpdate @ 0x1C01C277C (DpiMitigatedRangeUpdate.c)
 */

void __fastcall DxgkMitigatedRangeUpdateCB(__int64 a1, unsigned int a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v4);
  DpiMitigatedRangeUpdate(a1, a2);
  if ( v4[0] )
    KeUnstackDetachProcess(&ApcState);
}

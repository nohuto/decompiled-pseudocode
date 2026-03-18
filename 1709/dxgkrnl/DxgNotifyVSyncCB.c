/*
 * XREFs of DxgNotifyVSyncCB @ 0x1C00256F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C001EB88 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgNotifyVSyncCB(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _BYTE v4[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v4);
  DXGADAPTER::NotifyVSync(*(LARGE_INTEGER **)(*(_QWORD *)(a1 + 64) + 3728LL), v2, v3);
  if ( v4[0] )
    KeUnstackDetachProcess(&ApcState);
}

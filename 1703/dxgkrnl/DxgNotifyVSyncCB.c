/*
 * XREFs of DxgNotifyVSyncCB @ 0x1C0013410
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C000648C (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall DxgNotifyVSyncCB(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _BYTE v4[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v4);
  DXGADAPTER::NotifyVSync(*(LARGE_INTEGER **)(*(_QWORD *)(a1 + 64) + 3704LL), v2, v3);
  if ( v4[0] )
    KeUnstackDetachProcess(&ApcState);
}

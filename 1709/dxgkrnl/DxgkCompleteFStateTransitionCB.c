/*
 * XREFs of DxgkCompleteFStateTransitionCB @ 0x1C00259A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001E33C (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgkCompleteFStateTransitionCB(__int64 a1, int a2)
{
  __int64 v4; // r8
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v5);
  DXGADAPTER::CompleteFStateTransitionCB(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3728LL), a2, v4);
  if ( v5[0] )
    KeUnstackDetachProcess(&ApcState);
}

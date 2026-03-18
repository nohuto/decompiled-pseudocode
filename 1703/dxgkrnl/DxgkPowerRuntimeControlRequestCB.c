/*
 * XREFs of DxgkPowerRuntimeControlRequestCB @ 0x1C0034900
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_pj @ 0x1C00227F4 (Template_pj.c)
 */

__int64 __fastcall DxgkPowerRuntimeControlRequestCB(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rax
  _BYTE v19[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v19);
  v14 = *(_QWORD *)(a1 + 64);
  v15 = *(_QWORD *)(v14 + 3704);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_pj(v12, &Dxgk_PowerRuntimeControlRequestCB, v13, *(_QWORD *)(v14 + 3704), a2);
  if ( v15 && *(_BYTE *)(v15 + 2761) )
  {
    v16 = PoFxPowerControl(*(_QWORD *)(v15 + 2328), a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v17 + 24) = 469LL;
    WdLogEvent5_WdError(v17);
    v16 = -1073741823;
  }
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  return v16;
}

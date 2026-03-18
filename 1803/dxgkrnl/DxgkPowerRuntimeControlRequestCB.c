/*
 * XREFs of DxgkPowerRuntimeControlRequestCB @ 0x1C002F090
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0pj @ 0x1C00277C0 (McTemplateK0pj.c)
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
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ebx
  __int64 v16; // rax
  _BYTE v18[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v18);
  v13 = *(_QWORD *)(a1 + 64);
  v14 = *(_QWORD *)(v13 + 3728);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pj(v11, &Dxgk_PowerRuntimeControlRequestCB, v12, *(_QWORD *)(v13 + 3728), a2);
  if ( v14 && *(_BYTE *)(v14 + 2937) )
  {
    v15 = PoFxPowerControl(*(_QWORD *)(v14 + 2504), a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v16 + 24) = 478LL;
    WdLogEvent5_WdError(v16);
    v15 = -1073741823;
  }
  if ( v18[0] )
    KeUnstackDetachProcess(&ApcState);
  return v15;
}

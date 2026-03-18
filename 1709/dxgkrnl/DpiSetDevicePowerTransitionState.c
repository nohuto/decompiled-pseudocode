/*
 * XREFs of DpiSetDevicePowerTransitionState @ 0x1C002DD88
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C002D9A0 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00338DC (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C00339C8 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 */

NTSTATUS __fastcall DpiSetDevicePowerTransitionState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // zf

  v2 = a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdPower();
  v4[5] = 0LL;
  v4[3] = a1;
  v4[4] = v2;
  result = WdLogEvent5_WdPower(v4);
  v8 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 3968) = v2;
  if ( !v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    return McTemplateK0xq(v6, &Dxgk_SetDevicePowerTransitionState, v7, *(_QWORD *)(a1 + 3728), v2);
  return result;
}

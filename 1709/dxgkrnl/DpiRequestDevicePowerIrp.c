/*
 * XREFs of DpiRequestDevicePowerIrp @ 0x1C002D858
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C002D9A0 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00338DC (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 */

NTSTATUS __fastcall DpiRequestDevicePowerIrp(__int64 a1, int a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  NTSTATUS result; // eax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdPower();
  v4[5] = 0LL;
  v4[3] = a1;
  v4[4] = v2;
  WdLogEvent5_WdPower(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0xq(v5, &Dxgk_DpiRequestDevicePowerIrp, v6, *(_QWORD *)(a1 + 3728), v2);
  if ( *(_DWORD *)(a1 + 4108) >= 3u )
    *(_DWORD *)(a1 + 4108) = 0;
  v7 = a1 + 8 * (*(unsigned int *)(a1 + 4108) + 2 * (*(unsigned int *)(a1 + 4108) + 257LL));
  *(_DWORD *)(v7 + 20) = 0;
  *(_QWORD *)(v7 + 8) = 0LL;
  *(_DWORD *)(v7 + 16) = v2;
  *(_QWORD *)v7 = MEMORY[0xFFFFF78000000014];
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    result = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(a1 + 24),
               2u,
               (POWER_STATE)v2,
               (PREQUEST_POWER_COMPLETE)DpiRuntimePowerIrpCompletion,
               (PVOID)v7,
               0LL);
    v9 = result;
    if ( result != 259 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, 0x20u);
      *(_QWORD *)(v7 + 8) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v7 + 20) = v9;
      v11 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v11 + 24) = v9;
      result = WdLogEvent5_WdError(v11);
    }
    ++*(_DWORD *)(a1 + 4108);
  }
  return result;
}

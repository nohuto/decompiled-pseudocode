/*
 * XREFs of DxgkSetSyncRefreshCountWaitTarget @ 0x1C00E4ED0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E4F80 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTarget(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rcx
  unsigned int refreshed; // ebx
  __int64 v6; // r8

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2026);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  refreshed = DxgkSetSyncRefreshCountWaitTargetInternal(
                *(_OWORD *)v3,
                HIDWORD(*(_QWORD *)v3),
                *(_QWORD *)(v3 + 8),
                HIDWORD(*(_OWORD *)v3));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v6, 2026);
  return refreshed;
}

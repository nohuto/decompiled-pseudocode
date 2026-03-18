/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C009440C
 * Callers:
 *     rimPassivateSecondaryRims @ 0x1C00930C4 (rimPassivateSecondaryRims.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C0094240 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  __int64 result; // rax

  result = WPP_RECORDER_SF_q(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x14u,
             0x20u,
             (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
             a1);
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 184) &= 0x8FFFFFFF;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}

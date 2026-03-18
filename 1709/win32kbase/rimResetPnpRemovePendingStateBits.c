/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C000C718
 * Callers:
 *     rimPassivateSecondaryRims @ 0x1C0009354 (rimPassivateSecondaryRims.c)
 *     RIMUnregisterForInput @ 0x1C00099C0 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C000C5D4 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  __int64 result; // rax

  result = WPP_RECORDER_SF_q(
             WPP_GLOBAL_Control->DeviceExtension,
             3,
             20,
             32,
             (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
             a1);
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 184) &= 0x1FFFFFFFu;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}

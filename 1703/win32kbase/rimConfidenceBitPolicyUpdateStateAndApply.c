/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C011191C
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C01115D4 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     EtwTraceTouchPadConfidenceCleared @ 0x1C00DA8F0 (EtwTraceTouchPadConfidenceCleared.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0116AE4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0116C7C (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, int *a2, int a3)
{
  __int64 result; // rax
  unsigned int v7; // ecx
  BOOL v8; // edx
  unsigned __int16 v9; // r9

  if ( a3 || (result = *(unsigned int *)(a1 + 260), (result & 0x10) != 0) && (a2[601] & 0x4000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
    {
      v7 = a2[655];
      v8 = (a2[601] & 4) != 0 && (v7 & 4) == 0;
      EtwTraceTouchPadConfidenceCleared(*a2, v8, (v7 >> 1) & 1);
    }
    v9 = 35;
    if ( !a3 )
      v9 = 36;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      v9,
      (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
      *a2);
    result = RIMCmAddContactSuppressionReasons(a1, a2, 16LL);
    a2[601] |= 0x8000u;
  }
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = (unsigned int)a2[2];
    if ( (result & 0x10) != 0 )
    {
      result = a2[601] & 0x1004000;
      if ( (_DWORD)result == 16793600 )
      {
        result = (unsigned int)a2[8];
        if ( (result & 1) == 0 )
          return RIMCmRemoveContactSuppressionReasons(a1, a2, 16LL);
      }
    }
  }
  return result;
}

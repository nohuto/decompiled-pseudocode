/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01103FC
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C01100A8 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     EtwTraceTouchPadConfidenceCleared @ 0x1C00E1440 (EtwTraceTouchPadConfidenceCleared.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0115660 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01157F8 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, int *a2, int a3)
{
  __int64 result; // rax
  unsigned int v7; // ecx
  BOOL v8; // edx
  unsigned __int16 v9; // r9

  if ( a3 || (result = *(unsigned int *)(a1 + 276), (result & 0x10) != 0) && (a2[601] & 0x4000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
    {
      v7 = a2[655];
      v8 = (a2[601] & 4) != 0 && (v7 & 4) == 0;
      EtwTraceTouchPadConfidenceCleared(*a2, v8, (v7 >> 1) & 1);
    }
    v9 = 36;
    if ( !a3 )
      v9 = 37;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      v9,
      (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
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

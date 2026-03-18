/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x1C0111F44
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C01100A8 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0115660 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01157F8 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimNullXYPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r8
  unsigned __int16 v8; // r9

  v4 = a2;
  v5 = a1;
  if ( *(_DWORD *)(a1 + 24) == 5 )
  {
    if ( !a3 && !a4 )
      return RIMCmRemoveContactSuppressionReasons(a1, a2, 32LL);
    if ( (a2[601] & 6) == 2 )
    {
      v7 = 32LL;
LABEL_12:
      result = RIMCmAddContactSuppressionReasons(a1, a2, v7);
      v4[601] |= 0x8000u;
      return result;
    }
    v8 = 40;
LABEL_11:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      v8,
      (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
      *a2);
    a1 = v5;
    v7 = 2LL;
    a2 = v4;
    goto LABEL_12;
  }
  if ( a3 || a4 )
  {
    v8 = 41;
    goto LABEL_11;
  }
  return result;
}

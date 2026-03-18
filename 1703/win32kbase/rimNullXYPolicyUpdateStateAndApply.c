/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x1C011345C
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C01115D4 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0116AE4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0116C7C (RIMCmRemoveContactSuppressionReasons.c)
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
    v8 = 39;
LABEL_11:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      v8,
      (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
      *a2);
    a1 = v5;
    v7 = 2LL;
    a2 = v4;
    goto LABEL_12;
  }
  if ( a3 || a4 )
  {
    v8 = 40;
    goto LABEL_11;
  }
  return result;
}

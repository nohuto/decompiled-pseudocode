/*
 * XREFs of ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0044510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     PerformDLMObjectBindings @ 0x1C005DC88 (PerformDLMObjectBindings.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhasePostProcessResult(__int64 a1)
{
  bool v1; // zf
  _QWORD *v3; // rdi
  char v4; // r8
  const char *v5; // rax
  const char *v6; // rdx
  __int64 v7; // rcx

  v1 = (*(_DWORD *)(a1 + 84) & 0x100) == 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 9;
  if ( !v1 )
  {
    PerformDLMObjectBindings(a1 + 88, **(_QWORD **)(a1 + 56));
    dword_1C00776F8 = 0;
    pszDest = 0;
    FreeDataBuffs(a1 + 88, 1u);
  }
  v4 = 0;
  v5 = byte_1C0066CD0;
  v6 = byte_1C0066CD0;
  if ( v3 )
  {
    v7 = v3[1];
    v4 = (char)v3;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v3[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (const char *)v3[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x44u,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    0,
    v4,
    v5,
    v6);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}

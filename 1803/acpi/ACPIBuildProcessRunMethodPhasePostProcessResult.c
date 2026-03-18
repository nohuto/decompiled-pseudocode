/*
 * XREFs of ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C000F910
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     PerformDLMObjectBindings @ 0x1C004781C (PerformDLMObjectBindings.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhasePostProcessResult(__int64 a1)
{
  bool v1; // zf
  _QWORD *v3; // rdi
  char v4; // r8
  void *v5; // rax
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp-18h]

  v1 = (*(_DWORD *)(a1 + 84) & 0x100) == 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 9;
  if ( !v1 )
  {
    PerformDLMObjectBindings(a1 + 88, **(_QWORD **)(a1 + 56));
    dword_1C00677B8 = 0;
    pszDest = 0;
    FreeDataBuffs(a1 + 88, 1u);
  }
  v4 = 0;
  v5 = &unk_1C005B1F0;
  v6 = &unk_1C005B1F0;
  if ( v3 )
  {
    v7 = v3[1];
    v4 = (char)v3;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)v3[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (void *)v3[71];
    }
  }
  v9 = (__int64)v6;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v6,
    6,
    68,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    0,
    v4,
    (__int64)v5,
    v9);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}

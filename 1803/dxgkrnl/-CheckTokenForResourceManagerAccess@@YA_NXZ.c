/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C01B650C
 * Callers:
 *     DxgkGetMemoryBudgetTarget @ 0x1C01B8320 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01B88D0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetYieldPercentage @ 0x1C01B8DF0 (DxgkGetYieldPercentage.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1C01B9380 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01B97B0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetYieldPercentage @ 0x1C01BA0E0 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall CheckTokenForResourceManagerAccess(__int64 a1)
{
  __int64 v1; // rdx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v1 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 211);
  return v1 && (int)RtlCheckTokenMembership(0LL, v1, &v3) >= 0 && v3;
}

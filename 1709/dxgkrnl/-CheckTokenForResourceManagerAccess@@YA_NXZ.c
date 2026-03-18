/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0120E14
 * Callers:
 *     DxgkGetYieldPercentage @ 0x1C0120970 (DxgkGetYieldPercentage.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1C0120BD0 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01BA6D0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1C01BACD0 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01BAF20 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetYieldPercentage @ 0x1C01BB660 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall CheckTokenForResourceManagerAccess(__int64 a1)
{
  __int64 v1; // rdx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v1 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 195);
  return v1 && (int)RtlCheckTokenMembership(0LL, v1, &v3) >= 0 && v3;
}

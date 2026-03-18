/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0121574
 * Callers:
 *     DxgkGetYieldPercentage @ 0x1C01210E0 (DxgkGetYieldPercentage.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1C0121330 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01A2790 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1C01A2D80 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01A2FD0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetYieldPercentage @ 0x1C01A36C0 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetResourceManagerSid@DXGGLOBAL@@QEAAPEAXXZ @ 0x1C011032C (-GetResourceManagerSid@DXGGLOBAL@@QEAAPEAXXZ.c)
 */

bool __fastcall CheckTokenForResourceManagerAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  void *ResourceManagerSid; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  ResourceManagerSid = DXGGLOBAL::GetResourceManagerSid(Global);
  return ResourceManagerSid && (int)RtlCheckTokenMembership(0LL, ResourceManagerSid, &v7) >= 0 && v7;
}

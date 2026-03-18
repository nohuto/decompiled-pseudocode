/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0175408
 * Callers:
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01735F4 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoDispatchIoctl @ 0x1C01F2FD0 (DpiFdoDispatchIoctl.c)
 *     DpiSriovAttach @ 0x1C01FBBAC (DpiSriovAttach.c)
 *     DpiSriovMitigationUpdate @ 0x1C01FBF88 (DpiSriovMitigationUpdate.c)
 * Callees:
 *     <none>
 */

bool DxgkpCheckProcessForVirtualMachineManagementAccess()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  return (int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, &v1) >= 0 && v1
      || g_DRTEnable && (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v1) >= 0 && v1;
}

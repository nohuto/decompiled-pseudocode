/*
 * XREFs of ?wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z @ 0x18005EE8C
 * Callers:
 *     ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060B90 (-SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedCon.c)
 *     ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060DE0 (-UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180007AF8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 */

__int64 __fastcall wil_LoadStagingConfig(char **a1)
{
  unsigned int v2; // edi
  HANDLE ProcessHeap; // rax
  char *v4; // rax
  char *v5; // rbx
  __int64 result; // rax
  HANDLE v7; // rax

  *a1 = 0LL;
  v2 = -1073741670;
  ProcessHeap = GetProcessHeap();
  v4 = (char *)HeapAlloc(ProcessHeap, 0, 0x1058uLL);
  v5 = v4;
  if ( !v4
    || (result = wil_details_StagingConfig_Load((unsigned int *)v4, 0, 0x1000uLL, v4 + 88, 1u), (v2 = result) != 0) )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v5);
    return v2;
  }
  else
  {
    *a1 = v5;
  }
  return result;
}

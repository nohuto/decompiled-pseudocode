/*
 * XREFs of ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x18008D96C
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180006280 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x18008D1C4 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_StagingConfig_Free(LPVOID *a1)
{
  HANDLE ProcessHeap; // rax

  if ( *((_DWORD *)a1 + 20) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, a1[7]);
    a1[7] = 0LL;
    a1[3] = 0LL;
  }
}

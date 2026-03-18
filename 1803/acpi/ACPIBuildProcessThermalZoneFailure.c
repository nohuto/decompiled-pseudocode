/*
 * XREFs of ACPIBuildProcessThermalZoneFailure @ 0x1C00107B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C000EAE0 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C00126CC (WPP_RECORDER_SF_LLqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneFailure(_QWORD *Entry)
{
  __int64 v1; // rbx
  int v2; // r8d
  void *v4; // rcx

  v1 = Entry[5];
  v2 = 0;
  if ( v1 )
    v2 = Entry[5];
  WPP_RECORDER_SF_LLqss(WPP_GLOBAL_Control->DeviceExtension, 4, v2, 72);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x2000000000000uLL);
  if ( *(_QWORD *)(v1 + 568) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 8), 0xFFFEBFFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 568), 0);
    *(_QWORD *)(v1 + 568) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 560) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 8), 0xFFFF5FFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 560), 0);
    *(_QWORD *)(v1 + 560) = 0LL;
  }
  v4 = *(void **)(v1 + 200);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(v1 + 200) = 0LL;
  }
  return ACPIBuildProcessGenericComplete(Entry);
}

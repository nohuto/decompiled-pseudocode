/*
 * XREFs of ACPIBuildProcessDeviceFailure @ 0x1C000C600
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C000EAE0 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C00126CC (WPP_RECORDER_SF_LLqss.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceFailure(_QWORD *Entry)
{
  __int64 v1; // rbx
  void *v3; // r8
  __int64 v4; // rdx

  v1 = Entry[5];
  v3 = &unk_1C005B1F0;
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 8);
    if ( (v4 & 0x200000000000LL) != 0 && (v4 & 0x400000000000LL) != 0 )
      v3 = *(void **)(v1 + 568);
  }
  WPP_RECORDER_SF_LLqss(WPP_GLOBAL_Control->DeviceExtension, 2, (_DWORD)v3, 26);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x2000000000000uLL);
  return ACPIBuildProcessGenericComplete(Entry);
}

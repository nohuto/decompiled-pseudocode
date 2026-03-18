/*
 * XREFs of ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C001C5F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIResumeInterpreter @ 0x1C00442E0 (AMLIResumeInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0SystemSubPhase1(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // r8
  const char *v4; // rcx
  const char *v5; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = v1[1];
    v4 = (const char *)&unk_1C005B1F0;
    v5 = (const char *)&unk_1C005B1F0;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[70];
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[71];
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x36u,
      (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
      a1,
      (char)v1,
      v4,
      v5);
  }
  *(_DWORD *)(a1 + 212) = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    AMLIResumeInterpreter();
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}

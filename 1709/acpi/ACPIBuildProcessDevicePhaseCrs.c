/*
 * XREFs of ACPIBuildProcessDevicePhaseCrs @ 0x1C001F1C0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C00058A0 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0028040 (PnpBiosSetFlagsForNotableInterrupts.c)
 *     ACPIMatchKernelPorts @ 0x1C002B88C (ACPIMatchKernelPorts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCrs(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v4; // rcx
  const char *v5; // rax
  const char *v6; // rdx
  signed __int32 v7; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  if ( AMLIIsNamedChildPresent(*(__int64 **)(v1 + 712), 1397903455) )
    *(_DWORD *)(a1 + 32) = 28;
  else
    *(_DWORD *)(a1 + 32) = 16;
  if ( *(_QWORD *)(a1 + 56) && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(v2 + 2) == 3 )
    {
      if ( (*(_DWORD *)(v1 + 8) & 0x4000000) != 0 )
        ACPIMatchKernelPorts(v1, v2);
      PnpBiosSetFlagsForNotableInterrupts(v1, *(_QWORD *)(v2 + 32), *(unsigned int *)(v2 + 24));
    }
    dword_1C00797B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v2, 1u);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = (const char *)&unk_1C0067B08;
  v6 = (const char *)&unk_1C0067B08;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x23u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    0,
    v1,
    v5,
    v6);
  v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v7);
  return 0LL;
}

/*
 * XREFs of ACPIBuildProcessDevicePhaseCrs @ 0x1C000CF60
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C0009C00 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIMatchKernelPorts @ 0x1C002DE30 (ACPIMatchKernelPorts.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0038484 (PnpBiosSetFlagsForNotableInterrupts.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCrs(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rcx
  void *v5; // rax
  void *v6; // rdx
  signed __int32 v7; // edx
  __int64 v9; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 712), 1397903455LL) != 0 ? 28 : 16;
  if ( *(_QWORD *)(a1 + 56) && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(v2 + 2) == 3 )
    {
      if ( (*(_DWORD *)(v1 + 8) & 0x4000000) != 0 )
        ACPIMatchKernelPorts(v1, v2);
      PnpBiosSetFlagsForNotableInterrupts(v1, *(_QWORD *)(v2 + 32), *(unsigned int *)(v2 + 24));
    }
    dword_1C00677B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v2, 1u);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = &unk_1C005B1F0;
  v6 = &unk_1C005B1F0;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(void **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(void **)(v1 + 568);
  }
  v9 = (__int64)v6;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v6,
    6,
    35,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    0,
    v1,
    (__int64)v5,
    v9);
  v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v7);
  return 0LL;
}

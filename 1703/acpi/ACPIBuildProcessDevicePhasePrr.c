/*
 * XREFs of ACPIBuildProcessDevicePhasePrr @ 0x1C000E7E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0042FFC (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D1FC (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // rsi
  unsigned int v3; // ebp
  ULONG_PTR v4; // rdx
  const char *v5; // rcx
  __int64 v6; // rax
  const char *v7; // r8
  unsigned int v9; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( *(_QWORD *)(v1 + 400) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_3;
    dword_1C00776F8 = 0;
    pszDest = 0;
LABEL_12:
    FreeDataBuffs(v2, 1LL);
    goto LABEL_3;
  }
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_3;
    }
    v9 = ACPIBuildDeviceResetPowerNode(v1, v4);
    dword_1C00776F8 = 0;
    v3 = v9;
    pszDest = 0;
    goto LABEL_12;
  }
LABEL_3:
  *(_QWORD *)(v1 + 448) = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1414746719);
  v5 = (const char *)&unk_1C0066CD0;
  v6 = *(_QWORD *)(v1 + 8);
  v7 = (const char *)&unk_1C0066CD0;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v1 + 560);
    if ( (v6 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x2Fu,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    v3,
    v1,
    v5,
    v7);
  ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}

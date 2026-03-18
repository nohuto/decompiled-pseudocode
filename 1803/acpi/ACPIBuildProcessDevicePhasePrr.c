/*
 * XREFs of ACPIBuildProcessDevicePhasePrr @ 0x1C000DA30
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C000AB04 (ACPIBuildDeviceResetPowerNode.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWriteEventLogEntry @ 0x1C0023138 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rsi
  ULONG_PTR v3; // rdx
  unsigned int v4; // ebp
  unsigned int v6; // eax
  void *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  void *v10; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( *(_QWORD *)(v1 + 400) )
  {
    if ( v3 )
    {
      dword_1C00677B8 = 0;
      pszDest = 0;
LABEL_8:
      FreeDataBuffs(v2, 1u);
    }
  }
  else if ( v3 )
  {
    if ( *(_WORD *)(a1 + 82) == 4 )
    {
      v6 = ACPIBuildDeviceResetPowerNode(v1, v3, a1 + 80);
      dword_1C00677B8 = 0;
      v4 = v6;
      pszDest = 0;
      goto LABEL_8;
    }
    ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
  }
  *(_QWORD *)(v1 + 448) = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1414746719);
  v7 = &unk_1C005B1F0;
  v8 = *(_QWORD *)(v1 + 8);
  v9 = 0;
  v10 = &unk_1C005B1F0;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v7 = *(void **)(v1 + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v10 = *(void **)(v1 + 568);
  }
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    6,
    47,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v4,
    v1,
    (__int64)v7,
    (__int64)v10);
  ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}

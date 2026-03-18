/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C000F260
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     IsPciBusAsync @ 0x1C00313DC (IsPciBusAsync.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckBridge(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ecx
  unsigned int v4; // edi
  unsigned int v5; // eax
  __int64 v6; // rdx
  void *v7; // rax
  void *v8; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 84);
  v4 = 0;
  if ( (v3 & 1) != 0 && (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
LABEL_9:
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
    return v4;
  }
  *(_DWORD *)(a1 + 32) = 7;
  if ( (v3 & 0x40) == 0 )
    goto LABEL_9;
  *(_DWORD *)(a1 + 128) = 0;
  v5 = IsPciBusAsync(*(_QWORD *)(v1 + 712), ACPIBuildCompleteMustSucceed, a1);
  v6 = *(_QWORD *)(v1 + 8);
  v4 = v5;
  v7 = &unk_1C005B1F0;
  v8 = &unk_1C005B1F0;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v7 = *(void **)(v1 + 560);
    if ( (v6 & 0x400000000000LL) != 0 )
      v8 = *(void **)(v1 + 568);
  }
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v6,
    6,
    58,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v4,
    v1,
    (__int64)v7,
    (__int64)v8);
  result = 259LL;
  if ( v4 != 259 )
    goto LABEL_9;
  return result;
}

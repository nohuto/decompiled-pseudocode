/*
 * XREFs of Interrupter_DetermineSecondaryInterrupterCount @ 0x1C0058F68
 * Callers:
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C00594B0 (Interrupter_FilterRemoveResourceRequirements.c)
 * Callees:
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C0017C48 (Interrupter_SetSecondaryInterrupterCount.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 */

void __fastcall Interrupter_DetermineSecondaryInterrupterCount(__int64 a1, int a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // r10
  unsigned int v6; // ebx
  unsigned int v7; // edx
  ULONG v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  unsigned int v10; // [rsp+38h] [rbp-10h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  v5 = *(_QWORD *)(a1 + 8);
  if ( (*(_QWORD *)(v5 + 272) & 0x1000LL) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v7 = a2 - 2;
    if ( *(_DWORD *)(v5 + 532) != 1 )
      v7 = a2 - 1;
    v6 = 0;
    if ( v7 )
    {
      v6 = v7;
      if ( v7 > 0x10 )
        v6 = 16;
      if ( ActiveProcessorCount <= v6 )
        v6 = ActiveProcessorCount;
    }
  }
  v10 = v6;
  v9 = a2;
  v8 = ActiveProcessorCount;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v5 + 72),
    4u,
    9u,
    0x35u,
    (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
    v8,
    v9,
    v10);
  Interrupter_SetSecondaryInterrupterCount(a1, v6);
}

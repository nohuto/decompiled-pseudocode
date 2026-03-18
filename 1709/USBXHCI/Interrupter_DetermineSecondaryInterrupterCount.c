/*
 * XREFs of Interrupter_DetermineSecondaryInterrupterCount @ 0x1C005BE40
 * Callers:
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C005C3BC (Interrupter_FilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C001EB08 (Interrupter_SetSecondaryInterrupterCount.c)
 */

__int64 __fastcall Interrupter_DetermineSecondaryInterrupterCount(__int64 a1, int a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  ULONG v7; // ebp
  __int64 v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]
  unsigned int v12; // [rsp+38h] [rbp-10h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v7 = ActiveProcessorCount;
  if ( (*(_QWORD *)(v5 + 272) & 0x1000LL) == 0 && a2 != 1 )
  {
    v6 = a2 - 1;
    if ( (unsigned int)(a2 - 1) > 0x10 )
      v6 = 16;
    if ( ActiveProcessorCount <= v6 )
      v6 = ActiveProcessorCount;
    if ( *(_DWORD *)(v5 + 524) == 1 )
    {
      v10 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 72),
        4u,
        9u,
        0x2Eu,
        (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
        v10);
      *(_DWORD *)(a1 + 64) = v6;
    }
  }
  v12 = v6;
  v11 = a2;
  LODWORD(v9) = v7;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    9u,
    0x2Fu,
    (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
    v9,
    v11,
    v12);
  return Interrupter_SetSecondaryInterrupterCount(a1, v6);
}

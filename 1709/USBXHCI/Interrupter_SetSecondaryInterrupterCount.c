/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x1C001EB08
 * Callers:
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C005BE40 (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C005C3BC (Interrupter_FilterRemoveResourceRequirements.c)
 *     Interrupter_PrepareHardware @ 0x1C005C6A0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 20) = a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v3 + 524) == 1 && *(_DWORD *)(a1 + 64) == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 2u, 9u, 0x30u, (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
    result = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(result + 524) = 0;
  }
  return result;
}

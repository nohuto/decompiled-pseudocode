/*
 * XREFs of HvpReleaseCellFlat @ 0x1404768F0
 * Callers:
 *     <none>
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall HvpReleaseCellFlat(__int64 a1, __int64 a2)
{
  return HvpGetCellContextReinitialize(a2);
}

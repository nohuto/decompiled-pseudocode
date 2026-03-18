/*
 * XREFs of ?MarkInvalid@CSynchronizationInfo@DirectComposition@@MEAAXXZ @ 0x1C0095610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSynchronizationInfo::MarkInvalid(DirectComposition::CSynchronizationInfo *this)
{
  *((_BYTE *)this + 8) = 0;
}

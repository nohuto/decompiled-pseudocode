/*
 * XREFs of ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C01A0B18
 * Callers:
 *     GreCreateHalftonePalette @ 0x1C0292144 (GreCreateHalftonePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall NEEDGRELOCK::~NEEDGRELOCK(NEEDGRELOCK *this)
{
  NEEDGRELOCK::vUnlock(this);
}

/*
 * XREFs of ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C019591C
 * Callers:
 *     GreCreateHalftonePalette @ 0x1C0295A94 (GreCreateHalftonePalette.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall NEEDGRELOCK::~NEEDGRELOCK(NEEDGRELOCK *this)
{
  NEEDGRELOCK::vUnlock(this);
}

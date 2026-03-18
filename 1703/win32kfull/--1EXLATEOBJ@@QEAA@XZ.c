/*
 * XREFs of ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01958D4
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0045988 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall EXLATEOBJ::~EXLATEOBJ(EXLATEOBJ *this)
{
  EXLATEOBJ::vAltUnlock(this);
}

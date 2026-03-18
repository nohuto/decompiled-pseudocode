/*
 * XREFs of ??1BLTENTRY@@QEAA@XZ @ 0x1C002B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

void __fastcall BLTENTRY::~BLTENTRY(void **this)
{
  operator delete(this[63]);
  operator delete(this[29]);
}

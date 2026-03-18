/*
 * XREFs of ?CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C010ACE0
 * Callers:
 *     NextTopWindow @ 0x1C005F5C0 (NextTopWindow.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CheckTopLevelOnly(struct tagWND *a1)
{
  while ( a1 && (*((_WORD *)a1 + 41) & 0x3FFF) == 0x29D )
    a1 = (struct tagWND *)*((_QWORD *)a1 + 14);
  return a1;
}

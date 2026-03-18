/*
 * XREFs of ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C005E378
 * Callers:
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002B2E0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 * Callees:
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00C2A64 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall RECHMGRCREATE(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( gbGdiHmgrStacks )
  {
    if ( gpentHmgrStacks )
      RECSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000);
  }
}

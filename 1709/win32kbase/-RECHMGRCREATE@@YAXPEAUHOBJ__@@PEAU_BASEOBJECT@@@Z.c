/*
 * XREFs of ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0053FCC
 * Callers:
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C004DCF0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgAlloc @ 0x1C0054040 (HmgAlloc.c)
 * Callees:
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFC28 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall RECHMGRCREATE(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( gbGdiHmgrStacks )
  {
    if ( gpentHmgrStacks )
      RECSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000);
  }
}

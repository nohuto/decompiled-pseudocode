/*
 * XREFs of ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0078568
 * Callers:
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00311DC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003F540 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0095E80 (HmgAlloc.c)
 * Callees:
 *     <none>
 */

void __fastcall RECHMGRCREATE(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( gbGdiHmgrStacks )
  {
    if ( gpentHmgrStacks )
      RECSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000);
  }
}

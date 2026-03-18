/*
 * XREFs of ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C00495E4
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C004CDC0 (INC_SHARE_REF_CNT.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00EFAD0 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall RECALTLOCK(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( gbGdiHmgrAltStacks )
  {
    if ( gpentHmgrAltStacks )
      RECALTLOCKSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000, a2);
  }
}

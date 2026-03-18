/*
 * XREFs of ?RECALTUNLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C002F370
 * Callers:
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RECALTUNLOCK(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( gbGdiHmgrAltStacks )
  {
    if ( gpentHmgrAltStacks )
      RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000);
  }
}

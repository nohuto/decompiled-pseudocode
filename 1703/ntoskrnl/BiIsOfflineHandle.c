/*
 * XREFs of BiIsOfflineHandle @ 0x14014CF2C
 * Callers:
 *     BcdFlushStore @ 0x140578E8C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x14057B770 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14058A484 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1407348DC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140734974 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1407349D0 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}

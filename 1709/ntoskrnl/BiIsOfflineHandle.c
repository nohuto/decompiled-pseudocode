/*
 * XREFs of BiIsOfflineHandle @ 0x140134AD0
 * Callers:
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x1405AE6E4 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x1405AE960 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 *     BcdFlushStore @ 0x140778A44 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140778AAC (BcdForciblyUnloadStore.c)
 *     BcdCreateObject @ 0x140778B64 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140778BFC (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x140778C58 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}

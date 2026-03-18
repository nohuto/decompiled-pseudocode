/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x1405B025C
 * Callers:
 *     BiDeleteElement @ 0x1405AE6E4 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x140778B64 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140778BFC (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1405B0290 (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x14077C73C (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}

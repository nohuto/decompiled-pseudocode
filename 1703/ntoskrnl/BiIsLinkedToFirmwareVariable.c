/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x14058BE10
 * Callers:
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1407348DC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140734974 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14058BE44 (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x1407380CC (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}

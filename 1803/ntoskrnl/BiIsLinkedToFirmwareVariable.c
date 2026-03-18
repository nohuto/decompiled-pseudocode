/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140609238
 * Callers:
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1407E17D0 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1407E1868 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14060926C (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x1407E518C (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}

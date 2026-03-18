/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x1405D64B8
 * Callers:
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 */

void EtwpInitializeStackLookasideList()
{
  InitializeSListHead(&EtwpStackLookAsideList);
  dword_14036EA60 = 0;
  dword_14036EA64 = 0;
}

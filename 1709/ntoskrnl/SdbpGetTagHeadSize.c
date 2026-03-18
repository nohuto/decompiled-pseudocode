/*
 * XREFs of SdbpGetTagHeadSize @ 0x1405252D8
 * Callers:
 *     SdbpReadTagData @ 0x1404F5D38 (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x140524BBC (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x14054A818 (SdbpGetMappedTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140524D2C (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, unsigned int a2)
{
  __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2u) )
    return (v3 & 0xF000u) < 0x7000 ? 2 : 6;
  AslLogCallPrintf(1, (unsigned int)"SdbpGetTagHeadSize", 94, (unsigned int)"Error reading tag");
  return 0LL;
}

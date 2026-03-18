/*
 * XREFs of SdbpGetTagHeadSize @ 0x140487D88
 * Callers:
 *     SdbpGetNextTagId @ 0x1404870EC (SdbpGetNextTagId.c)
 *     SdbpReadTagData @ 0x1404B0084 (SdbpReadTagData.c)
 *     SdbpGetMappedTagData @ 0x1404B5810 (SdbpGetMappedTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140487024 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, unsigned int a2)
{
  __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2u) )
    return (v3 & 0xF000u) < 0x7000 ? 2 : 6;
  AslLogCallPrintf(1, (unsigned int)"SdbpGetTagHeadSize", 93, (unsigned int)"Error reading tag");
  return 0LL;
}

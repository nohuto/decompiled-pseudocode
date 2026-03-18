/*
 * XREFs of SdbGetTagDataSize @ 0x1405FD4C0
 * Callers:
 *     SdbpGetIndex @ 0x1405FCD40 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1405FCE50 (SdbpGetFirstIndexedRecord.c)
 *     SdbpReadTagData @ 0x1405FD0CC (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x1405FD438 (SdbpGetNextTagId.c)
 *     SdbpGetNextIndexedRecord @ 0x14061F60C (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x1407451E8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407D6AB4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407D6CDC (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x1405FD5A8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v4 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  switch ( v4 )
  {
    case 12288:
      result = 2LL;
      break;
    case 16384:
    case 24576:
      result = 4LL;
      break;
    case 20480:
      result = 8LL;
      break;
    case 4096:
      result = 0LL;
      break;
    case 8192:
      result = 1LL;
      break;
    default:
      v6 = 0;
      if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)(v2 + 2), &v6, 4LL) )
        AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 278, (unsigned int)"Error reading size data");
      result = v6;
      break;
  }
  if ( (int)result + v2 < (unsigned int)result || (unsigned int)(result + v2) > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 289, (unsigned int)"Error reading size data");
    return 0xFFFFFFFFLL;
  }
  return result;
}

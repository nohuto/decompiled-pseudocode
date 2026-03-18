/*
 * XREFs of SdbGetTagDataSize @ 0x140486F3C
 * Callers:
 *     SdbpGetNextTagId @ 0x1404870EC (SdbpGetNextTagId.c)
 *     SdbpReadTagData @ 0x1404B0084 (SdbpReadTagData.c)
 *     SdbpGetIndex @ 0x1404B5630 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1404B5740 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x1405BC47C (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x1406AFA30 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x14072C684 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14072C8AC (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x140487024 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = SdbGetTagFromTagID() & 0xF000;
  switch ( (_DWORD)v4 )
  {
    case 0x3000:
      result = 2LL;
      break;
    case 0x4000:
    case 0x6000:
      result = 4LL;
      break;
    case 0x5000:
      result = 8LL;
      break;
    case 0x1000:
      result = 0LL;
      break;
    case 0x2000:
      result = 1LL;
      break;
    default:
      v6 = 0;
      if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)(a2 + 2), &v6, 4LL) )
        AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 277, (unsigned int)"Error reading size data");
      result = v6;
      break;
  }
  if ( (int)result + a2 < (unsigned int)result || (unsigned int)(result + a2) > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 288, (unsigned int)"Error reading size data");
    return 0xFFFFFFFFLL;
  }
  return result;
}

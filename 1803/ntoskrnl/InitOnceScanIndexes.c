/*
 * XREFs of InitOnceScanIndexes @ 0x1405FD150
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     SdbReadDWORDTag @ 0x1405FCF24 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x1405FCFD8 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x1405FD058 (SdbReadWORDTag.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x1405FD5F4 (SdbGetFirstChild.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceScanIndexes(PRTL_RUN_ONCE a1, _DWORD *a2, PVOID *a3)
{
  unsigned int v3; // esi
  char *v6; // r12
  unsigned int FirstChild; // eax
  unsigned int v8; // r14d
  unsigned int i; // eax
  unsigned int v10; // ebp
  unsigned int FirstTag; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  __int64 v15; // rax

  v3 = 0;
  if ( !a2 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceScanIndexes",
      940,
      (unsigned int)"PDB was not supplied for InitOnceScanIndexes");
    return 0LL;
  }
  if ( !a3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceScanIndexes",
      946,
      (unsigned int)"No return context was supplied for InitOnceScanIndexes");
    return 0LL;
  }
  v6 = (char *)(a2 + 12);
  memset(a2 + 12, 0, 0x500uLL);
  FirstChild = SdbGetFirstChild(a2, 0LL);
  v8 = FirstChild;
  if ( FirstChild )
  {
    if ( (unsigned __int16)SdbGetTagFromTagID(a2, FirstChild) == 30722 )
    {
      a2[339] = 0;
      for ( i = SdbFindFirstTag(a2, v8, 30723LL); ; i = SdbFindNextTag((__int64)a2, v8, v10) )
      {
        v10 = i;
        if ( !i )
        {
          *a3 = v6;
          return 1;
        }
        if ( a2[339] == 32 )
          break;
        FirstTag = SdbFindFirstTag(a2, i, 14338LL);
        if ( !FirstTag )
        {
          AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", 988, (unsigned int)"Index missing TAG_INDEX_TAG");
          return v3;
        }
        LOWORD(a2[10 * a2[339] + 13]) = SdbReadWORDTag((__int64)a2, FirstTag, 0);
        v12 = SdbFindFirstTag(a2, v10, 14339LL);
        if ( !v12 )
        {
          AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", 997, (unsigned int)"Index missing TAG_INDEX_KEY");
          return v3;
        }
        HIWORD(a2[10 * a2[339] + 13]) = SdbReadWORDTag((__int64)a2, v12, 0);
        v13 = SdbFindFirstTag(a2, v10, 16406LL);
        if ( v13 )
          a2[10 * a2[339] + 20] = SdbReadDWORDTag((__int64)a2, v13, 0);
        else
          a2[10 * a2[339] + 20] = 0;
        v14 = SdbFindFirstTag(a2, v10, 38913LL);
        v15 = (unsigned int)a2[339];
        if ( !v14 )
        {
          LOWORD(a2[10 * v15 + 13]) = 0;
          AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", 1014, (unsigned int)"Index missing TAG_INDEX_BITS");
          return v3;
        }
        a2[10 * v15 + 12] = v14;
        ++a2[339];
      }
      AslLogCallPrintf(
        1,
        (unsigned int)"InitOnceScanIndexes",
        981,
        (unsigned int)"Too many indexes in file: recompile and increase SDB_MAX_INDEXES");
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"InitOnceScanIndexes",
        966,
        (unsigned int)"Root child tag is not index tagid 0x%lx",
        v8);
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceScanIndexes",
      961,
      (unsigned int)"Failed to get the child index from root");
  }
  return v3;
}

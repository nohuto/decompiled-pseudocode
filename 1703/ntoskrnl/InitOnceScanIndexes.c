/*
 * XREFs of InitOnceScanIndexes @ 0x1404AFD80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x1404AFFB4 (SdbGetFirstChild.c)
 *     SdbReadWORDTag @ 0x1404B0010 (SdbReadWORDTag.c)
 *     SdbFindNextTag @ 0x1404B0100 (SdbFindNextTag.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
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
  const char *v17; // r9
  int v18; // r8d
  const char *v19; // r9
  int v20; // r8d

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v6 = (char *)(a2 + 12);
      memset(a2 + 12, 0, 0x500uLL);
      FirstChild = SdbGetFirstChild(a2, 0LL);
      v8 = FirstChild;
      if ( FirstChild )
      {
        if ( (unsigned __int16)SdbGetTagFromTagID((__int64)a2, FirstChild) != 30722 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"InitOnceScanIndexes",
            966,
            (unsigned int)"Root child tag is not index tagid 0x%lx");
          return v3;
        }
        a2[339] = 0;
        for ( i = SdbFindFirstTag(a2, v8, 30723LL); ; i = SdbFindNextTag(a2, v8, v10) )
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
            v19 = "Index missing TAG_INDEX_TAG";
            v20 = 988;
            goto LABEL_22;
          }
          LOWORD(a2[10 * a2[339] + 13]) = SdbReadWORDTag(a2, FirstTag, 0LL);
          v12 = SdbFindFirstTag(a2, v10, 14339LL);
          if ( !v12 )
          {
            v19 = "Index missing TAG_INDEX_KEY";
            v20 = 997;
            goto LABEL_22;
          }
          HIWORD(a2[10 * a2[339] + 13]) = SdbReadWORDTag(a2, v12, 0LL);
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
            v19 = "Index missing TAG_INDEX_BITS";
            v20 = 1014;
            goto LABEL_22;
          }
          a2[10 * v15 + 12] = v14;
          ++a2[339];
        }
        v19 = "Too many indexes in file: recompile and increase SDB_MAX_INDEXES";
        v20 = 981;
      }
      else
      {
        v19 = "Failed to get the child index from root";
        v20 = 961;
      }
LABEL_22:
      AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", v20, (_DWORD)v19);
      return v3;
    }
    v17 = "No return context was supplied for InitOnceScanIndexes";
    v18 = 946;
  }
  else
  {
    v17 = "PDB was not supplied for InitOnceScanIndexes";
    v18 = 940;
  }
  AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", v18, (_DWORD)v17);
  return 0LL;
}

/*
 * XREFs of SepSddlGetSidForString @ 0x1C00DB2D0
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00DAF70 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlGetSidForString(wchar_t *String, void **SID, wchar_t **End)
{
  unsigned int *p_KeyLen; // rsi
  __int64 v7; // rdi
  __int64 v9; // rdi
  bool v10; // zf

  p_KeyLen = &SidLookup[0].KeyLen;
  v7 = 0LL;
  while ( _wcsnicmp(String, SidLookup[v7].Key, *p_KeyLen) )
  {
    v7 = (unsigned int)(v7 + 1);
    p_KeyLen += 6;
    if ( (unsigned int)v7 >= 0xE )
    {
      *SID = 0LL;
      return 3221225587LL;
    }
  }
  v9 = v7;
  v10 = SidLookup[v9].OsVer == WINXP_OR_LATER;
  *End = &String[SidLookup[v9].KeyLen];
  if ( !v10 || IoIsWdmVersionAvailable(1u, 0x20u) )
    *SID = *(void **)((char *)&SeExports->SeCreateTokenPrivilege + SidLookup[v9].ExportSidFieldOffset);
  else
    *SID = 0LL;
  return 0LL;
}

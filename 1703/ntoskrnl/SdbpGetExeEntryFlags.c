/*
 * XREFs of SdbpGetExeEntryFlags @ 0x1405D72A4
 * Callers:
 *     SdbpCheckForMatch @ 0x1405BB258 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SdbReadBinaryTag @ 0x1404AFBE4 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     SdbGetEntryFlags @ 0x1405D6FF8 (SdbGetEntryFlags.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetExeEntryFlags(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int FirstTag; // eax
  int EntryFlags; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  const char *v13; // r9
  int v14; // r8d
  unsigned int v15; // eax
  int v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v17[0] = 0LL;
  v17[1] = 0LL;
  v16 = 0;
  v5 = a2;
  FirstTag = SdbFindFirstTag(a1, a2, 36868);
  if ( !FirstTag )
  {
    v13 = "Failed to read TAG_EXE_ID for tiExe 0x%x";
    v14 = 463;
LABEL_10:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetExeEntryFlags", v14, (_DWORD)v13);
    return v4;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, FirstTag, (__int64)v17, 0x10u) )
  {
    v13 = "Failed to read the GUID for tiExe 0x%x";
    v14 = 468;
    goto LABEL_10;
  }
  EntryFlags = SdbGetEntryFlags((__int64)v17, &v16);
  v9 = EntryFlags != 0 ? v16 : 0;
  v10 = SdbFindFirstTag(a1, v5, 28685);
  if ( v10 )
  {
    v9 |= 0x1000u;
    v15 = SdbFindFirstTag(a1, v10, 16400);
    if ( v15 )
    {
      if ( (unsigned int)SdbReadDWORDTag(a1, v15, 0) == 2 )
        v9 |= 0x2000u;
    }
  }
  v11 = SdbFindFirstTag(a1, v5, 16434);
  if ( v11 )
    v9 |= (unsigned int)SdbReadDWORDTag(a1, v11, 0) << 16;
  *a3 = v9;
  return 1;
}

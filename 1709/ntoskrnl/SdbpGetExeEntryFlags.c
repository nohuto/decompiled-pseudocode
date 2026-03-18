/*
 * XREFs of SdbpGetExeEntryFlags @ 0x14076F398
 * Callers:
 *     SdbpCheckForMatch @ 0x140541C48 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SdbReadBinaryTag @ 0x1404F5BE0 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404F5C54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     SdbGetEntryFlags @ 0x140771598 (SdbGetEntryFlags.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetExeEntryFlags(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v4; // edi
  unsigned int FirstTag; // eax
  const char *v8; // r9
  int v9; // r8d
  int EntryFlags; // eax
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v17[0] = 0LL;
  v17[1] = 0LL;
  v16 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 36868);
  if ( !FirstTag )
  {
    v8 = "Failed to read TAG_EXE_ID for tiExe 0x%x";
    v9 = 462;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetExeEntryFlags", v9, (_DWORD)v8);
    return v4;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, FirstTag, (__int64)v17, 0x10u) )
  {
    v8 = "Failed to read the GUID for tiExe 0x%x";
    v9 = 467;
    goto LABEL_3;
  }
  EntryFlags = SdbGetEntryFlags(v17, &v16);
  v11 = EntryFlags != 0 ? v16 : 0;
  v12 = SdbFindFirstTag(a1, a2, 28685);
  if ( v12 )
  {
    v11 |= 0x1000u;
    v13 = SdbFindFirstTag(a1, v12, 16400);
    if ( v13 )
    {
      if ( (unsigned int)SdbReadDWORDTag(a1, v13, 0) == 2 )
        v11 |= 0x2000u;
    }
  }
  v14 = SdbFindFirstTag(a1, a2, 16434);
  if ( v14 )
    v11 |= (unsigned int)SdbReadDWORDTag(a1, v14, 0) << 16;
  *a3 = v11;
  return 1;
}

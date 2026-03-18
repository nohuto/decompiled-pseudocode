/*
 * XREFs of SdbReadEntryInformation @ 0x14072B390
 * Callers:
 *     PiIsDriverBlocked @ 0x1404B6244 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SdbReadBinaryTag @ 0x1404AFBE4 (SdbReadBinaryTag.c)
 *     SdbGetDatabaseID @ 0x1404AFC58 (SdbGetDatabaseID.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     SdbTagRefToTagID @ 0x1405D4EB4 (SdbTagRefToTagID.c)
 *     SdbGetEntryFlags @ 0x1405D6FF8 (SdbGetEntryFlags.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadEntryInformation(__int64 a1, unsigned int a2, void *a3)
{
  unsigned int BinaryTag; // ebx
  const char *v7; // r9
  int v8; // r8d
  __int64 v9; // rdi
  unsigned int v10; // r14d
  unsigned int FirstTag; // eax
  int EntryFlags; // eax
  unsigned int v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  _DWORD Src[10]; // [rsp+40h] [rbp-30h] BYREF

  memset(Src, 0, sizeof(Src));
  BinaryTag = SdbTagRefToTagID(a1, a2, &v15, &v14);
  if ( !BinaryTag )
  {
    v7 = "Failed to convert tagref 0x%x to tagid";
    v8 = 5113;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbReadEntryInformation", v8, (_DWORD)v7);
    return BinaryTag;
  }
  v9 = v15;
  v10 = v14;
  FirstTag = SdbFindFirstTag(v15, v14, 36868);
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadEntryInformation",
      5123,
      (unsigned int)"Failed to read TAG_EXE_ID for tiExe 0x%x");
    return 0;
  }
  BinaryTag = SdbReadBinaryTag(v9, FirstTag, (__int64)Src, 0x10u);
  if ( !BinaryTag )
  {
    v7 = "Failed to read GUID referenced by 0x%x";
    v8 = 5133;
    goto LABEL_3;
  }
  if ( !(unsigned int)SdbGetDatabaseID(v9, &Src[6]) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadEntryInformation",
      5141,
      (unsigned int)"Failed to read GUID of the database");
    return 0;
  }
  EntryFlags = SdbGetEntryFlags((__int64)Src, &Src[4]);
  Src[4] &= -(EntryFlags != 0);
  Src[5] = SdbFindFirstTag(v9, v10, 28687);
  if ( a3 )
    memmove(a3, Src, 0x28uLL);
  return 1;
}

/*
 * XREFs of SdbGetDatabaseID @ 0x1404AFC58
 * Callers:
 *     SdbpValidateAndApplyCompatFlags @ 0x1404AFB78 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbReadEntryInformation @ 0x14072B390 (SdbReadEntryInformation.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     SdbReadBinaryTag @ 0x1404AFBE4 (SdbReadBinaryTag.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseID(__int64 a1, void *a2)
{
  unsigned int v2; // edi
  unsigned int FirstTag; // eax
  unsigned int v6; // eax
  const char *v8; // r9
  int v9; // r8d

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
  {
    FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
    if ( FirstTag )
    {
      v6 = SdbFindFirstTag(a1, FirstTag, 36871LL);
      if ( v6 )
      {
        if ( !(unsigned int)SdbReadBinaryTag(a1, v6, a1 + 28, 0x10u) )
        {
          AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", 442, (unsigned int)"Failed to read database id 0x%lx");
          return v2;
        }
        *(_DWORD *)(a1 + 24) |= 2u;
        goto LABEL_6;
      }
      v8 = "Failed to get the database id";
      v9 = 437;
    }
    else
    {
      v8 = "Failed to get root tag";
      v9 = 431;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", v9, (_DWORD)v8);
    return v2;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    memmove(a2, (const void *)(a1 + 28), 0x10uLL);
    return 1;
  }
  return v2;
}

/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x1405FFAF0
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405FFBD0 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenCompressedDatabase @ 0x1407D8690 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SdbpReadMappedData @ 0x1405FD5A8 (SdbpReadMappedData.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1405FFA84 (SdbpValidateAndApplyCompatFlags.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, char a3)
{
  _QWORD *v6; // rax
  void *v7; // rbx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v6 = AslAlloc(a1, 0x580uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 6) |= 1u;
    *v6 = 0LL;
    v6[1] = a1;
    *((_DWORD *)v6 + 5) = a2;
    if ( (unsigned int)SdbpReadMappedData((__int64)v6, 0, v9, 0xCu) )
    {
      if ( (unsigned int)SdbpValidateAndApplyCompatFlags((__int64)v7, v9, a3) )
        return v7;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1079, (unsigned int)"Can't read database header");
    }
    ExFreePoolWithTag(v7, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1068, (unsigned int)"Failed to allocate DB structure");
  }
  return 0LL;
}

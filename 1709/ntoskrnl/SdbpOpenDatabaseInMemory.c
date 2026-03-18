/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x1404F5A30
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1404F5948 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenCompressedDatabase @ 0x1407713B0 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1404F5AC8 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpReadMappedData @ 0x140524D2C (SdbpReadMappedData.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // rax
  void *v7; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = AslAlloc(a1, 1408LL);
  v7 = (void *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 24) |= 1u;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = a1;
    *(_DWORD *)(v6 + 20) = a2;
    if ( (unsigned int)SdbpReadMappedData(v6, 0LL, v9, 12LL) )
    {
      if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v7, v9, a3) )
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

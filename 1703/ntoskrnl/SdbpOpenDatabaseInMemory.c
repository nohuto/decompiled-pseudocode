/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x1404AFAE0
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1404AF9F8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenCompressedDatabase @ 0x14072DB9C (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SdbpReadMappedData @ 0x140487024 (SdbpReadMappedData.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1404AFB78 (SdbpValidateAndApplyCompatFlags.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
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
    if ( (unsigned int)SdbpReadMappedData(v6, 0, v9, 0xCu) )
    {
      if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v7, v9, a3) )
        return v7;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1031, (unsigned int)"Can't read database header");
    }
    ExFreePoolWithTag(v7, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1020, (unsigned int)"Failed to allocate DB structure");
  }
  return 0LL;
}

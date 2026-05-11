/*
 * XREFs of USBParseMIDIElement @ 0x1C001E8E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001A670 @ 0x1C001A670 (sub_1C001A670.c)
 *     USBParseGetUnitString @ 0x1C001D8FC (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIElement(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  int v3; // ebp
  unsigned __int8 *v7; // r9
  int v8; // r8d
  int UnitString; // edi
  int v10; // r14d
  int *PoolWithTag; // rsi
  __int64 i; // r8
  PCWSTR SourceString; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v7 = &a3[2 * a3[4]];
  v8 = v7[8];
  if ( v7[8] )
  {
    do
    {
      v3 = v7[v8 * v7[8] + 8] | (v3 << 8);
      --v8;
    }
    while ( v8 );
  }
  UnitString = USBParseGetUnitString(a1, a3, &SourceString);
  if ( UnitString >= 0 )
  {
    UnitString = -1073741670;
    v10 = *(unsigned __int8 *)(a2 + 2) << 8;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * a3[4], 0x41627845u);
    if ( PoolWithTag )
    {
      for ( i = 0LL; (unsigned int)i < a3[4]; i = (unsigned int)(i + 1) )
        PoolWithTag[i] = v10 | a3[2 * i + 5];
      UnitString = sub_1C001A670(a1, v10 | (unsigned int)a3[3], 8, 0, 0, a3[4], PoolWithTag, SourceString, 0, &v15);
      if ( UnitString >= 0 && v15 )
        *(_DWORD *)(v15 + 64) = v3;
      ExFreePool(PoolWithTag);
    }
  }
  return (unsigned int)UnitString;
}

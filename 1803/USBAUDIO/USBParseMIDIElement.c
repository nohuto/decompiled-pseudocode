/*
 * XREFs of USBParseMIDIElement @ 0x1C0023400
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C001EA24 (BusApiBuildFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1C0022420 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIElement(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  int v3; // ebp
  unsigned __int8 *v7; // r9
  int v8; // r8d
  int UnitString; // edi
  int v10; // r14d
  int *PoolWithTag; // rax
  int *v12; // rsi
  unsigned int v13; // ecx
  __int64 v14; // r8
  PCWSTR SourceString; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

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
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      LOBYTE(v13) = a3[4];
      v14 = 0LL;
      if ( (_BYTE)v13 )
      {
        do
        {
          PoolWithTag[v14] = v10 | a3[2 * v14 + 5];
          v14 = (unsigned int)(v14 + 1);
          v13 = a3[4];
        }
        while ( (unsigned int)v14 < v13 );
      }
      UnitString = BusApiBuildFunctionUnit(
                     a1,
                     v10 | (unsigned int)a3[3],
                     8,
                     0,
                     0,
                     (unsigned __int8)v13,
                     PoolWithTag,
                     SourceString,
                     0,
                     &v17);
      if ( UnitString >= 0 && v17 )
        *(_DWORD *)(v17 + 64) = v3;
      ExFreePool(v12);
    }
  }
  return (unsigned int)UnitString;
}

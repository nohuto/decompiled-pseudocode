/*
 * XREFs of BmlCompareWireFormat @ 0x1C01DF134
 * Callers:
 *     BmlCompareTargetModes @ 0x1C00F406C (BmlCompareTargetModes.c)
 * Callees:
 *     BmlCompareSingleWireFormatType @ 0x1C01DF044 (BmlCompareSingleWireFormatType.c)
 */

__int64 __fastcall BmlCompareWireFormat(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  char v8; // r10^1
  char v9; // r11^1
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  unsigned int v13; // r11d

  if ( a1 == a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  result = BmlCompareSingleWireFormatType(
             (*(_DWORD *)(a1 + 128) >> 2) & 0x3F,
             (unsigned __int8)*(_DWORD *)(a2 + 128) >> 2);
  if ( !(_DWORD)result )
  {
    result = BmlCompareSingleWireFormatType(v8 & 0x3F, v9 & 0x3F);
    if ( !(_DWORD)result )
    {
      result = BmlCompareSingleWireFormatType((v10 >> 14) & 0x3F, (v11 >> 14) & 0x3F);
      if ( !(_DWORD)result )
        return BmlCompareSingleWireFormatType((v12 >> 20) & 0x3F, (v13 >> 20) & 0x3F);
    }
  }
  return result;
}

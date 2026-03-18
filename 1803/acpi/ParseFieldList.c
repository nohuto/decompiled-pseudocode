/*
 * XREFs of ParseFieldList @ 0x1C0055330
 * Callers:
 *     BankField @ 0x1C004A930 (BankField.c)
 *     Field @ 0x1C004AFF0 (Field.c)
 *     IndexField @ 0x1C004B180 (IndexField.c)
 * Callees:
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintIndent @ 0x1C004917C (PrintIndent.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ParseField @ 0x1C0054C68 (ParseField.c)
 */

__int64 __fastcall ParseFieldList(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned int v5; // edi
  __int64 v9; // r15
  int v10; // ebp
  unsigned __int8 v12[4]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+34h] [rbp-24h] BYREF
  _DWORD *v14; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = a4;
  v5 = 0;
  v13 = 0;
  v12[0] = 0;
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    ConPrintf("{");
    ++dword_1C00676B4;
  }
  v14 = 0LL;
  while ( *(_QWORD *)(a1 + 120) < a2 )
  {
    v5 = ParseField(a1, a3, (__int64)&v15, &v13, v12, &v14);
    if ( v5 )
      break;
    v9 = **(_QWORD **)(a3 + 96);
    if ( (gDebugger & 0xD0) != 0 && *(_QWORD *)(a1 + 120) < a2 )
      ConPrintf(",");
    if ( a5 != -1 )
    {
      v10 = v13;
      if ( (unsigned int)(v13 + 7) >> 3 > a5 && *(_BYTE *)(*(_QWORD *)(v9 + 96) + 12LL) != 6 )
      {
        v5 = -1072431100;
        LogError(-1072431100);
        AcpiDiagTraceAmlError(a1, -1072431100);
        PrintDebugMessage(
          127,
          (const void *)((unsigned __int64)(unsigned int)(v10 + 7) >> 3),
          (const void *)a5,
          0LL,
          0LL);
        break;
      }
    }
  }
  if ( v14 )
    HeapFree((__int64)v14);
  if ( (gDebugger & 0xD0) != 0 )
  {
    --dword_1C00676B4;
    PrintIndent(a1);
    ConPrintf("}");
  }
  return v5;
}

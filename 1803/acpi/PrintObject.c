/*
 * XREFs of PrintObject @ 0x1C00491C0
 * Callers:
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     ReadObject @ 0x1C00031E0 (ReadObject.c)
 *     PrintObject @ 0x1C00491C0 (PrintObject.c)
 *     AccFieldUnit @ 0x1C004C040 (AccFieldUnit.c)
 *     NestAsyncEvalObject @ 0x1C004EC28 (NestAsyncEvalObject.c)
 *     ParseArgObj @ 0x1C0054760 (ParseArgObj.c)
 *     ParseLocalObj @ 0x1C00558EC (ParseLocalObj.c)
 *     ParseTerm @ 0x1C0056890 (ParseTerm.c)
 * Callees:
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     PrintBuffData @ 0x1C0049104 (PrintBuffData.c)
 *     PrintObject @ 0x1C00491C0 (PrintObject.c)
 */

ULONG __fastcall PrintObject(__int64 a1)
{
  int v2; // ecx
  const char *ObjectTypeName; // rax
  int v5; // edi

  v2 = *(unsigned __int16 *)(a1 + 2);
  switch ( v2 )
  {
    case 1:
      return ConPrintf("0x%I64x", *(_QWORD *)(a1 + 16));
    case 2:
      return ConPrintf("\"%s\"", *(_QWORD *)(a1 + 32));
    case 3:
      ConPrintf("Buffer(0x%x)", *(_DWORD *)(a1 + 24));
      return PrintBuffData(*(unsigned __int8 **)(a1 + 32), *(_DWORD *)(a1 + 24));
    case 4:
      ConPrintf("Package(%d){", **(_DWORD **)(a1 + 32));
      v5 = 0;
      while ( v5 < **(_DWORD **)(a1 + 32) )
      {
        ConPrintf("\n\t");
        PrintObject(*(_QWORD *)(a1 + 32) + 8 * (5LL * v5++ + 1));
        if ( v5 >= **(_DWORD **)(a1 + 32) )
          break;
        ConPrintf(",");
      }
      return ConPrintf("}");
    default:
      ObjectTypeName = (const char *)GetObjectTypeName(v2);
      return ConPrintf(
               "<Obj=%p,Type=%s,Value=0x%I64x,Buff=%p,Len=%d>",
               (const void *)a1,
               ObjectTypeName,
               *(_QWORD *)(a1 + 16),
               *(const void **)(a1 + 32),
               *(_DWORD *)(a1 + 24));
  }
}

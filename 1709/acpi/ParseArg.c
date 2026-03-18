/*
 * XREFs of ParseArg @ 0x1C0019DE4
 * Callers:
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 * Callees:
 *     ParseObjName @ 0x1C0018CA8 (ParseObjName.c)
 *     ParseSuperName @ 0x1C0018D90 (ParseSuperName.c)
 *     ParseOpcode @ 0x1C0019E50 (ParseOpcode.c)
 *     PushTerm @ 0x1C0019F78 (PushTerm.c)
 *     ParseIntObj @ 0x1C001A1F4 (ParseIntObj.c)
 *     ParseString @ 0x1C001A300 (ParseString.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     ParseInteger @ 0x1C00295FC (ParseInteger.c)
 */

__int64 __fastcall ParseArg(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  unsigned int v8; // eax
  unsigned int v9; // ebx
  char v11; // r8
  __int64 v12; // r8
  unsigned __int8 **v13; // r14
  __int64 v14; // r9
  unsigned __int8 v15; // cl

  v5 = a4;
  switch ( a2 )
  {
    case 'B':
      v12 = 1LL;
      return (unsigned int)ParseInteger(a1 + 120, a3, v12, a4);
    case 'C':
      return (unsigned int)ParseOpcode(a1, a4, a3);
    case 'D':
      v12 = 4LL;
      return (unsigned int)ParseInteger(a1 + 120, a3, v12, a4);
    case 'N':
      return (unsigned int)ParseObjName(a1, (unsigned __int8 **)(a1 + 120), a3, 0);
  }
  if ( a2 != 79 )
  {
    if ( a2 == 83 )
    {
      v11 = 0;
      return (unsigned int)ParseSuperName(a1, a3, v11, a4);
    }
    if ( a2 != 87 )
    {
      if ( a2 != 115 )
      {
        v9 = -1072431101;
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(121, a2, 0, 0, 0LL);
        return v9;
      }
      v11 = 1;
      return (unsigned int)ParseSuperName(a1, a3, v11, a4);
    }
    v12 = 2LL;
    return (unsigned int)ParseInteger(a1 + 120, a3, v12, a4);
  }
  v13 = (unsigned __int8 **)(a1 + 120);
  LOBYTE(a4) = 1;
  v9 = ParseIntObj(a1, a1 + 120, a3, a4);
  if ( v9 == -1072431103 )
  {
    LOBYTE(v14) = 1;
    v9 = ParseString(a1, v13, a3, v14);
    if ( v9 == -1072431103 )
    {
      v15 = **v13;
      if ( (unsigned __int8)(v15 - 17) <= 2u )
      {
        v8 = PushTerm(a1, (unsigned int)*v13, v5, (unsigned int)*(&OpcodeTable + v15), a3);
        ++*v13;
        return v8;
      }
    }
  }
  return v9;
}

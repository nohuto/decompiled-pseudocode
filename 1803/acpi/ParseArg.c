/*
 * XREFs of ParseArg @ 0x1C00545E8
 * Callers:
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseTerm @ 0x1C0056890 (ParseTerm.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     PushTerm @ 0x1C004E810 (PushTerm.c)
 *     ParseIntObj @ 0x1C00554A0 (ParseIntObj.c)
 *     ParseInteger @ 0x1C005568C (ParseInteger.c)
 *     ParseObjName @ 0x1C0055CEC (ParseObjName.c)
 *     ParseOpcode @ 0x1C0055E28 (ParseOpcode.c)
 *     ParseString @ 0x1C005652C (ParseString.c)
 *     ParseSuperName @ 0x1C005665C (ParseSuperName.c)
 */

__int64 __fastcall ParseArg(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 *v11; // r14
  __int64 v12; // r9
  unsigned __int8 v13; // cl

  v5 = a4;
  v6 = a3;
  switch ( a2 )
  {
    case 'B':
      v10 = 1LL;
      return (unsigned int)ParseInteger(a1 + 120, v6, v10);
    case 'C':
      return (unsigned int)ParseOpcode(a1, a4, a3);
    case 'D':
      v10 = 4LL;
      return (unsigned int)ParseInteger(a1 + 120, v6, v10);
    case 'N':
      return (unsigned int)ParseObjName(a1, a1 + 120, a3, 0LL);
  }
  if ( a2 != 79 )
  {
    if ( a2 == 83 )
    {
      a3 = 0LL;
      return (unsigned int)ParseSuperName(a1, v6, a3);
    }
    if ( a2 != 87 )
    {
      if ( a2 != 115 )
      {
        v8 = -1072431101;
        LogError(-1072431101);
        AcpiDiagTraceAmlError(a1, -1072431101);
        PrintDebugMessage(121, (const void *)a2, 0LL, 0LL, 0LL);
        return v8;
      }
      LOBYTE(a3) = 1;
      return (unsigned int)ParseSuperName(a1, v6, a3);
    }
    v10 = 2LL;
    return (unsigned int)ParseInteger(a1 + 120, v6, v10);
  }
  v11 = (__int64 *)(a1 + 120);
  LOBYTE(a4) = 1;
  v8 = ParseIntObj(a1, a1 + 120, a3, a4);
  if ( v8 == -1072431103 )
  {
    LOBYTE(v12) = 1;
    v8 = ParseString(a1, v11, v6, v12);
    if ( v8 == -1072431103 )
    {
      v13 = *(_BYTE *)*v11;
      if ( (unsigned __int8)(v13 - 17) <= 2u )
      {
        v9 = PushTerm(a1, *v11, v5, (__int64)*(&OpcodeTable + v13), v6);
        ++*v11;
        return v9;
      }
    }
  }
  return v8;
}

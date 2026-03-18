/*
 * XREFs of ParseIntObj @ 0x1C001A1F4
 * Callers:
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     ParseArg @ 0x1C0019DE4 (ParseArg.c)
 *     ParseOpcode @ 0x1C0019E50 (ParseOpcode.c)
 *     ParseFieldConnection @ 0x1C0063870 (ParseFieldConnection.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C001F658 (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

__int64 __fastcall ParseIntObj(__int64 a1, _WORD **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v7; // r10d
  const char *v9; // rcx

  v4 = 0;
  v7 = *(unsigned __int8 *)*a2;
  *a2 = (_WORD *)((char *)*a2 + 1);
  *(_WORD *)(a3 + 2) = 1;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( !(_BYTE)v7 )
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( (gDebugger & 0xD0) == 0 )
      return v4;
    v9 = "Zero";
    goto LABEL_24;
  }
  switch ( v7 )
  {
    case 1:
      *(_QWORD *)(a3 + 16) = 1LL;
      if ( (gDebugger & 0xD0) == 0 )
        return v4;
      v9 = "One";
      goto LABEL_24;
    case 10:
      *(_BYTE *)(a3 + 16) = *(_BYTE *)*a2;
      *a2 = (_WORD *)((char *)*a2 + 1);
      break;
    case 11:
      *(_WORD *)(a3 + 16) = *(*a2)++;
      break;
    case 12:
      *(_DWORD *)(a3 + 16) = *(_DWORD *)*a2;
      *a2 += 2;
      break;
    case 14:
      *(_QWORD *)(a3 + 16) = *(_QWORD *)*a2;
      *a2 += 4;
      break;
    case 255:
      *(_QWORD *)(a3 + 16) = (-(__int64)((unsigned __int8)IsCompatableDSDTRevision(
                                                            a1,
                                                            (unsigned int)(v7 - 255),
                                                            1LL,
                                                            a4) != 0) & 0xFFFFFFFF00000000uLL)
                           + 0xFFFFFFFF;
      if ( (gDebugger & 0xD0) == 0 )
        return v4;
      v9 = "Ones";
LABEL_24:
      ConPrintf(v9);
      return v4;
    default:
      *a2 = (_WORD *)((char *)*a2 - 1);
      if ( !(_BYTE)a4 )
      {
        LogError(3222536193LL);
        AcpiDiagTraceAmlError(a1, 3222536193LL);
        PrintDebugMessage(128, *(unsigned __int8 *)*a2, (unsigned int)*a2, 0, 0LL);
      }
      return (unsigned int)-1072431103;
  }
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("0x%I64x");
  return v4;
}

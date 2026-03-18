/*
 * XREFs of ParseIntObj @ 0x1C00554A0
 * Callers:
 *     ParsePackage @ 0x1C0052430 (ParsePackage.c)
 *     ParseArg @ 0x1C00545E8 (ParseArg.c)
 *     ParseFieldConnection @ 0x1C005508C (ParseFieldConnection.c)
 *     ParseOpcode @ 0x1C0055E28 (ParseOpcode.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     IsCompatableDSDTRevision @ 0x1C0046E34 (IsCompatableDSDTRevision.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseIntObj(__int64 a1, const void **a2, __int64 a3, char a4)
{
  unsigned int v4; // esi
  int v7; // r10d

  v4 = 0;
  v7 = *(unsigned __int8 *)*a2;
  *a2 = (char *)*a2 + 1;
  *(_WORD *)(a3 + 2) = 1;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( (_BYTE)v7 )
  {
    if ( v7 == 1 )
    {
      *(_QWORD *)(a3 + 16) = 1LL;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("One");
    }
    else
    {
      if ( v7 == 10 )
      {
        *(_BYTE *)(a3 + 16) = *(_BYTE *)*a2;
        *a2 = (char *)*a2 + 1;
      }
      else if ( v7 == 11 )
      {
        *(_WORD *)(a3 + 16) = *(_WORD *)*a2;
        *a2 = (char *)*a2 + 2;
      }
      else if ( v7 == 12 )
      {
        *(_DWORD *)(a3 + 16) = *(_DWORD *)*a2;
        *a2 = (char *)*a2 + 4;
      }
      else
      {
        if ( v7 != 14 )
        {
          if ( v7 == 255 )
          {
            *(_QWORD *)(a3 + 16) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("Ones");
          }
          else
          {
            *a2 = (char *)*a2 - 1;
            if ( !a4 )
            {
              LogError(-1072431103);
              AcpiDiagTraceAmlError(a1, -1072431103);
              PrintDebugMessage(128, (const void *)*(unsigned __int8 *)*a2, *a2, 0LL, 0LL);
            }
            return (unsigned int)-1072431103;
          }
          return v4;
        }
        *(_QWORD *)(a3 + 16) = *(_QWORD *)*a2;
        *a2 = (char *)*a2 + 8;
      }
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("0x%I64x", *(_QWORD *)(a3 + 16));
    }
  }
  else
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Zero");
  }
  return v4;
}

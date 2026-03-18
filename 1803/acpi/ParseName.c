/*
 * XREFs of ParseName @ 0x1C0055960
 * Callers:
 *     ParseAndGetNameSpaceObject @ 0x1C0054530 (ParseAndGetNameSpaceObject.c)
 *     ParseFieldConnection @ 0x1C005508C (ParseFieldConnection.c)
 *     ParseObjName @ 0x1C0055CEC (ParseObjName.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1C0003A00 (RtlStringCchCopyA.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ParseNameTail @ 0x1C0055B00 (ParseNameTail.c)
 */

__int64 __fastcall ParseName(__int64 a1, char **a2, char *a3)
{
  char *v4; // rdi
  char **v5; // rbx
  char v6; // cl
  _BYTE *v7; // rcx
  char *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx

  v4 = a3;
  v5 = a2;
  v6 = **a2;
  if ( v6 == 92 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "\\");
    ++*v5;
  }
  else
  {
    if ( v6 != 94 )
    {
      *a3 = 0;
      goto LABEL_11;
    }
    RtlStringCchCopyA(a3, 0x100uLL, "^");
    ++*v5;
    v7 = v4 + 1;
    v8 = *v5;
    v9 = 1LL;
    do
    {
      if ( *v8 != 94 )
        break;
      *v7 = 94;
      v9 = (unsigned int)(v9 + 1);
      ++*v5;
      ++v7;
      v8 = *v5;
    }
    while ( (unsigned int)v9 < 0xFF );
    v4[v9] = 0;
    if ( **v5 == 94 )
    {
      v10 = -1073741562;
      LogError(-1073741562);
      AcpiDiagTraceAmlError(a1, -1073741562);
      PrintDebugMessage(129, v4, 0LL, 0LL, 0LL);
      return v10;
    }
  }
  a3 = v4;
  a2 = v5;
LABEL_11:
  v10 = ParseNameTail(a1, a2, a3);
  if ( !v10 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s", v4);
  return v10;
}

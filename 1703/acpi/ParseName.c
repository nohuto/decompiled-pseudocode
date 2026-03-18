/*
 * XREFs of ParseName @ 0x1C00143AC
 * Callers:
 *     ParseAndGetNameSpaceObject @ 0x1C00140C4 (ParseAndGetNameSpaceObject.c)
 *     ParseObjName @ 0x1C001C334 (ParseObjName.c)
 *     ParseFieldConnection @ 0x1C00626A0 (ParseFieldConnection.c)
 * Callees:
 *     ParseNameTail @ 0x1C0014650 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1C0016D78 (RtlStringCchCopyA.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 */

__int64 __fastcall ParseName(__int64 a1, char **a2, char *a3)
{
  char v6; // cl
  unsigned int v7; // ebx
  _BYTE *v9; // rcx
  char *v10; // rdx
  __int64 v11; // rax

  v6 = **a2;
  if ( v6 == 92 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "\\");
    ++*a2;
  }
  else if ( v6 == 94 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "^");
    ++*a2;
    v9 = a3 + 1;
    v10 = *a2;
    v11 = 1LL;
    do
    {
      if ( *v10 != 94 )
        break;
      *v9 = 94;
      v11 = (unsigned int)(v11 + 1);
      ++*a2;
      ++v9;
      v10 = *a2;
    }
    while ( (unsigned int)v11 < 0xFF );
    a3[v11] = 0;
    if ( **a2 == 94 )
    {
      v7 = -1073741562;
      LogError(3221225734LL);
      AcpiDiagTraceAmlError(a1, 3221225734LL);
      PrintDebugMessage(129, (_DWORD)a3, 0, 0, 0LL);
      return v7;
    }
  }
  else
  {
    *a3 = 0;
  }
  v7 = ParseNameTail(a1);
  if ( !v7 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s");
  return v7;
}

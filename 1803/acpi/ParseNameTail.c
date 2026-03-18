/*
 * XREFs of ParseNameTail @ 0x1C0055B00
 * Callers:
 *     ParseName @ 0x1C0055960 (ParseName.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1C0003A00 (RtlStringCchCopyA.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     RtlStringCchCopyNA @ 0x1C0027224 (RtlStringCchCopyNA.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseNameTail(__int64 a1, STRSAFE_PCNZCH *a2, _BYTE *a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  _BYTE *v8; // rax
  char v9; // cl
  const char *v10; // rax
  int v11; // ebp

  v3 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a3[v5] );
  v8 = *a2;
  v9 = **a2;
  if ( v9 )
  {
    if ( v9 == 47 )
    {
      v10 = v8 + 1;
      *a2 = v10;
      v11 = *(unsigned __int8 *)v10;
      *a2 = v10 + 1;
    }
    else
    {
      if ( v9 == 46 )
      {
        v11 = 2;
        *a2 = v8 + 1;
        goto LABEL_11;
      }
      v11 = 1;
    }
    if ( v11 )
    {
LABEL_11:
      while ( (unsigned __int64)(unsigned int)v5 + 4 < 0x100 )
      {
        RtlStringCchCopyNA(&a3[(unsigned int)v5], (unsigned int)(256 - v5), *a2, 4uLL);
        *a2 += 4;
        LODWORD(v5) = v5 + 4;
        if ( !--v11 )
          return v3;
        if ( (unsigned int)(v5 + 1) < 0x100 )
        {
          RtlStringCchCopyA(&a3[(unsigned int)v5], (unsigned int)(256 - v5), ".");
          LODWORD(v5) = v5 + 1;
        }
      }
      LogError(-1073741562);
      AcpiDiagTraceAmlError(a1, -1073741562);
      PrintDebugMessage(130, a3, 0LL, 0LL, 0LL);
      return (unsigned int)-1073741562;
    }
  }
  else
  {
    *a2 = v8 + 1;
  }
  return v3;
}

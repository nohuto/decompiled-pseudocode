/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1404E394C
 * Callers:
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x1400688E4 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x1400695C0 (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  IoGetFileObjectFilterContext(a1, &P, 0);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1);
    ExFreePoolWithTag(P, 0);
  }
}

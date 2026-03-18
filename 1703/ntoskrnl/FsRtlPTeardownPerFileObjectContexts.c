/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x14048C05C
 * Callers:
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 * Callees:
 *     IoChangeFileObjectFilterContext @ 0x140050FE8 (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x140051164 (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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

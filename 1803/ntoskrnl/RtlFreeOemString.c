/*
 * XREFs of RtlFreeOemString @ 0x140605E40
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x1402EA010 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}

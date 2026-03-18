/*
 * XREFs of RtlFreeOemString @ 0x14059F100
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}

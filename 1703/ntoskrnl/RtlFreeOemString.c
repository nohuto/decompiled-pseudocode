/*
 * XREFs of RtlFreeOemString @ 0x140586090
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}

/*
 * XREFs of IopGetMaxValidSectionSize @ 0x140234F28
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140235DE0 (KeCapturePersistentThreadState.c)
 * Callees:
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 */

__int64 __fastcall IopGetMaxValidSectionSize(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < a2; ++i )
  {
    if ( !MiIsAddressValid(a1 + i) )
      break;
  }
  return i;
}

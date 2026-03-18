/*
 * XREFs of ObpDereferenceNamedObject @ 0x140088144
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
 */

LONG_PTR __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  return ObfDereferenceObject((PVOID)(a1 + 48));
}

/*
 * XREFs of ExpCovFreeUnloadedModuleEntry @ 0x14071F57C
 * Callers:
 *     ExpCovCreateUnloadedModuleEntry @ 0x14071F280 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x14071F504 (ExpCovDeleteUnloadedModuleEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall ExpCovFreeUnloadedModuleEntry(UNICODE_STRING *P)
{
  wchar_t *Buffer; // rcx

  if ( !P )
    return 3221225485LL;
  if ( P[1].Buffer )
    RtlFreeUnicodeString(P + 1);
  if ( P[2].Buffer )
    RtlFreeUnicodeString(P + 2);
  Buffer = P[3].Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}

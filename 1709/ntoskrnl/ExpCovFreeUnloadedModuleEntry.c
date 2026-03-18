/*
 * XREFs of ExpCovFreeUnloadedModuleEntry @ 0x14075F3EC
 * Callers:
 *     ExpCovCreateUnloadedModuleEntry @ 0x14075F0F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x14075F374 (ExpCovDeleteUnloadedModuleEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
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

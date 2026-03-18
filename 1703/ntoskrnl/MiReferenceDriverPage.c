/*
 * XREFs of MiReferenceDriverPage @ 0x14020D294
 * Callers:
 *     MiLockHotPatchPages @ 0x140211784 (MiLockHotPatchPages.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x1400CB220 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiReferenceDriverPage(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = MiAreChargesNeededToLockPage(a1);
  if ( (_DWORD)result )
    *(_BYTE *)(v2 + 35) |= 0x20u;
  ++*(_WORD *)(v2 + 32);
  return result;
}

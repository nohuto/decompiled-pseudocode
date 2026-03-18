/*
 * XREFs of MiReferenceDriverPage @ 0x140252558
 * Callers:
 *     MiLockHotPatchPages @ 0x140255CEC (MiLockHotPatchPages.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140031FE0 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiReferenceDriverPage(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10

  result = MiAreChargesNeededToLockPage(a1);
  if ( (_DWORD)result )
    *(_BYTE *)(v2 + 35) |= 0x20u;
  ++*(_WORD *)(v2 + 32);
  return result;
}

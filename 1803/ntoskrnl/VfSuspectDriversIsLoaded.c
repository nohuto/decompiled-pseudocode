/*
 * XREFs of VfSuspectDriversIsLoaded @ 0x1408E1A38
 * Callers:
 *     ViDriverReApplyVerifierForAll @ 0x140816010 (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x14082AFC8 (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversIsLoaded(const UNICODE_STRING *a1)
{
  __int64 v1; // rax

  v1 = ViSuspectDriversLookupEntry(a1);
  return v1 && *(_DWORD *)(v1 + 16) > *(_DWORD *)(v1 + 20);
}

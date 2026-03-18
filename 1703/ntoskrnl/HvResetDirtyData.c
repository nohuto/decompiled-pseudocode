/*
 * XREFs of HvResetDirtyData @ 0x1404B7098
 * Callers:
 *     HvStoreModifiedData @ 0x1404B7370 (HvStoreModifiedData.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x140426810 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 80) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 72));
    result = (unsigned int)_InterlockedExchangeAdd(&CmpDirtySectorCount, -*(_DWORD *)(a1 + 88));
    *(_DWORD *)(a1 + 88) = 0;
  }
  return result;
}

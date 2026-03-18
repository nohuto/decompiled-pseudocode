/*
 * XREFs of HvResetDirtyData @ 0x140471CD4
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x1405138AC (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x140566C30 (HvpResetPageProtection.c)
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
